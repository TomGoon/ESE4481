/*
 * parrot_vision.h
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

#ifndef RTW_HEADER_parrot_vision_h_
#define RTW_HEADER_parrot_vision_h_
#include <stddef.h>
#include <string.h>
#include <float.h>
#ifndef parrot_vision_COMMON_INCLUDES_
#define parrot_vision_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#include "rsedu_image.h"
#endif                                 /* parrot_vision_COMMON_INCLUDES_ */

#include "parrot_vision_types.h"

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

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
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

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

/* Block signals for system '<Root>/Flight Control System' */
typedef struct {
  real32_T Saturation1[4];             /* '<S1>/Saturation1' */
  uint8_T ManualSwitch;                /* '<S1>/Manual Switch' */
} B_FlightControlSystem_parrot__T;

/* Block signals (default storage) */
typedef struct {
  uint8_T PARROTImageConversion_o1[19200];/* '<S2>/PARROT Image Conversion ' */
  uint8_T PARROTImageConversion_o2[19200];/* '<S2>/PARROT Image Conversion ' */
  uint8_T PARROTImageConversion_o3[19200];/* '<S2>/PARROT Image Conversion ' */
  real_T VectorConcatenate1[4];        /* '<S1>/Vector Concatenate1' */
  B_FlightControlSystem_parrot__T FlightControlSystem;/* '<Root>/Flight Control System' */
} B_parrot_vision_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  parrot_ImageProcess_parrot_vi_T obj; /* '<S2>/PARROT Image Conversion ' */
  volatile real_T RateTransition_Buffer[2];/* '<Root>/Rate Transition' */
  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<S2>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<S2>/To Workspace1' */

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                /* '<S2>/To Workspace2' */

  volatile int8_T RateTransition_ActiveBufIdx;/* '<Root>/Rate Transition' */
  boolean_T objisempty;                /* '<S2>/PARROT Image Conversion ' */
} DW_parrot_vision_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T Motors[4];                  /* '<Root>/Motors' */
  uint8_T Flag;                        /* '<Root>/Flag' */
} ExtY_parrot_vision_T;

/* Parameters for system: '<Root>/Flight Control System' */
struct P_FlightControlSystem_parrot__T_ {
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Constant3_Value;              /* Expression: 200
                                        * Referenced by: '<S1>/Constant3'
                                        */
  real32_T Saturation1_UpperSat;     /* Computed Parameter: Saturation1_UpperSat
                                      * Referenced by: '<S1>/Saturation1'
                                      */
  real32_T Saturation1_LowerSat;     /* Computed Parameter: Saturation1_LowerSat
                                      * Referenced by: '<S1>/Saturation1'
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

/* Parameters (default storage) */
struct P_parrot_vision_T_ {
  uint8_T CompareToConstant_const;    /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S4>/Constant'
                                       */
  real_T Motorrun_Value;               /* Expression: 200
                                        * Referenced by: '<S2>/Motor run'
                                        */
  real_T Motorstop_Value;              /* Expression: 0
                                        * Referenced by: '<S2>/Motor stop'
                                        */
  real_T Constant1_Value;              /* Expression: 2
                                        * Referenced by: '<S2>/Constant1'
                                        */
  real_T Threshold_Value;              /* Expression: 100
                                        * Referenced by: '<S2>/Threshold'
                                        */
  real_T RateTransition_InitialCondition;/* Expression: 0
                                          * Referenced by: '<Root>/Rate Transition'
                                          */
  P_FlightControlSystem_parrot__T FlightControlSystem;/* '<Root>/Flight Control System' */
};

/* Real-time Model Data Structure */
struct tag_RTM_parrot_vision_T {
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
    uint32_T clockTick1;
    uint32_T clockTickH1;
    struct {
      uint8_T TID[2];
    } TaskCounters;

    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_parrot_vision_T parrot_vision_P;

/* Block signals (default storage) */
extern B_parrot_vision_T parrot_vision_B;

/* Block states (default storage) */
extern DW_parrot_vision_T parrot_vision_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_parrot_vision_T parrot_vision_Y;

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
extern real32_T motors_outport[4];     /* '<Root>/Flight Control System' */
extern uint8_T flag_outport;           /* '<Root>/Flight Control System' */

/* External function called from main */
extern void parrot_vision_SetEventsForThisBaseStep(boolean_T *eventFlags);

/* Model entry point functions */
extern void parrot_vision_SetEventsForThisBaseStep(boolean_T *eventFlags);
extern void parrot_vision_initialize(void);
extern void parrot_vision_step0(void);
extern void parrot_vision_step1(void);
extern void parrot_vision_terminate(void);

/* Real-time Model object */
extern RT_MODEL_parrot_vision_T *const parrot_vision_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

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
 * '<Root>' : 'parrot_vision'
 * '<S1>'   : 'parrot_vision/Flight Control System'
 * '<S2>'   : 'parrot_vision/Image Processing System'
 * '<S3>'   : 'parrot_vision/Flight Control System/Subsystem'
 * '<S4>'   : 'parrot_vision/Image Processing System/Compare To Constant '
 */
#endif                                 /* RTW_HEADER_parrot_vision_h_ */
