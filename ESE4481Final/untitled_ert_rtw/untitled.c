/*
 * untitled.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "untitled".
 *
 * Model version              : 1.0
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Sat Nov 27 13:20:36 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"

/* Exported block signals */
CommandBus cmd_inport;                 /* '<Root>/AC cmd' */
SensorsBus sensor_inport;              /* '<Root>/Sensors' */
real32_T motors_outport[4];            /* '<S1>/Saturation1' */
uint8_T flag_outport;                  /* '<S1>/Manual Switch' */

/* Block states (default storage) */
DW_untitled_T untitled_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_untitled_T untitled_Y;

/* Real-time model */
static RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Model step function */
void untitled_step(void)
{
  real_T rtb_VectorConcatenate1_idx_0;
  real_T rtb_VectorConcatenate1_idx_1;
  real_T rtb_VectorConcatenate1_idx_2;
  real_T rtb_VectorConcatenate1_idx_3;

  /* DiscretePulseGenerator: '<S1>/Pulse Generator1' */
  rtb_VectorConcatenate1_idx_0 = (untitled_DW.clockTickCounter <
    untitled_P.PulseGenerator1_Duty) && (untitled_DW.clockTickCounter >= 0) ?
    untitled_P.PulseGenerator1_Amp : 0.0;
  if (untitled_DW.clockTickCounter >= untitled_P.PulseGenerator1_Period - 1.0) {
    untitled_DW.clockTickCounter = 0;
  } else {
    untitled_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator1' */

  /* DiscretePulseGenerator: '<S1>/Pulse Generator3' */
  rtb_VectorConcatenate1_idx_1 = (untitled_DW.clockTickCounter_h <
    untitled_P.PulseGenerator3_Duty) && (untitled_DW.clockTickCounter_h >= 0) ?
    untitled_P.PulseGenerator3_Amp : 0.0;
  if (untitled_DW.clockTickCounter_h >= untitled_P.PulseGenerator3_Period - 1.0)
  {
    untitled_DW.clockTickCounter_h = 0;
  } else {
    untitled_DW.clockTickCounter_h++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator3' */

  /* DiscretePulseGenerator: '<S1>/Pulse Generator4' */
  rtb_VectorConcatenate1_idx_2 = (untitled_DW.clockTickCounter_a <
    untitled_P.PulseGenerator4_Duty) && (untitled_DW.clockTickCounter_a >= 0) ?
    untitled_P.PulseGenerator4_Amp : 0.0;
  if (untitled_DW.clockTickCounter_a >= untitled_P.PulseGenerator4_Period - 1.0)
  {
    untitled_DW.clockTickCounter_a = 0;
  } else {
    untitled_DW.clockTickCounter_a++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator4' */

  /* DiscretePulseGenerator: '<S1>/Pulse Generator2' */
  rtb_VectorConcatenate1_idx_3 = (untitled_DW.clockTickCounter_n <
    untitled_P.PulseGenerator2_Duty) && (untitled_DW.clockTickCounter_n >= 0) ?
    untitled_P.PulseGenerator2_Amp : 0.0;
  if (untitled_DW.clockTickCounter_n >= untitled_P.PulseGenerator2_Period - 1.0)
  {
    untitled_DW.clockTickCounter_n = 0;
  } else {
    untitled_DW.clockTickCounter_n++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator2' */

  /* Saturate: '<S1>/Saturation1' */
  if (rtb_VectorConcatenate1_idx_0 > untitled_P.Saturation1_UpperSat) {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[0] = untitled_P.Saturation1_UpperSat;
  } else if (rtb_VectorConcatenate1_idx_0 < untitled_P.Saturation1_LowerSat) {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[0] = untitled_P.Saturation1_LowerSat;
  } else {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[0] = (real32_T)rtb_VectorConcatenate1_idx_0;
  }

  /* Outport: '<Root>/Motors' incorporates:
   *  Saturate: '<S1>/Saturation1'
   */
  untitled_Y.Motors[0] = motors_outport[0];

  /* Saturate: '<S1>/Saturation1' */
  if (rtb_VectorConcatenate1_idx_1 > untitled_P.Saturation1_UpperSat) {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[1] = untitled_P.Saturation1_UpperSat;
  } else if (rtb_VectorConcatenate1_idx_1 < untitled_P.Saturation1_LowerSat) {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[1] = untitled_P.Saturation1_LowerSat;
  } else {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[1] = (real32_T)rtb_VectorConcatenate1_idx_1;
  }

  /* Outport: '<Root>/Motors' incorporates:
   *  Saturate: '<S1>/Saturation1'
   */
  untitled_Y.Motors[1] = motors_outport[1];

  /* Saturate: '<S1>/Saturation1' */
  if (rtb_VectorConcatenate1_idx_2 > untitled_P.Saturation1_UpperSat) {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[2] = untitled_P.Saturation1_UpperSat;
  } else if (rtb_VectorConcatenate1_idx_2 < untitled_P.Saturation1_LowerSat) {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[2] = untitled_P.Saturation1_LowerSat;
  } else {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[2] = (real32_T)rtb_VectorConcatenate1_idx_2;
  }

  /* Outport: '<Root>/Motors' incorporates:
   *  Saturate: '<S1>/Saturation1'
   */
  untitled_Y.Motors[2] = motors_outport[2];

  /* Saturate: '<S1>/Saturation1' */
  if (rtb_VectorConcatenate1_idx_3 > untitled_P.Saturation1_UpperSat) {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[3] = untitled_P.Saturation1_UpperSat;
  } else if (rtb_VectorConcatenate1_idx_3 < untitled_P.Saturation1_LowerSat) {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[3] = untitled_P.Saturation1_LowerSat;
  } else {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[3] = (real32_T)rtb_VectorConcatenate1_idx_3;
  }

  /* Outport: '<Root>/Motors' incorporates:
   *  Saturate: '<S1>/Saturation1'
   */
  untitled_Y.Motors[3] = motors_outport[3];

  /* ManualSwitch: '<S1>/Manual Switch' */
  if (untitled_P.ManualSwitch_CurrentSetting == 1) {
    /* ManualSwitch: '<S1>/Manual Switch' incorporates:
     *  Constant: '<S1>/Constant2'
     */
    flag_outport = untitled_P.Constant2_Value;
  } else {
    /* ManualSwitch: '<S1>/Manual Switch' incorporates:
     *  Constant: '<S1>/Constant1'
     */
    flag_outport = untitled_P.Constant1_Value;
  }

  /* End of ManualSwitch: '<S1>/Manual Switch' */

  /* Outport: '<Root>/Flag' */
  untitled_Y.Flag = flag_outport;

  /* Matfile logging */
  rt_UpdateTXYLogVars(untitled_M->rtwLogInfo, (&untitled_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.005s, 0.0s] */
    if ((rtmGetTFinal(untitled_M)!=-1) &&
        !((rtmGetTFinal(untitled_M)-untitled_M->Timing.taskTime0) >
          untitled_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(untitled_M, "Simulation finished");
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
  if (!(++untitled_M->Timing.clockTick0)) {
    ++untitled_M->Timing.clockTickH0;
  }

  untitled_M->Timing.taskTime0 = untitled_M->Timing.clockTick0 *
    untitled_M->Timing.stepSize0 + untitled_M->Timing.clockTickH0 *
    untitled_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)untitled_M, 0,
                sizeof(RT_MODEL_untitled_T));
  rtmSetTFinal(untitled_M, 100.0);
  untitled_M->Timing.stepSize0 = 0.005;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    untitled_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(untitled_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(untitled_M->rtwLogInfo, (NULL));
    rtliSetLogT(untitled_M->rtwLogInfo, "tout");
    rtliSetLogX(untitled_M->rtwLogInfo, "");
    rtliSetLogXFinal(untitled_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(untitled_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(untitled_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(untitled_M->rtwLogInfo, 0);
    rtliSetLogDecimation(untitled_M->rtwLogInfo, 1);
    rtliSetLogY(untitled_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(untitled_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(untitled_M->rtwLogInfo, (NULL));
  }

  /* block I/O */

  /* exported global signals */
  motors_outport[0] = 0.0F;
  motors_outport[1] = 0.0F;
  motors_outport[2] = 0.0F;
  motors_outport[3] = 0.0F;
  flag_outport = 0U;

  /* states (dwork) */
  (void) memset((void *)&untitled_DW, 0,
                sizeof(DW_untitled_T));

  /* external inputs */
  (void)memset(&cmd_inport, 0, sizeof(CommandBus));
  (void)memset(&sensor_inport, 0, sizeof(SensorsBus));

  /* external outputs */
  (void) memset((void *)&untitled_Y, 0,
                sizeof(ExtY_untitled_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(untitled_M->rtwLogInfo, 0.0, rtmGetTFinal
    (untitled_M), untitled_M->Timing.stepSize0, (&rtmGetErrorStatus(untitled_M)));

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator1' */
  untitled_DW.clockTickCounter = 0;

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator3' */
  untitled_DW.clockTickCounter_h = -400;

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator4' */
  untitled_DW.clockTickCounter_a = -800;

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator2' */
  untitled_DW.clockTickCounter_n = -1200;
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* (no terminate code required) */
}
