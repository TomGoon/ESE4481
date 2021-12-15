#include "final_project.h"
#include "rtwtypes.h"
#include <ext_work.h>
#include <ext_svr.h>
#include <ext_share.h>
#include <updown.h>
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
  rtExtModeCheckEndTrigger();
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

  /* initialize external mode */
  rtParseArgsForExtMode(0, NULL);
  final_project_initialize();
  ;
  ;

  /* External mode */
  rtSetTFinalForExtMode(&rtmGetTFinal(final_project_M));
  rtExtModeCheckInit(2);

  {
    boolean_T rtmStopReq = false;
    rtExtModeWaitForStartPkt(final_project_M->extModeInfo, 2, &rtmStopReq);
    if (rtmStopReq) {
      rtmSetStopRequested(final_project_M, true);
    }
  }

  rtERTExtModeStartMsg();
  ;
  runModel =
    (rtmGetErrorStatus(final_project_M) == (NULL)) && !rtmGetStopRequested
    (final_project_M);
  ;
  while (runModel) {
    /* External mode */
    {
      boolean_T rtmStopReq = false;
      rtExtModeOneStep(final_project_M->extModeInfo, 2, &rtmStopReq);
      if (rtmStopReq) {
        rtmSetStopRequested(final_project_M, true);
      }
    }

    rt_OneStep();
    stopRequested = !(
                      (rtmGetErrorStatus(final_project_M) == (NULL)) &&
                      !rtmGetStopRequested(final_project_M));
    runModel = !(stopRequested);
  }

  rt_StopDataLogging(MATFILE, final_project_M->rtwLogInfo);

  /* Disable rt_OneStep() here */

  /* Terminate model */
  final_project_terminate();
  rtExtModeShutdown(2);
  ;
  return 0;
}
