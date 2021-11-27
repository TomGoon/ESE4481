#include "main.h"
#include "rtwtypes.h"

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

  main_step();

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
  rtmSetErrorStatus(main_M, 0);
  main_initialize();
  ;
  runModel =
    rtmGetErrorStatus(main_M) == (NULL);
  ;
  while (runModel) {
    rt_OneStep();
    stopRequested = !(
                      rtmGetErrorStatus(main_M) == (NULL));
    runModel = !(stopRequested);
  }

  /* Disable rt_OneStep() here */

  /* Terminate model */
  main_terminate();
  ;
  return 0;
}
