/*
 * parrot_vision.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "parrot_vision".
 *
 * Model version              : 3.0
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Tue Dec  7 19:12:08 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "parrot_vision.h"
#include "parrot_vision_private.h"

/* Exported block signals */
CommandBus cmd_inport;                 /* '<Root>/AC cmd' */
SensorsBus sensor_inport;              /* '<Root>/Sensors' */
real32_T motors_outport[4];            /* '<Root>/Flight Control System' */
uint8_T flag_outport;                  /* '<Root>/Flight Control System' */

/* Block signals (default storage) */
B_parrot_vision_T parrot_vision_B;

/* Block states (default storage) */
DW_parrot_vision_T parrot_vision_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_parrot_vision_T parrot_vision_Y;

/* Real-time model */
static RT_MODEL_parrot_vision_T parrot_vision_M_;
RT_MODEL_parrot_vision_T *const parrot_vision_M = &parrot_vision_M_;

/* Forward declaration for local functions */
static void parrot_vision_SystemCore_step(const uint8_T varargin_1[38400],
  uint8_T varargout_1[19200], uint8_T varargout_2[19200], uint8_T varargout_3
  [19200]);
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void parrot_vision_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(parrot_vision_M, 1));
}

/*
 *   This function updates active task flag for each subrate
 * and rate transition flags for tasks that exchange data.
 * The function assumes rate-monotonic multitasking scheduler.
 * The function must be called at model base rate so that
 * the generated code self-manages all its subrates and rate
 * transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (parrot_vision_M->Timing.TaskCounters.TID[1])++;
  if ((parrot_vision_M->Timing.TaskCounters.TID[1]) > 39) {/* Sample time: [0.2s, 0.0s] */
    parrot_vision_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Output and update for atomic system: '<Root>/Flight Control System' */
void parrot__FlightControlSystem(real_T rty_0[4],
  B_FlightControlSystem_parrot__T *localB, P_FlightControlSystem_parrot__T
  *localP)
{
  /* SignalConversion generated from: '<S1>/Vector Concatenate1' incorporates:
   *  Constant: '<S1>/Constant'
   */
  rty_0[2] = localP->Constant_Value;

  /* SignalConversion generated from: '<S1>/Vector Concatenate1' incorporates:
   *  Constant: '<S1>/Constant'
   */
  rty_0[3] = localP->Constant_Value;

  /* Constant: '<S1>/Constant3' */
  rty_0[0] = localP->Constant3_Value;

  /* Saturate: '<S1>/Saturation1' */
  if (rty_0[0] > localP->Saturation1_UpperSat) {
    /* Saturate: '<S1>/Saturation1' */
    localB->Saturation1[0] = localP->Saturation1_UpperSat;
  } else if (rty_0[0] < localP->Saturation1_LowerSat) {
    /* Saturate: '<S1>/Saturation1' */
    localB->Saturation1[0] = localP->Saturation1_LowerSat;
  } else {
    /* Saturate: '<S1>/Saturation1' */
    localB->Saturation1[0] = (real32_T)rty_0[0];
  }

  if (rty_0[1] > localP->Saturation1_UpperSat) {
    /* Saturate: '<S1>/Saturation1' */
    localB->Saturation1[1] = localP->Saturation1_UpperSat;
  } else if (rty_0[1] < localP->Saturation1_LowerSat) {
    /* Saturate: '<S1>/Saturation1' */
    localB->Saturation1[1] = localP->Saturation1_LowerSat;
  } else {
    /* Saturate: '<S1>/Saturation1' */
    localB->Saturation1[1] = (real32_T)rty_0[1];
  }

  if (rty_0[2] > localP->Saturation1_UpperSat) {
    /* Saturate: '<S1>/Saturation1' */
    localB->Saturation1[2] = localP->Saturation1_UpperSat;
  } else if (rty_0[2] < localP->Saturation1_LowerSat) {
    /* Saturate: '<S1>/Saturation1' */
    localB->Saturation1[2] = localP->Saturation1_LowerSat;
  } else {
    /* Saturate: '<S1>/Saturation1' */
    localB->Saturation1[2] = (real32_T)rty_0[2];
  }

  if (rty_0[3] > localP->Saturation1_UpperSat) {
    /* Saturate: '<S1>/Saturation1' */
    localB->Saturation1[3] = localP->Saturation1_UpperSat;
  } else if (rty_0[3] < localP->Saturation1_LowerSat) {
    /* Saturate: '<S1>/Saturation1' */
    localB->Saturation1[3] = localP->Saturation1_LowerSat;
  } else {
    /* Saturate: '<S1>/Saturation1' */
    localB->Saturation1[3] = (real32_T)rty_0[3];
  }

  /* End of Saturate: '<S1>/Saturation1' */

  /* ManualSwitch: '<S1>/Manual Switch' */
  if (localP->ManualSwitch_CurrentSetting == 1) {
    /* ManualSwitch: '<S1>/Manual Switch' incorporates:
     *  Constant: '<S1>/Constant2'
     */
    localB->ManualSwitch = localP->Constant2_Value;
  } else {
    /* ManualSwitch: '<S1>/Manual Switch' incorporates:
     *  Constant: '<S1>/Constant1'
     */
    localB->ManualSwitch = localP->Constant1_Value;
  }

  /* End of ManualSwitch: '<S1>/Manual Switch' */
}

