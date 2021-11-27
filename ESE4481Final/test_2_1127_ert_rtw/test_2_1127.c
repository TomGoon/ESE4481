/*
 * test_2_1127.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "test_2_1127".
 *
 * Model version              : 1.1
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Sat Nov 27 13:22:28 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "test_2_1127.h"
#include "test_2_1127_private.h"

/* Exported block signals */
CommandBus cmd_inport;                 /* '<Root>/AC cmd' */
SensorsBus sensor_inport;              /* '<Root>/Sensors' */
uint8_T flag_outport;                  /* '<S1>/Manual Switch' */

/* Block states (default storage) */
DW_test_2_1127_T test_2_1127_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_test_2_1127_T test_2_1127_Y;

/* Real-time model */
static RT_MODEL_test_2_1127_T test_2_1127_M_;
RT_MODEL_test_2_1127_T *const test_2_1127_M = &test_2_1127_M_;

/* Model step function */
void test_2_1127_step(void)
{
  /* Outport: '<Root>/Motors' */
  test_2_1127_Y.Motors[0] = 0.0F;
  test_2_1127_Y.Motors[1] = 0.0F;
  test_2_1127_Y.Motors[2] = 0.0F;
  test_2_1127_Y.Motors[3] = 0.0F;

  /* ManualSwitch: '<S1>/Manual Switch' */
  if (test_2_1127_P.ManualSwitch_CurrentSetting == 1) {
    /* ManualSwitch: '<S1>/Manual Switch' incorporates:
     *  Constant: '<S1>/Constant2'
     */
    flag_outport = test_2_1127_P.Constant2_Value;
  } else {
    /* ManualSwitch: '<S1>/Manual Switch' incorporates:
     *  Constant: '<S1>/Constant1'
     */
    flag_outport = test_2_1127_P.Constant1_Value;
  }

  /* End of ManualSwitch: '<S1>/Manual Switch' */

  /* Outport: '<Root>/Flag' */
  test_2_1127_Y.Flag = flag_outport;

  /* DiscretePulseGenerator: '<S1>/Pulse Generator1' */
  if (test_2_1127_DW.clockTickCounter >= test_2_1127_P.PulseGenerator1_Period -
      1.0) {
    test_2_1127_DW.clockTickCounter = 0;
  } else {
    test_2_1127_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator1' */

  /* DiscretePulseGenerator: '<S1>/Pulse Generator2' */
  if (test_2_1127_DW.clockTickCounter_n >= test_2_1127_P.PulseGenerator2_Period
      - 1.0) {
    test_2_1127_DW.clockTickCounter_n = 0;
  } else {
    test_2_1127_DW.clockTickCounter_n++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator2' */

  /* DiscretePulseGenerator: '<S1>/Pulse Generator3' */
  if (test_2_1127_DW.clockTickCounter_h >= test_2_1127_P.PulseGenerator3_Period
      - 1.0) {
    test_2_1127_DW.clockTickCounter_h = 0;
  } else {
    test_2_1127_DW.clockTickCounter_h++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator3' */

  /* DiscretePulseGenerator: '<S1>/Pulse Generator4' */
  if (test_2_1127_DW.clockTickCounter_a >= test_2_1127_P.PulseGenerator4_Period
      - 1.0) {
    test_2_1127_DW.clockTickCounter_a = 0;
  } else {
    test_2_1127_DW.clockTickCounter_a++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator4' */

  /* Matfile logging */
  rt_UpdateTXYLogVars(test_2_1127_M->rtwLogInfo,
                      (&test_2_1127_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.005s, 0.0s] */
    if ((rtmGetTFinal(test_2_1127_M)!=-1) &&
        !((rtmGetTFinal(test_2_1127_M)-test_2_1127_M->Timing.taskTime0) >
          test_2_1127_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(test_2_1127_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++test_2_1127_M->Timing.clockTick0)) {
    ++test_2_1127_M->Timing.clockTickH0;
  }

  test_2_1127_M->Timing.taskTime0 = test_2_1127_M->Timing.clockTick0 *
    test_2_1127_M->Timing.stepSize0 + test_2_1127_M->Timing.clockTickH0 *
    test_2_1127_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void test_2_1127_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)test_2_1127_M, 0,
                sizeof(RT_MODEL_test_2_1127_T));
  rtmSetTFinal(test_2_1127_M, 100.0);
  test_2_1127_M->Timing.stepSize0 = 0.005;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    test_2_1127_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(test_2_1127_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(test_2_1127_M->rtwLogInfo, (NULL));
    rtliSetLogT(test_2_1127_M->rtwLogInfo, "tout");
    rtliSetLogX(test_2_1127_M->rtwLogInfo, "");
    rtliSetLogXFinal(test_2_1127_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(test_2_1127_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(test_2_1127_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(test_2_1127_M->rtwLogInfo, 0);
    rtliSetLogDecimation(test_2_1127_M->rtwLogInfo, 1);
    rtliSetLogY(test_2_1127_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(test_2_1127_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(test_2_1127_M->rtwLogInfo, (NULL));
  }

  /* block I/O */

  /* exported global signals */
  flag_outport = 0U;

  /* states (dwork) */
  (void) memset((void *)&test_2_1127_DW, 0,
                sizeof(DW_test_2_1127_T));

  /* external inputs */
  (void)memset(&cmd_inport, 0, sizeof(CommandBus));
  (void)memset(&sensor_inport, 0, sizeof(SensorsBus));

  /* external outputs */
  (void) memset((void *)&test_2_1127_Y, 0,
                sizeof(ExtY_test_2_1127_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(test_2_1127_M->rtwLogInfo, 0.0, rtmGetTFinal
    (test_2_1127_M), test_2_1127_M->Timing.stepSize0, (&rtmGetErrorStatus
    (test_2_1127_M)));

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator1' */
  test_2_1127_DW.clockTickCounter = 0;

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator2' */
  test_2_1127_DW.clockTickCounter_n = -1200;

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator3' */
  test_2_1127_DW.clockTickCounter_h = -400;

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator4' */
  test_2_1127_DW.clockTickCounter_a = -800;
}

/* Model terminate function */
void test_2_1127_terminate(void)
{
  /* (no terminate code required) */
}
