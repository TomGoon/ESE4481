#include "final_project.h"
#include "rtwtypes.h"
#include "rt_logging.h"
#ifndef SAVEFILE
#define MATFILE2(file)                 #file ".mat"
#define MATFILE1(file)                 MATFILE2(file)
#define MATFILE                        MATFILE1(MODEL)
#else
#define QUOTE1(name)                   #name
#define QUOTE(name)                    QUOTE1(name)              /* need to expand name */
#define MATFILE                        QUOTE(SAVEFILE)
#endif

volatile int IsrOverrun = 0;
static boolean_T OverrunFlag = 0;
void rt_OneStep(void)
{
  /* Check for overrun. Protect OverrunFlag against preemption */
  if (OverrunFlag++) {
    IsrOverrun = 1;
    OverrunFlag--;
    return;
  }

  final_project_step();

  /* Get model outputs here */
  OverrunFlag--;
}

#define UNUSED(x)                      x = x

volatile boolean_T stopRequested;
volatile boolean_T runModel;
int main(void)
{
  float modelBaseRate = 0.005;
  float systemClock = 416;

  /* Initialize variables */
  stopRequested = false;
  runModel = false;
  UNUSED(modelBaseRate);
  UNUSED(systemClock);
  rtmSetErrorStatus(final_project_M, 0);
  final_project_initialize();
  ;
  runModel =
    rtmGetErrorStatus(final_project_M) == (NULL);
  ;
  while (runModel) {
    rt_OneStep();
    stopRequested = !(
                      rtmGetErrorStatus(final_project_M) == (NULL));
    runModel = !(stopRequested);
  }

  rt_StopDataLogging(MATFILE, final_project_M->rtwLogInfo);

  /* Disable rt_OneStep() here */

  /* Terminate model */
  final_project_terminate();
  ;
  return 0;
}