static void parrot_vision_SystemCore_step(const uint8_T varargin_1[38400],
  uint8_T varargout_1[19200], uint8_T varargout_2[19200], uint8_T varargout_3
  [19200])
{
  MW_Build_RGB(&varargin_1[0], &varargout_1[0], &varargout_2[0], &varargout_3[0]);
}

/* Model step function for TID0 */
void parrot_vision_step0(void)         /* Sample time: [0.005s, 0.0s] */
{
  {                                    /* Sample time: [0.005s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* RateTransition: '<Root>/Rate Transition' */
  parrot_vision_B.VectorConcatenate1[1] =
    parrot_vision_DW.RateTransition_Buffer[parrot_vision_DW.RateTransition_ActiveBufIdx];

  /* Outputs for Atomic SubSystem: '<Root>/Flight Control System' */
  parrot__FlightControlSystem(parrot_vision_B.VectorConcatenate1,
    &parrot_vision_B.FlightControlSystem, &parrot_vision_P.FlightControlSystem);

  /* End of Outputs for SubSystem: '<Root>/Flight Control System' */

  /* SignalConversion generated from: '<Root>/Flight Control System' */
  motors_outport[0] = parrot_vision_B.FlightControlSystem.Saturation1[0];
  motors_outport[1] = parrot_vision_B.FlightControlSystem.Saturation1[1];
  motors_outport[2] = parrot_vision_B.FlightControlSystem.Saturation1[2];
  motors_outport[3] = parrot_vision_B.FlightControlSystem.Saturation1[3];

  /* Outport: '<Root>/Motors' incorporates:
   *  SignalConversion generated from: '<Root>/Flight Control System'
   */
  parrot_vision_Y.Motors[0] = motors_outport[0];
  parrot_vision_Y.Motors[1] = motors_outport[1];
  parrot_vision_Y.Motors[2] = motors_outport[2];
  parrot_vision_Y.Motors[3] = motors_outport[3];

  /* SignalConversion generated from: '<Root>/Flight Control System' */
  flag_outport = parrot_vision_B.FlightControlSystem.ManualSwitch;

  /* Outport: '<Root>/Flag' */
  parrot_vision_Y.Flag = flag_outport;

  /* Matfile logging */
  rt_UpdateTXYLogVars(parrot_vision_M->rtwLogInfo,
                      (&parrot_vision_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.005s, 0.0s] */
    if ((rtmGetTFinal(parrot_vision_M)!=-1) &&
        !((rtmGetTFinal(parrot_vision_M)-parrot_vision_M->Timing.taskTime0) >
          parrot_vision_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(parrot_vision_M, "Simulation finished");
    }
  }

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++parrot_vision_M->Timing.clockTick0)) {
    ++parrot_vision_M->Timing.clockTickH0;
  }

  parrot_vision_M->Timing.taskTime0 = parrot_vision_M->Timing.clockTick0 *
    parrot_vision_M->Timing.stepSize0 + parrot_vision_M->Timing.clockTickH0 *
    parrot_vision_M->Timing.stepSize0 * 4294967296.0;
}

