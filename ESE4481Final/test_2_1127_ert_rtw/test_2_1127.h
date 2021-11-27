/*
 * test_2_1127.h
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

#ifndef RTW_HEADER_test_2_1127_h_
#define RTW_HEADER_test_2_1127_h_
#include <string.h>
#include <float.h>
#include <stddef.h>
#ifndef test_2_1127_COMMON_INCLUDES_
#define test_2_1127_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* test_2_1127_COMMON_INCLUDES_ */

#include "test_2_1127_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int32_T clockTickCounter;            /* '<S1>/Pulse Generator1' */
  int32_T clockTickCounter_n;          /* '<S1>/Pulse Generator2' */
  int32_T clockTickCounter_h;          /* '<S1>/Pulse Generator3' */
  int32_T clockTickCounter_a;          /* '<S1>/Pulse Generator4' */
} DW_test_2_1127_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T Motors[4];                  /* '<Root>/Motors' */
  uint8_T Flag;                        /* '<Root>/Flag' */
} ExtY_test_2_1127_T;

/* Parameters (default storage) */
struct P_test_2_1127_T_ {
  real_T PulseGenerator1_Amp;          /* Expression: 400
                                        * Referenced by: '<S1>/Pulse Generator1'
                                        */
  real_T PulseGenerator1_Period;       /* Expression: 1600
                                        * Referenced by: '<S1>/Pulse Generator1'
                                        */
  real_T PulseGenerator1_Duty;         /* Expression: 400
                                        * Referenced by: '<S1>/Pulse Generator1'
                                        */
  real_T PulseGenerator1_PhaseDelay;   /* Expression: 0
                                        * Referenced by: '<S1>/Pulse Generator1'
                                        */
  real_T PulseGenerator2_Amp;          /* Expression: 400
                                        * Referenced by: '<S1>/Pulse Generator2'
                                        */
  real_T PulseGenerator2_Period;       /* Expression: 1600
                                        * Referenced by: '<S1>/Pulse Generator2'
                                        */
  real_T PulseGenerator2_Duty;         /* Expression: 400
                                        * Referenced by: '<S1>/Pulse Generator2'
                                        */
  real_T PulseGenerator2_PhaseDelay;   /* Expression: 1200
                                        * Referenced by: '<S1>/Pulse Generator2'
                                        */
  real_T PulseGenerator3_Amp;          /* Expression: 400
                                        * Referenced by: '<S1>/Pulse Generator3'
                                        */
  real_T PulseGenerator3_Period;       /* Expression: 1600
                                        * Referenced by: '<S1>/Pulse Generator3'
                                        */
  real_T PulseGenerator3_Duty;         /* Expression: 400
                                        * Referenced by: '<S1>/Pulse Generator3'
                                        */
  real_T PulseGenerator3_PhaseDelay;   /* Expression: 400
                                        * Referenced by: '<S1>/Pulse Generator3'
                                        */
  real_T PulseGenerator4_Amp;          /* Expression: 400
                                        * Referenced by: '<S1>/Pulse Generator4'
                                        */
  real_T PulseGenerator4_Period;       /* Expression: 1600
                                        * Referenced by: '<S1>/Pulse Generator4'
                                        */
  real_T PulseGenerator4_Duty;         /* Expression: 400
                                        * Referenced by: '<S1>/Pulse Generator4'
                                        */
  real_T PulseGenerator4_PhaseDelay;   /* Expression: 800
                                        * Referenced by: '<S1>/Pulse Generator4'
                                        */
  uint8_T Constant2_Value;             /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S1>/Constant2'
                                        */
  uint8_T Constant1_Value;             /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S1>/Constant1'
                                        */
  uint8_T ManualSwitch_CurrentSetting;
                              /* Computed Parameter: ManualSwitch_CurrentSetting
                               * Referenced by: '<S1>/Manual Switch'
                               */
};

/* Real-time Model Data Structure */
struct tag_RTM_test_2_1127_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_test_2_1127_T test_2_1127_P;

/* Block states (default storage) */
extern DW_test_2_1127_T test_2_1127_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_test_2_1127_T test_2_1127_Y;

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern CommandBus cmd_inport;          /* '<Root>/AC cmd' */
extern SensorsBus sensor_inport;       /* '<Root>/Sensors' */
extern uint8_T flag_outport;           /* '<S1>/Manual Switch' */

/* Model entry point functions */
extern void test_2_1127_initialize(void);
extern void test_2_1127_step(void);
extern void test_2_1127_terminate(void);

/* Real-time Model object */
extern RT_MODEL_test_2_1127_T *const test_2_1127_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Saturation1' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'test_2_1127'
 * '<S1>'   : 'test_2_1127/Flight Control System'
 * '<S2>'   : 'test_2_1127/Flight Control System/Subsystem'
 */
#endif                                 /* RTW_HEADER_test_2_1127_h_ */
