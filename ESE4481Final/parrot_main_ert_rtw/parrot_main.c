/*
 * parrot_main.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "parrot_main".
 *
 * Model version              : 1.3
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Thu Nov 11 20:28:48 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "parrot_main.h"
#include "parrot_main_private.h"

/* Exported block signals */
CommandBus cmd_inport;                 /* '<Root>/AC cmd' */
SensorsBus sensor_inport;              /* '<Root>/Sensors' */
real32_T motors_outport[4];            /* '<S1>/Saturation1' */
uint8_T flag_outport;                  /* '<S1>/Manual Switch' */

/* Block states (default storage) */
DW_parrot_main_T parrot_main_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_parrot_main_T parrot_main_Y;

/* Real-time model */
static RT_MODEL_parrot_main_T parrot_main_M_;
RT_MODEL_parrot_main_T *const parrot_main_M = &parrot_main_M_;

/* Model step function */
void parrot_main_step(void)
{
  real_T rtb_VectorConcatenate1_idx_0;
  real_T rtb_VectorConcatenate1_idx_1;
  real_T rtb_VectorConcatenate1_idx_2;
  real_T rtb_VectorConcatenate1_idx_3;
  real_T u0;
  int32_T i;

  /* DiscretePulseGenerator: '<S1>/Pulse Generator1' */
  rtb_VectorConcatenate1_idx_0 = (parrot_main_DW.clockTickCounter <
    parrot_main_P.PulseGenerator1_Duty) && (parrot_main_DW.clockTickCounter >= 0)
    ? parrot_main_P.W[0] : 0.0;
  if (parrot_main_DW.clockTickCounter >= parrot_main_P.PulseGenerator1_Period -
      1.0) {
    parrot_main_DW.clockTickCounter = 0;
  } else {
    parrot_main_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator1' */

  /* DiscretePulseGenerator: '<S1>/Pulse Generator3' */
  rtb_VectorConcatenate1_idx_1 = (parrot_main_DW.clockTickCounter_h <
    parrot_main_P.PulseGenerator3_Duty) && (parrot_main_DW.clockTickCounter_h >=
    0) ? parrot_main_P.W[1] : 0.0;
  if (parrot_main_DW.clockTickCounter_h >= parrot_main_P.PulseGenerator3_Period
      - 1.0) {
    parrot_main_DW.clockTickCounter_h = 0;
  } else {
    parrot_main_DW.clockTickCounter_h++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator3' */

  /* DiscretePulseGenerator: '<S1>/Pulse Generator4' */
  rtb_VectorConcatenate1_idx_2 = (parrot_main_DW.clockTickCounter_a <
    parrot_main_P.PulseGenerator4_Duty) && (parrot_main_DW.clockTickCounter_a >=
    0) ? parrot_main_P.W[2] : 0.0;
  if (parrot_main_DW.clockTickCounter_a >= parrot_main_P.PulseGenerator4_Period
      - 1.0) {
    parrot_main_DW.clockTickCounter_a = 0;
  } else {
    parrot_main_DW.clockTickCounter_a++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator4' */

  /* DiscretePulseGenerator: '<S1>/Pulse Generator2' */
  rtb_VectorConcatenate1_idx_3 = (parrot_main_DW.clockTickCounter_n <
    parrot_main_P.PulseGenerator2_Duty) && (parrot_main_DW.clockTickCounter_n >=
    0) ? parrot_main_P.W[3] : 0.0;
  if (parrot_main_DW.clockTickCounter_n >= parrot_main_P.PulseGenerator2_Period
      - 1.0) {
    parrot_main_DW.clockTickCounter_n = 0;
  } else {
    parrot_main_DW.clockTickCounter_n++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator2' */
  for (i = 0; i < 4; i++) {
    /* Sqrt: '<S1>/Sqrt' incorporates:
     *  Gain: '<S1>/Gain'
     */
    u0 = sqrt(parrot_main_P.M[i + 12] * 0.25 * rtb_VectorConcatenate1_idx_3 +
              (parrot_main_P.M[i + 8] * 0.25 * rtb_VectorConcatenate1_idx_2 +
               (parrot_main_P.M[i + 4] * 0.25 * rtb_VectorConcatenate1_idx_1 +
                0.25 * parrot_main_P.M[i] * rtb_VectorConcatenate1_idx_0)));

    /* Saturate: '<S1>/Saturation1' */
    if (u0 > parrot_main_P.Saturation1_UpperSat) {
      /* Saturate: '<S1>/Saturation1' incorporates:
       *  Sqrt: '<S1>/Sqrt'
       */
      motors_outport[i] = parrot_main_P.Saturation1_UpperSat;
    } else if (u0 < parrot_main_P.Saturation1_LowerSat) {
      /* Saturate: '<S1>/Saturation1' incorporates:
       *  Sqrt: '<S1>/Sqrt'
       */
      motors_outport[i] = parrot_main_P.Saturation1_LowerSat;
    } else {
      /* Saturate: '<S1>/Saturation1' incorporates:
       *  Sqrt: '<S1>/Sqrt'
       */
      motors_outport[i] = (real32_T)u0;
    }

    /* End of Saturate: '<S1>/Saturation1' */

    /* Outport: '<Root>/Motors' incorporates:
     *  Saturate: '<S1>/Saturation1'
     */
    parrot_main_Y.Motors[i] = motors_outport[i];
  }

  /* ManualSwitch: '<S1>/Manual Switch' */
  if (parrot_main_P.ManualSwitch_CurrentSetting == 1) {
    /* ManualSwitch: '<S1>/Manual Switch' incorporates:
     *  Constant: '<S1>/Constant2'
     */
    flag_outport = parrot_main_P.Constant2_Value;
  } else {
    /* ManualSwitch: '<S1>/Manual Switch' incorporates:
     *  Constant: '<S1>/Constant1'
     */
    flag_outport = parrot_main_P.Constant1_Value;
  }

  /* End of ManualSwitch: '<S1>/Manual Switch' */

  /* Outport: '<Root>/Flag' */
  parrot_main_Y.Flag = flag_outport;

  /* Scope: '<S1>/Scope' */
  {
    StructLogVar *svar = (StructLogVar *)parrot_main_DW.Scope_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = parrot_main_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[4];
      up0[0] = motors_outport[0];
      up0[1] = motors_outport[1];
      up0[2] = motors_outport[2];
      up0[3] = motors_outport[3];
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* ToWorkspace: '<S1>/To Workspace' */
  {
    double locTime = parrot_main_M->Timing.taskTime0;
    ;
    rt_UpdateStructLogVar((StructLogVar *)
                          parrot_main_DW.ToWorkspace_PWORK.LoggedData, &locTime,
                          &motors_outport[0]);
  }

  /* Matfile logging */
  rt_UpdateTXYLogVars(parrot_main_M->rtwLogInfo,
                      (&parrot_main_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.005s, 0.0s] */
    if ((rtmGetTFinal(parrot_main_M)!=-1) &&
        !((rtmGetTFinal(parrot_main_M)-parrot_main_M->Timing.taskTime0) >
          parrot_main_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(parrot_main_M, "Simulation finished");
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
  if (!(++parrot_main_M->Timing.clockTick0)) {
    ++parrot_main_M->Timing.clockTickH0;
  }

  parrot_main_M->Timing.taskTime0 = parrot_main_M->Timing.clockTick0 *
    parrot_main_M->Timing.stepSize0 + parrot_main_M->Timing.clockTickH0 *
    parrot_main_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void parrot_main_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)parrot_main_M, 0,
                sizeof(RT_MODEL_parrot_main_T));
  rtmSetTFinal(parrot_main_M, 10.0);
  parrot_main_M->Timing.stepSize0 = 0.005;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    parrot_main_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(parrot_main_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(parrot_main_M->rtwLogInfo, (NULL));
    rtliSetLogT(parrot_main_M->rtwLogInfo, "tout");
    rtliSetLogX(parrot_main_M->rtwLogInfo, "");
    rtliSetLogXFinal(parrot_main_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(parrot_main_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(parrot_main_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(parrot_main_M->rtwLogInfo, 0);
    rtliSetLogDecimation(parrot_main_M->rtwLogInfo, 1);
    rtliSetLogY(parrot_main_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(parrot_main_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(parrot_main_M->rtwLogInfo, (NULL));
  }

  /* block I/O */

  /* exported global signals */
  motors_outport[0] = 0.0F;
  motors_outport[1] = 0.0F;
  motors_outport[2] = 0.0F;
  motors_outport[3] = 0.0F;
  flag_outport = 0U;

  /* states (dwork) */
  (void) memset((void *)&parrot_main_DW, 0,
                sizeof(DW_parrot_main_T));

  /* external inputs */
  (void)memset(&cmd_inport, 0, sizeof(CommandBus));
  (void)memset(&sensor_inport, 0, sizeof(SensorsBus));

  /* external outputs */
  (void) memset((void *)&parrot_main_Y, 0,
                sizeof(ExtY_parrot_main_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(parrot_main_M->rtwLogInfo, 0.0, rtmGetTFinal
    (parrot_main_M), parrot_main_M->Timing.stepSize0, (&rtmGetErrorStatus
    (parrot_main_M)));

  /* SetupRuntimeResources for Scope: '<S1>/Scope' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 4 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 4 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 1, 1, 1, 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "parrot_main/Flight Control System/Scope";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    parrot_main_DW.Scope_PWORK.LoggedData = rt_CreateStructLogVar(
      parrot_main_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(parrot_main_M),
      parrot_main_M->Timing.stepSize0,
      (&rtmGetErrorStatus(parrot_main_M)),
      "motor_speeds",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (parrot_main_DW.Scope_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S1>/To Workspace' */
  {
    static int_T rt_ToWksWidths[] = { 4 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 4 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_SINGLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "parrot_main/Flight Control System/To Workspace";
    parrot_main_DW.ToWorkspace_PWORK.LoggedData = rt_CreateStructLogVar(
      parrot_main_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(parrot_main_M),
      parrot_main_M->Timing.stepSize0,
      (&rtmGetErrorStatus(parrot_main_M)),
      "motor_speeds_test",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (parrot_main_DW.ToWorkspace_PWORK.LoggedData == (NULL))
      return;
  }

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator1' */
  parrot_main_DW.clockTickCounter = 0;

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator3' */
  parrot_main_DW.clockTickCounter_h = -400;

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator4' */
  parrot_main_DW.clockTickCounter_a = -800;

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator2' */
  parrot_main_DW.clockTickCounter_n = -1200;
}

/* Model terminate function */
void parrot_main_terminate(void)
{
  /* (no terminate code required) */
}