/* Model step function for TID1 */
void parrot_vision_step1(void)         /* Sample time: [0.2s, 0.0s] */
{
  real_T rtb_Switch;
  int32_T i;
  uint32_T tmp;

  /* Outputs for Atomic SubSystem: '<Root>/Image Processing System' */
  /* MATLABSystem: '<S2>/PARROT Image Conversion ' incorporates:
   *  Inport: '<Root>/Image Data'
   */
  parrot_vision_SystemCore_step(imRGB, parrot_vision_B.PARROTImageConversion_o1,
    parrot_vision_B.PARROTImageConversion_o2,
    parrot_vision_B.PARROTImageConversion_o3);

  /* ToWorkspace: '<S2>/To Workspace' */
  {
    double locTime = (((parrot_vision_M->Timing.clockTick1+
                        parrot_vision_M->Timing.clockTickH1* 4294967296.0)) *
                      0.2);
    ;
    rt_UpdateStructLogVar((StructLogVar *)
                          parrot_vision_DW.ToWorkspace_PWORK.LoggedData,
                          &locTime, &parrot_vision_B.PARROTImageConversion_o1[0]);
  }

  /* ToWorkspace: '<S2>/To Workspace1' */
  {
    double locTime = (((parrot_vision_M->Timing.clockTick1+
                        parrot_vision_M->Timing.clockTickH1* 4294967296.0)) *
                      0.2);
    ;
    rt_UpdateStructLogVar((StructLogVar *)
                          parrot_vision_DW.ToWorkspace1_PWORK.LoggedData,
                          &locTime, &parrot_vision_B.PARROTImageConversion_o3[0]);
  }

  /* ToWorkspace: '<S2>/To Workspace2' */
  {
    double locTime = (((parrot_vision_M->Timing.clockTick1+
                        parrot_vision_M->Timing.clockTickH1* 4294967296.0)) *
                      0.2);
    ;
    rt_UpdateStructLogVar((StructLogVar *)
                          parrot_vision_DW.ToWorkspace2_PWORK.LoggedData,
                          &locTime, &parrot_vision_B.PARROTImageConversion_o2[0]);
  }

  /* Sum: '<S2>/Sum of Elements ' */
  tmp = 0U;
  for (i = 0; i < 19200; i++) {
    /* Sum: '<S2>/Sum of Elements ' incorporates:
     *  Constant: '<S2>/Constant1'
     *  Constant: '<S2>/Threshold'
     *  MATLABSystem: '<S2>/PARROT Image Conversion '
     *  Product: '<S2>/Divide'
     *  Product: '<S2>/Divide1'
     *  RelationalOperator: '<S2>/GreaterThan '
     *  Sum: '<S2>/Add'
     */
    tmp += (((real_T)parrot_vision_B.PARROTImageConversion_o1[i] - (real_T)
             parrot_vision_B.PARROTImageConversion_o2[i] /
             parrot_vision_P.Constant1_Value) - (real_T)
            parrot_vision_B.PARROTImageConversion_o3[i] /
            parrot_vision_P.Constant1_Value > parrot_vision_P.Threshold_Value);
  }

  /* Switch: '<S2>/Switch' incorporates:
   *  Constant: '<S2>/Motor run'
   *  Constant: '<S2>/Motor stop'
   *  Constant: '<S4>/Constant'
   *  RelationalOperator: '<S4>/Compare'
   *  Sum: '<S2>/Sum of Elements '
   */
  if ((uint8_T)tmp >= parrot_vision_P.CompareToConstant_const) {
    rtb_Switch = parrot_vision_P.Motorrun_Value;
  } else {
    rtb_Switch = parrot_vision_P.Motorstop_Value;
  }

  /* End of Switch: '<S2>/Switch' */
  /* End of Outputs for SubSystem: '<Root>/Image Processing System' */

  /* RateTransition: '<Root>/Rate Transition' */
  parrot_vision_DW.RateTransition_Buffer[parrot_vision_DW.RateTransition_ActiveBufIdx
    == 0] = rtb_Switch;
  parrot_vision_DW.RateTransition_ActiveBufIdx = (int8_T)
    (parrot_vision_DW.RateTransition_ActiveBufIdx == 0);

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.2, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  parrot_vision_M->Timing.clockTick1++;
  if (!parrot_vision_M->Timing.clockTick1) {
    parrot_vision_M->Timing.clockTickH1++;
  }
}

