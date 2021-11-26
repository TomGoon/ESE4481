/*
 * main112621.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "main112621".
 *
 * Model version              : 1.2
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Fri Nov 26 15:40:15 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "main112621.h"
#include "main112621_private.h"

/* Exported block signals */
CommandBus cmd_inport;                 /* '<Root>/AC cmd' */
SensorsBus sensor_inport;              /* '<Root>/Sensors' */

/* Block signals (default storage) */
B_main112621_T main112621_B;

/* Block states (default storage) */
DW_main112621_T main112621_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_main112621_T main112621_Y;

/* Real-time model */
static RT_MODEL_main112621_T main112621_M_;
RT_MODEL_main112621_T *const main112621_M = &main112621_M_;

/* Model step function */
void main112621_step(void)
{
  real_T rtb_VectorConcatenate1_idx_0;
  real_T rtb_VectorConcatenate1_idx_1;
  real_T rtb_VectorConcatenate1_idx_2;
  real_T rtb_VectorConcatenate1_idx_3;
  real_T u0;
  int32_T i;
  real32_T rtb_opticalFlow_data[3];
  real32_T rtb_altitude;

  /* DiscretePulseGenerator: '<S1>/Pulse Generator1' */
  rtb_VectorConcatenate1_idx_0 = (main112621_DW.clockTickCounter <
    main112621_P.PulseGenerator1_Duty) && (main112621_DW.clockTickCounter >= 0) ?
    main112621_P.W[0] : 0.0;
  if (main112621_DW.clockTickCounter >= main112621_P.PulseGenerator1_Period -
      1.0) {
    main112621_DW.clockTickCounter = 0;
  } else {
    main112621_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator1' */

  /* DiscretePulseGenerator: '<S1>/Pulse Generator3' */
  rtb_VectorConcatenate1_idx_1 = (main112621_DW.clockTickCounter_o <
    main112621_P.PulseGenerator3_Duty) && (main112621_DW.clockTickCounter_o >= 0)
    ? main112621_P.W[1] : 0.0;
  if (main112621_DW.clockTickCounter_o >= main112621_P.PulseGenerator3_Period -
      1.0) {
    main112621_DW.clockTickCounter_o = 0;
  } else {
    main112621_DW.clockTickCounter_o++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator3' */

  /* DiscretePulseGenerator: '<S1>/Pulse Generator4' */
  rtb_VectorConcatenate1_idx_2 = (main112621_DW.clockTickCounter_f <
    main112621_P.PulseGenerator4_Duty) && (main112621_DW.clockTickCounter_f >= 0)
    ? main112621_P.W[2] : 0.0;
  if (main112621_DW.clockTickCounter_f >= main112621_P.PulseGenerator4_Period -
      1.0) {
    main112621_DW.clockTickCounter_f = 0;
  } else {
    main112621_DW.clockTickCounter_f++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator4' */

  /* DiscretePulseGenerator: '<S1>/Pulse Generator2' */
  rtb_VectorConcatenate1_idx_3 = (main112621_DW.clockTickCounter_j <
    main112621_P.PulseGenerator2_Duty) && (main112621_DW.clockTickCounter_j >= 0)
    ? main112621_P.W[3] : 0.0;
  if (main112621_DW.clockTickCounter_j >= main112621_P.PulseGenerator2_Period -
      1.0) {
    main112621_DW.clockTickCounter_j = 0;
  } else {
    main112621_DW.clockTickCounter_j++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator2' */
  for (i = 0; i < 4; i++) {
    /* Sqrt: '<S1>/Sqrt' incorporates:
     *  Gain: '<S1>/Gain'
     */
    u0 = sqrt(main112621_P.M[i + 12] * 0.25 * rtb_VectorConcatenate1_idx_3 +
              (main112621_P.M[i + 8] * 0.25 * rtb_VectorConcatenate1_idx_2 +
               (main112621_P.M[i + 4] * 0.25 * rtb_VectorConcatenate1_idx_1 +
                0.25 * main112621_P.M[i] * rtb_VectorConcatenate1_idx_0)));

    /* Saturate: '<S1>/Saturation1' */
    if (u0 > main112621_P.Saturation1_UpperSat) {
      u0 = main112621_P.Saturation1_UpperSat;
    } else if (u0 < main112621_P.Saturation1_LowerSat) {
      u0 = main112621_P.Saturation1_LowerSat;
    }

    /* Outport: '<Root>/Motors' incorporates:
     *  Saturate: '<S1>/Saturation1'
     */
    main112621_Y.Motors[i] = (real32_T)u0;

    /* Saturate: '<S1>/Saturation1' incorporates:
     *  Sqrt: '<S1>/Sqrt'
     */
    main112621_B.Saturation1[i] = (real32_T)u0;
  }

  /* ManualSwitch: '<S1>/Manual Switch' */
  if (main112621_P.ManualSwitch_CurrentSetting == 1) {
    /* Outport: '<Root>/Flag' incorporates:
     *  Constant: '<S1>/Constant2'
     */
    main112621_Y.Flag = main112621_P.Constant2_Value;
  } else {
    /* Outport: '<Root>/Flag' incorporates:
     *  Constant: '<S1>/Constant1'
     */
    main112621_Y.Flag = main112621_P.Constant1_Value;
  }

  /* End of ManualSwitch: '<S1>/Manual Switch' */

  /* Scope: '<S1>/Scope' */
  {
    StructLogVar *svar = (StructLogVar *)main112621_DW.Scope_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main112621_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[4];
      up0[0] = main112621_B.Saturation1[0];
      up0[1] = main112621_B.Saturation1[1];
      up0[2] = main112621_B.Saturation1[2];
      up0[3] = main112621_B.Saturation1[3];
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* SignalConversion generated from: '<S2>/Bus Selector1' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_opticalFlow_data[0] = sensor_inport.VisionSensors.opticalFlow_data[0];
  rtb_opticalFlow_data[1] = sensor_inport.VisionSensors.opticalFlow_data[1];
  rtb_opticalFlow_data[2] = sensor_inport.VisionSensors.opticalFlow_data[2];

  /* Scope: '<S1>/Scope1' */
  {
    StructLogVar *svar = (StructLogVar *)main112621_DW.Scope1_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main112621_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[3];
      up0[0] = rtb_opticalFlow_data[0];
      up0[1] = rtb_opticalFlow_data[1];
      up0[2] = rtb_opticalFlow_data[2];
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* SignalConversion generated from: '<S1>/Bus Selector1' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  for (i = 0; i < 8; i++) {
    main112621_B.SensorCalibration[i] = sensor_inport.SensorCalibration[i];
  }

  /* End of SignalConversion generated from: '<S1>/Bus Selector1' */

  /* Scope: '<S1>/Scope10' */
  {
    StructLogVar *svar = (StructLogVar *)main112621_DW.Scope10_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main112621_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[8];
      (void) memcpy(&up0[0], &main112621_B.SensorCalibration[0],
                    8*sizeof(real32_T));
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* SignalConversion generated from: '<S2>/Bus Selector3' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_altitude = sensor_inport.HALSensors.HAL_acc_SI.x;

  /* Scope: '<S1>/Scope2' */
  {
    StructLogVar *svar = (StructLogVar *)main112621_DW.Scope2_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main112621_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = rtb_altitude;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* SignalConversion generated from: '<S2>/Bus Selector3' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_altitude = sensor_inport.HALSensors.HAL_acc_SI.y;

  /* Scope: '<S1>/Scope3' */
  {
    StructLogVar *svar = (StructLogVar *)main112621_DW.Scope3_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main112621_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = rtb_altitude;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* SignalConversion generated from: '<S2>/Bus Selector3' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_altitude = sensor_inport.HALSensors.HAL_acc_SI.z;

  /* Scope: '<S1>/Scope4' */
  {
    StructLogVar *svar = (StructLogVar *)main112621_DW.Scope4_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main112621_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = rtb_altitude;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* SignalConversion generated from: '<S2>/Bus Selector4' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_altitude = sensor_inport.HALSensors.HAL_gyro_SI.x;

  /* Scope: '<S1>/Scope5' */
  {
    StructLogVar *svar = (StructLogVar *)main112621_DW.Scope5_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main112621_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = rtb_altitude;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* SignalConversion generated from: '<S2>/Bus Selector4' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_altitude = sensor_inport.HALSensors.HAL_gyro_SI.y;

  /* Scope: '<S1>/Scope6' */
  {
    StructLogVar *svar = (StructLogVar *)main112621_DW.Scope6_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main112621_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = rtb_altitude;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* SignalConversion generated from: '<S2>/Bus Selector4' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_altitude = sensor_inport.HALSensors.HAL_gyro_SI.z;

  /* Scope: '<S1>/Scope7' */
  {
    StructLogVar *svar = (StructLogVar *)main112621_DW.Scope7_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main112621_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = rtb_altitude;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* SignalConversion generated from: '<S2>/Bus Selector5' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_altitude = sensor_inport.HALSensors.HAL_pressure_SI.pressure;

  /* Scope: '<S1>/Scope8' */
  {
    StructLogVar *svar = (StructLogVar *)main112621_DW.Scope8_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main112621_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = rtb_altitude;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* SignalConversion generated from: '<S2>/Bus Selector6' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_altitude = sensor_inport.HALSensors.HAL_ultrasound_SI.altitude;

  /* Scope: '<S1>/Scope9' */
  {
    StructLogVar *svar = (StructLogVar *)main112621_DW.Scope9_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main112621_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = rtb_altitude;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Matfile logging */
  rt_UpdateTXYLogVars(main112621_M->rtwLogInfo, (&main112621_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.005s, 0.0s] */
    if ((rtmGetTFinal(main112621_M)!=-1) &&
        !((rtmGetTFinal(main112621_M)-main112621_M->Timing.taskTime0) >
          main112621_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(main112621_M, "Simulation finished");
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
  if (!(++main112621_M->Timing.clockTick0)) {
    ++main112621_M->Timing.clockTickH0;
  }

  main112621_M->Timing.taskTime0 = main112621_M->Timing.clockTick0 *
    main112621_M->Timing.stepSize0 + main112621_M->Timing.clockTickH0 *
    main112621_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void main112621_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)main112621_M, 0,
                sizeof(RT_MODEL_main112621_T));
  rtmSetTFinal(main112621_M, 100.0);
  main112621_M->Timing.stepSize0 = 0.005;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    main112621_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(main112621_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(main112621_M->rtwLogInfo, (NULL));
    rtliSetLogT(main112621_M->rtwLogInfo, "tout");
    rtliSetLogX(main112621_M->rtwLogInfo, "");
    rtliSetLogXFinal(main112621_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(main112621_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(main112621_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(main112621_M->rtwLogInfo, 0);
    rtliSetLogDecimation(main112621_M->rtwLogInfo, 1);
    rtliSetLogY(main112621_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(main112621_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(main112621_M->rtwLogInfo, (NULL));
  }

  /* states (dwork) */
  (void) memset((void *)&main112621_DW, 0,
                sizeof(DW_main112621_T));

  /* external inputs */
  (void)memset(&cmd_inport, 0, sizeof(CommandBus));
  (void)memset(&sensor_inport, 0, sizeof(SensorsBus));

  /* external outputs */
  (void) memset((void *)&main112621_Y, 0,
                sizeof(ExtY_main112621_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(main112621_M->rtwLogInfo, 0.0, rtmGetTFinal
    (main112621_M), main112621_M->Timing.stepSize0, (&rtmGetErrorStatus
    (main112621_M)));

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

    static char_T rt_ScopeBlockName[] = "main112621/Flight Control System/Scope";
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
    main112621_DW.Scope_PWORK.LoggedData = rt_CreateStructLogVar(
      main112621_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main112621_M),
      main112621_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main112621_M)),
      "ScopeData2",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main112621_DW.Scope_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope1' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 3 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 3 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 1, 1, 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "main112621/Flight Control System/Scope1";
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
    main112621_DW.Scope1_PWORK.LoggedData = rt_CreateStructLogVar(
      main112621_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main112621_M),
      main112621_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main112621_M)),
      "ScopeData3",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main112621_DW.Scope1_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope10' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 8 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 8 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "<SensorCalibration>" };

    static char_T rt_ScopeSignalTitles[] = "<SensorCalibration>";
    static int_T rt_ScopeSignalTitleLengths[] = { 19 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 1, 1, 1, 1, 1, 1, 1, 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "main112621/Flight Control System/Scope10";
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
    main112621_DW.Scope10_PWORK.LoggedData = rt_CreateStructLogVar(
      main112621_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main112621_M),
      main112621_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main112621_M)),
      "ScopeData4",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main112621_DW.Scope10_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope2' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "main112621/Flight Control System/Scope2";
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
    main112621_DW.Scope2_PWORK.LoggedData = rt_CreateStructLogVar(
      main112621_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main112621_M),
      main112621_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main112621_M)),
      "ScopeData5",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main112621_DW.Scope2_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope3' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "main112621/Flight Control System/Scope3";
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
    main112621_DW.Scope3_PWORK.LoggedData = rt_CreateStructLogVar(
      main112621_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main112621_M),
      main112621_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main112621_M)),
      "ScopeData6",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main112621_DW.Scope3_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope4' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "main112621/Flight Control System/Scope4";
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
    main112621_DW.Scope4_PWORK.LoggedData = rt_CreateStructLogVar(
      main112621_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main112621_M),
      main112621_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main112621_M)),
      "ScopeData7",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main112621_DW.Scope4_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope5' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "main112621/Flight Control System/Scope5";
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
    main112621_DW.Scope5_PWORK.LoggedData = rt_CreateStructLogVar(
      main112621_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main112621_M),
      main112621_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main112621_M)),
      "ScopeData8",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main112621_DW.Scope5_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope6' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "main112621/Flight Control System/Scope6";
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
    main112621_DW.Scope6_PWORK.LoggedData = rt_CreateStructLogVar(
      main112621_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main112621_M),
      main112621_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main112621_M)),
      "ScopeData9",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main112621_DW.Scope6_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope7' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "main112621/Flight Control System/Scope7";
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
    main112621_DW.Scope7_PWORK.LoggedData = rt_CreateStructLogVar(
      main112621_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main112621_M),
      main112621_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main112621_M)),
      "ScopeData10",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main112621_DW.Scope7_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope8' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "main112621/Flight Control System/Scope8";
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
    main112621_DW.Scope8_PWORK.LoggedData = rt_CreateStructLogVar(
      main112621_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main112621_M),
      main112621_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main112621_M)),
      "ScopeData11",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main112621_DW.Scope8_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope9' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "main112621/Flight Control System/Scope9";
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
    main112621_DW.Scope9_PWORK.LoggedData = rt_CreateStructLogVar(
      main112621_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main112621_M),
      main112621_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main112621_M)),
      "ScopeData",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main112621_DW.Scope9_PWORK.LoggedData == (NULL))
      return;
  }

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator1' */
  main112621_DW.clockTickCounter = 0;

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator3' */
  main112621_DW.clockTickCounter_o = -400;

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator4' */
  main112621_DW.clockTickCounter_f = -800;

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator2' */
  main112621_DW.clockTickCounter_j = -1200;
}

/* Model terminate function */
void main112621_terminate(void)
{
  /* (no terminate code required) */
}
