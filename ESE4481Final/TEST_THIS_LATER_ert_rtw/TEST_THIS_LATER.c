/*
 * TEST_THIS_LATER.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "TEST_THIS_LATER".
 *
 * Model version              : 1.1
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Mon Nov 29 15:16:02 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TEST_THIS_LATER.h"
#include "TEST_THIS_LATER_private.h"

/* Exported block signals */
CommandBus cmd_inport;                 /* '<Root>/AC cmd' */
SensorsBus sensor_inport;              /* '<Root>/Sensors' */
real32_T motors_outport[4];            /* '<S1>/Saturation1' */
uint8_T flag_outport;                  /* '<S1>/Manual Switch' */

/* Block states (default storage) */
DW_TEST_THIS_LATER_T TEST_THIS_LATER_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_TEST_THIS_LATER_T TEST_THIS_LATER_Y;

/* Real-time model */
static RT_MODEL_TEST_THIS_LATER_T TEST_THIS_LATER_M_;
RT_MODEL_TEST_THIS_LATER_T *const TEST_THIS_LATER_M = &TEST_THIS_LATER_M_;

/* Model step function */
void TEST_THIS_LATER_step(void)
{
  real_T rtb_VectorConcatenate1_idx_0;
  real_T rtb_VectorConcatenate1_idx_1;
  real_T rtb_VectorConcatenate1_idx_2;
  real_T rtb_VectorConcatenate1_idx_3;

  /* DiscretePulseGenerator: '<S1>/Pulse Generator1' */
  rtb_VectorConcatenate1_idx_0 = (TEST_THIS_LATER_DW.clockTickCounter <
    TEST_THIS_LATER_P.PulseGenerator1_Duty) &&
    (TEST_THIS_LATER_DW.clockTickCounter >= 0) ?
    TEST_THIS_LATER_P.PulseGenerator1_Amp : 0.0;
  if (TEST_THIS_LATER_DW.clockTickCounter >=
      TEST_THIS_LATER_P.PulseGenerator1_Period - 1.0) {
    TEST_THIS_LATER_DW.clockTickCounter = 0;
  } else {
    TEST_THIS_LATER_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator1' */

  /* DiscretePulseGenerator: '<S1>/Pulse Generator3' */
  rtb_VectorConcatenate1_idx_1 = (TEST_THIS_LATER_DW.clockTickCounter_h <
    TEST_THIS_LATER_P.PulseGenerator3_Duty) &&
    (TEST_THIS_LATER_DW.clockTickCounter_h >= 0) ?
    TEST_THIS_LATER_P.PulseGenerator3_Amp : 0.0;
  if (TEST_THIS_LATER_DW.clockTickCounter_h >=
      TEST_THIS_LATER_P.PulseGenerator3_Period - 1.0) {
    TEST_THIS_LATER_DW.clockTickCounter_h = 0;
  } else {
    TEST_THIS_LATER_DW.clockTickCounter_h++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator3' */

  /* DiscretePulseGenerator: '<S1>/Pulse Generator4' */
  rtb_VectorConcatenate1_idx_2 = (TEST_THIS_LATER_DW.clockTickCounter_a <
    TEST_THIS_LATER_P.PulseGenerator4_Duty) &&
    (TEST_THIS_LATER_DW.clockTickCounter_a >= 0) ?
    TEST_THIS_LATER_P.PulseGenerator4_Amp : 0.0;
  if (TEST_THIS_LATER_DW.clockTickCounter_a >=
      TEST_THIS_LATER_P.PulseGenerator4_Period - 1.0) {
    TEST_THIS_LATER_DW.clockTickCounter_a = 0;
  } else {
    TEST_THIS_LATER_DW.clockTickCounter_a++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator4' */

  /* DiscretePulseGenerator: '<S1>/Pulse Generator2' */
  rtb_VectorConcatenate1_idx_3 = (TEST_THIS_LATER_DW.clockTickCounter_n <
    TEST_THIS_LATER_P.PulseGenerator2_Duty) &&
    (TEST_THIS_LATER_DW.clockTickCounter_n >= 0) ?
    TEST_THIS_LATER_P.PulseGenerator2_Amp : 0.0;
  if (TEST_THIS_LATER_DW.clockTickCounter_n >=
      TEST_THIS_LATER_P.PulseGenerator2_Period - 1.0) {
    TEST_THIS_LATER_DW.clockTickCounter_n = 0;
  } else {
    TEST_THIS_LATER_DW.clockTickCounter_n++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator2' */

  /* Saturate: '<S1>/Saturation1' */
  if (rtb_VectorConcatenate1_idx_0 > TEST_THIS_LATER_P.Saturation1_UpperSat) {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[0] = TEST_THIS_LATER_P.Saturation1_UpperSat;
  } else if (rtb_VectorConcatenate1_idx_0 <
             TEST_THIS_LATER_P.Saturation1_LowerSat) {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[0] = TEST_THIS_LATER_P.Saturation1_LowerSat;
  } else {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[0] = (real32_T)rtb_VectorConcatenate1_idx_0;
  }

  /* Outport: '<Root>/Motors' incorporates:
   *  Saturate: '<S1>/Saturation1'
   */
  TEST_THIS_LATER_Y.Motors[0] = motors_outport[0];

  /* Saturate: '<S1>/Saturation1' */
  if (rtb_VectorConcatenate1_idx_1 > TEST_THIS_LATER_P.Saturation1_UpperSat) {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[1] = TEST_THIS_LATER_P.Saturation1_UpperSat;
  } else if (rtb_VectorConcatenate1_idx_1 <
             TEST_THIS_LATER_P.Saturation1_LowerSat) {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[1] = TEST_THIS_LATER_P.Saturation1_LowerSat;
  } else {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[1] = (real32_T)rtb_VectorConcatenate1_idx_1;
  }

  /* Outport: '<Root>/Motors' incorporates:
   *  Saturate: '<S1>/Saturation1'
   */
  TEST_THIS_LATER_Y.Motors[1] = motors_outport[1];

  /* Saturate: '<S1>/Saturation1' */
  if (rtb_VectorConcatenate1_idx_2 > TEST_THIS_LATER_P.Saturation1_UpperSat) {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[2] = TEST_THIS_LATER_P.Saturation1_UpperSat;
  } else if (rtb_VectorConcatenate1_idx_2 <
             TEST_THIS_LATER_P.Saturation1_LowerSat) {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[2] = TEST_THIS_LATER_P.Saturation1_LowerSat;
  } else {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[2] = (real32_T)rtb_VectorConcatenate1_idx_2;
  }

  /* Outport: '<Root>/Motors' incorporates:
   *  Saturate: '<S1>/Saturation1'
   */
  TEST_THIS_LATER_Y.Motors[2] = motors_outport[2];

  /* Saturate: '<S1>/Saturation1' */
  if (rtb_VectorConcatenate1_idx_3 > TEST_THIS_LATER_P.Saturation1_UpperSat) {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[3] = TEST_THIS_LATER_P.Saturation1_UpperSat;
  } else if (rtb_VectorConcatenate1_idx_3 <
             TEST_THIS_LATER_P.Saturation1_LowerSat) {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[3] = TEST_THIS_LATER_P.Saturation1_LowerSat;
  } else {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[3] = (real32_T)rtb_VectorConcatenate1_idx_3;
  }

  /* Outport: '<Root>/Motors' incorporates:
   *  Saturate: '<S1>/Saturation1'
   */
  TEST_THIS_LATER_Y.Motors[3] = motors_outport[3];

  /* ManualSwitch: '<S1>/Manual Switch' */
  if (TEST_THIS_LATER_P.ManualSwitch_CurrentSetting == 1) {
    /* ManualSwitch: '<S1>/Manual Switch' incorporates:
     *  Constant: '<S1>/Constant2'
     */
    flag_outport = TEST_THIS_LATER_P.Constant2_Value;
  } else {
    /* ManualSwitch: '<S1>/Manual Switch' incorporates:
     *  Constant: '<S1>/Constant1'
     */
    flag_outport = TEST_THIS_LATER_P.Constant1_Value;
  }

  /* End of ManualSwitch: '<S1>/Manual Switch' */

  /* Outport: '<Root>/Flag' */
  TEST_THIS_LATER_Y.Flag = flag_outport;

  /* Matfile logging */
  rt_UpdateTXYLogVars(TEST_THIS_LATER_M->rtwLogInfo,
                      (&TEST_THIS_LATER_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.005s, 0.0s] */
    if ((rtmGetTFinal(TEST_THIS_LATER_M)!=-1) &&
        !((rtmGetTFinal(TEST_THIS_LATER_M)-TEST_THIS_LATER_M->Timing.taskTime0) >
          TEST_THIS_LATER_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(TEST_THIS_LATER_M, "Simulation finished");
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
  if (!(++TEST_THIS_LATER_M->Timing.clockTick0)) {
    ++TEST_THIS_LATER_M->Timing.clockTickH0;
  }

  TEST_THIS_LATER_M->Timing.taskTime0 = TEST_THIS_LATER_M->Timing.clockTick0 *
    TEST_THIS_LATER_M->Timing.stepSize0 + TEST_THIS_LATER_M->Timing.clockTickH0 *
    TEST_THIS_LATER_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void TEST_THIS_LATER_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)TEST_THIS_LATER_M, 0,
                sizeof(RT_MODEL_TEST_THIS_LATER_T));
  rtmSetTFinal(TEST_THIS_LATER_M, 100.0);
  TEST_THIS_LATER_M->Timing.stepSize0 = 0.005;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    TEST_THIS_LATER_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(TEST_THIS_LATER_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(TEST_THIS_LATER_M->rtwLogInfo, (NULL));
    rtliSetLogT(TEST_THIS_LATER_M->rtwLogInfo, "tout");
    rtliSetLogX(TEST_THIS_LATER_M->rtwLogInfo, "");
    rtliSetLogXFinal(TEST_THIS_LATER_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(TEST_THIS_LATER_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(TEST_THIS_LATER_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(TEST_THIS_LATER_M->rtwLogInfo, 0);
    rtliSetLogDecimation(TEST_THIS_LATER_M->rtwLogInfo, 1);
    rtliSetLogY(TEST_THIS_LATER_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(TEST_THIS_LATER_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(TEST_THIS_LATER_M->rtwLogInfo, (NULL));
  }

  /* block I/O */

  /* exported global signals */
  motors_outport[0] = 0.0F;
  motors_outport[1] = 0.0F;
  motors_outport[2] = 0.0F;
  motors_outport[3] = 0.0F;
  flag_outport = 0U;

  /* states (dwork) */
  (void) memset((void *)&TEST_THIS_LATER_DW, 0,
                sizeof(DW_TEST_THIS_LATER_T));

  /* external inputs */
  (void)memset(&cmd_inport, 0, sizeof(CommandBus));
  (void)memset(&sensor_inport, 0, sizeof(SensorsBus));

  /* external outputs */
  (void) memset((void *)&TEST_THIS_LATER_Y, 0,
                sizeof(ExtY_TEST_THIS_LATER_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(TEST_THIS_LATER_M->rtwLogInfo, 0.0,
    rtmGetTFinal(TEST_THIS_LATER_M), TEST_THIS_LATER_M->Timing.stepSize0,
    (&rtmGetErrorStatus(TEST_THIS_LATER_M)));

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator1' */
  TEST_THIS_LATER_DW.clockTickCounter = 0;

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator3' */
  TEST_THIS_LATER_DW.clockTickCounter_h = -400;

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator4' */
  TEST_THIS_LATER_DW.clockTickCounter_a = -800;

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator2' */
  TEST_THIS_LATER_DW.clockTickCounter_n = -1200;
}

/* Model terminate function */
void TEST_THIS_LATER_terminate(void)
{
  /* (no terminate code required) */
}