/* Model initialize function */
void parrot_vision_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)parrot_vision_M, 0,
                sizeof(RT_MODEL_parrot_vision_T));
  rtmSetTFinal(parrot_vision_M, 10.0);
  parrot_vision_M->Timing.stepSize0 = 0.005;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    parrot_vision_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(parrot_vision_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(parrot_vision_M->rtwLogInfo, (NULL));
    rtliSetLogT(parrot_vision_M->rtwLogInfo, "tout");
    rtliSetLogX(parrot_vision_M->rtwLogInfo, "");
    rtliSetLogXFinal(parrot_vision_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(parrot_vision_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(parrot_vision_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(parrot_vision_M->rtwLogInfo, 0);
    rtliSetLogDecimation(parrot_vision_M->rtwLogInfo, 1);
    rtliSetLogY(parrot_vision_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(parrot_vision_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(parrot_vision_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &parrot_vision_B), 0,
                sizeof(B_parrot_vision_T));

  /* exported global signals */
  motors_outport[0] = 0.0F;
  motors_outport[1] = 0.0F;
  motors_outport[2] = 0.0F;
  motors_outport[3] = 0.0F;
  flag_outport = 0U;

  /* states (dwork) */
  (void) memset((void *)&parrot_vision_DW, 0,
                sizeof(DW_parrot_vision_T));

  /* external inputs */
  (void)memset(&cmd_inport, 0, sizeof(CommandBus));
  (void)memset(&sensor_inport, 0, sizeof(SensorsBus));

  /* external outputs */
  (void) memset((void *)&parrot_vision_Y, 0,
                sizeof(ExtY_parrot_vision_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(parrot_vision_M->rtwLogInfo, 0.0,
    rtmGetTFinal(parrot_vision_M), parrot_vision_M->Timing.stepSize0,
    (&rtmGetErrorStatus(parrot_vision_M)));

  /* SetupRuntimeResources for Atomic SubSystem: '<Root>/Image Processing System' */

  /* SetupRuntimeResources for ToWorkspace: '<S2>/To Workspace' */
  {
    static int_T rt_ToWksWidths[] = { 19200 };

    static int_T rt_ToWksNumDimensions[] = { 2 };

    static int_T rt_ToWksDimensions[] = { 120, 160 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL), (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4, 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_UINT8 };

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
      "parrot_vision/Image Processing System/To Workspace";
    parrot_vision_DW.ToWorkspace_PWORK.LoggedData = rt_CreateStructLogVar(
      parrot_vision_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(parrot_vision_M),
      parrot_vision_M->Timing.stepSize0,
      (&rtmGetErrorStatus(parrot_vision_M)),
      "R",
      1,
      0,
      1,
      0.2,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (parrot_vision_DW.ToWorkspace_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S2>/To Workspace1' */
  {
    static int_T rt_ToWksWidths[] = { 19200 };

    static int_T rt_ToWksNumDimensions[] = { 2 };

    static int_T rt_ToWksDimensions[] = { 120, 160 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL), (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4, 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_UINT8 };

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
      "parrot_vision/Image Processing System/To Workspace1";
    parrot_vision_DW.ToWorkspace1_PWORK.LoggedData = rt_CreateStructLogVar(
      parrot_vision_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(parrot_vision_M),
      parrot_vision_M->Timing.stepSize0,
      (&rtmGetErrorStatus(parrot_vision_M)),
      "B",
      1,
      0,
      1,
      0.2,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (parrot_vision_DW.ToWorkspace1_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S2>/To Workspace2' */
  {
    static int_T rt_ToWksWidths[] = { 19200 };

    static int_T rt_ToWksNumDimensions[] = { 2 };

    static int_T rt_ToWksDimensions[] = { 120, 160 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL), (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4, 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_UINT8 };

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
      "parrot_vision/Image Processing System/To Workspace2";
    parrot_vision_DW.ToWorkspace2_PWORK.LoggedData = rt_CreateStructLogVar(
      parrot_vision_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(parrot_vision_M),
      parrot_vision_M->Timing.stepSize0,
      (&rtmGetErrorStatus(parrot_vision_M)),
      "G",
      1,
      0,
      1,
      0.2,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (parrot_vision_DW.ToWorkspace2_PWORK.LoggedData == (NULL))
      return;
  }

  /* End of SetupRuntimeResources for SubSystem: '<Root>/Image Processing System' */

  /* Start for Atomic SubSystem: '<Root>/Image Processing System' */
  /* Start for MATLABSystem: '<S2>/PARROT Image Conversion ' */
  parrot_vision_DW.objisempty = true;
  parrot_vision_DW.obj.isInitialized = 1;

  /* End of Start for SubSystem: '<Root>/Image Processing System' */

  /* InitializeConditions for RateTransition: '<Root>/Rate Transition' */
  parrot_vision_DW.RateTransition_Buffer[0] =
    parrot_vision_P.RateTransition_InitialCondition;
}

/* Model terminate function */
void parrot_vision_terminate(void)
{
  /* (no terminate code required) */
}
