#include "test_2_1127.h"
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

  test_2_1127_step();

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
  rtmSetErrorStatus(test_2_1127_M, 0);
  test_2_1127_initialize();
  ;
  runModel =
    rtmGetErrorStatus(test_2_1127_M) == (NULL);
  ;
  while (runModel) {
    rt_OneStep();
    stopRequested = !(
                      rtmGetErrorStatus(test_2_1127_M) == (NULL));
    runModel = !(stopRequested);
  }

  rt_StopDataLogging(MATFILE, test_2_1127_M->rtwLogInfo);

  /* Disable rt_OneStep() here */

  /* Terminate model */
  test_2_1127_terminate();
  ;
  return 0;
}
