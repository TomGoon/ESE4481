/*
 * main.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "main".
 *
 * Model version              : 1.4
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Mon Nov 29 16:16:52 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_main_h_
#define RTW_HEADER_main_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#include <float.h>
#ifndef main_COMMON_INCLUDES_
#define main_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* main_COMMON_INCLUDES_ */

#include "main_types.h"

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

/* Block signals (default storage) */
typedef struct {
  real32_T SensorCalibration[8];
  real32_T opticalFlow_data[3];
  real_T d;
  real32_T Product2[2];                /* '<S58>/Product2' */
  real32_T Product3[2];                /* '<S56>/Product3' */
} B_main_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  struct {
    void *LoggedData;
  } Scope10_PWORK;                     /* '<S1>/Scope10' */

  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<S1>/Scope' */

  struct {
    void *LoggedData;
  } Scope13_PWORK;                     /* '<S1>/Scope13' */

  struct {
    void *LoggedData;
  } Scope6_PWORK;                      /* '<S1>/Scope6' */

  struct {
    void *LoggedData;
  } Scope5_PWORK;                      /* '<S1>/Scope5' */

  struct {
    void *LoggedData;
  } Scope4_PWORK;                      /* '<S1>/Scope4' */

  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<S1>/Scope1' */

  struct {
    void *LoggedData;
  } Scope2_PWORK;                      /* '<S1>/Scope2' */

  struct {
    void *LoggedData;
  } Scope3_PWORK;                      /* '<S1>/Scope3' */

  struct {
    void *LoggedData;
  } Scope12_PWORK;                     /* '<S1>/Scope12' */

  struct {
    void *LoggedData;
  } Scope7_PWORK;                      /* '<S1>/Scope7' */

  struct {
    void *LoggedData;
  } Scope8_PWORK;                      /* '<S1>/Scope8' */

  struct {
    void *LoggedData;
  } Scope9_PWORK;                      /* '<S1>/Scope9' */

  real32_T MemoryX_DSTATE[2];          /* '<S2>/MemoryX' */
  int32_T clockTickCounter;            /* '<S1>/Pulse Generator1' */
  int32_T clockTickCounter_h;          /* '<S1>/Pulse Generator3' */
  int32_T clockTickCounter_a;          /* '<S1>/Pulse Generator4' */
  int32_T clockTickCounter_n;          /* '<S1>/Pulse Generator2' */
  boolean_T icLoad;                    /* '<S2>/MemoryX' */
  boolean_T EnabledSubsystem_MODE;     /* '<S32>/Enabled Subsystem' */
  boolean_T MeasurementUpdate_MODE;    /* '<S25>/MeasurementUpdate' */
} DW_main_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T Motors[4];                  /* '<Root>/Motors' */
  uint8_T Flag;                        /* '<Root>/Flag' */
} ExtY_main_T;

/* Parameters (default storage) */
struct P_main_T_ {
  real_T M;                            /* Variable: M
                                        * Referenced by: '<S1>/Gain'
                                        */
  real_T W[4];                         /* Variable: W
                                        * Referenced by:
                                        *   '<S1>/Pulse Generator1'
                                        *   '<S1>/Pulse Generator2'
                                        *   '<S1>/Pulse Generator3'
                                        *   '<S1>/Pulse Generator4'
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
  real_T PulseGenerator3_Period;       /* Expression: 1600
                                        * Referenced by: '<S1>/Pulse Generator3'
                                        */
  real_T PulseGenerator3_Duty;         /* Expression: 400
                                        * Referenced by: '<S1>/Pulse Generator3'
                                        */
  real_T PulseGenerator3_PhaseDelay;   /* Expression: 400
                                        * Referenced by: '<S1>/Pulse Generator3'
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
  real_T PulseGenerator2_Period;       /* Expression: 1600
                                        * Referenced by: '<S1>/Pulse Generator2'
                                        */
  real_T PulseGenerator2_Duty;         /* Expression: 400
                                        * Referenced by: '<S1>/Pulse Generator2'
                                        */
  real_T PulseGenerator2_PhaseDelay;   /* Expression: 1200
                                        * Referenced by: '<S1>/Pulse Generator2'
                                        */
  real32_T Lykyhatkk1_Y0;              /* Computed Parameter: Lykyhatkk1_Y0
                                        * Referenced by: '<S56>/L*(y[k]-yhat[k|k-1])'
                                        */
  real32_T deltax_Y0;                  /* Computed Parameter: deltax_Y0
                                        * Referenced by: '<S58>/deltax'
                                        */
  real32_T Saturation1_UpperSat;     /* Computed Parameter: Saturation1_UpperSat
                                      * Referenced by: '<S1>/Saturation1'
                                      */
  real32_T Saturation1_LowerSat;     /* Computed Parameter: Saturation1_LowerSat
                                      * Referenced by: '<S1>/Saturation1'
                                      */
  real32_T A_Value[4];                 /* Computed Parameter: A_Value
                                        * Referenced by: '<S2>/A'
                                        */
  real32_T X0_Value[2];                /* Computed Parameter: X0_Value
                                        * Referenced by: '<S2>/X0'
                                        */
  real32_T B_Value[2];                 /* Computed Parameter: B_Value
                                        * Referenced by: '<S2>/B'
                                        */
  real32_T D_Value;                    /* Computed Parameter: D_Value
                                        * Referenced by: '<S2>/D'
                                        */
  real32_T C_Value[2];                 /* Computed Parameter: C_Value
                                        * Referenced by: '<S2>/C'
                                        */
  real32_T KalmanGainL_Value[2];       /* Expression: pInitialization.L
                                        * Referenced by: '<S5>/KalmanGainL'
                                        */
  real32_T KalmanGainM_Value[2];       /* Expression: pInitialization.M
                                        * Referenced by: '<S5>/KalmanGainM'
                                        */
  real32_T CovarianceZ_Value[4];       /* Expression: pInitialization.Z
                                        * Referenced by: '<S5>/CovarianceZ'
                                        */
  boolean_T Enable_Value;              /* Expression: true()
                                        * Referenced by: '<S2>/Enable'
                                        */
  boolean_T isSqrtUsed_Value;          /* Expression: pInitialization.isSqrtUsed
                                        * Referenced by: '<S54>/isSqrtUsed'
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
struct tag_RTM_main_T {
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
extern P_main_T main_P;

/* Block signals (default storage) */
extern B_main_T main_B;

/* Block states (default storage) */
extern DW_main_T main_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_main_T main_Y;

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
extern real32_T motors_outport[4];     /* '<S1>/Saturation1' */
extern uint8_T flag_outport;           /* '<S1>/Manual Switch' */

/* Model entry point functions */
extern void main_initialize(void);
extern void main_step(void);
extern void main_terminate(void);

/* Real-time Model object */
extern RT_MODEL_main_T *const main_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Constant3' : Unused code path elimination
 * Block '<S48>/Data Type Duplicate' : Unused code path elimination
 * Block '<S49>/Data Type Duplicate' : Unused code path elimination
 * Block '<S50>/Conversion' : Unused code path elimination
 * Block '<S50>/Data Type Duplicate' : Unused code path elimination
 * Block '<S51>/Data Type Duplicate' : Unused code path elimination
 * Block '<S8>/Data Type Duplicate' : Unused code path elimination
 * Block '<S9>/Data Type Duplicate' : Unused code path elimination
 * Block '<S10>/Data Type Duplicate' : Unused code path elimination
 * Block '<S11>/Data Type Duplicate' : Unused code path elimination
 * Block '<S13>/Data Type Duplicate' : Unused code path elimination
 * Block '<S14>/Data Type Duplicate' : Unused code path elimination
 * Block '<S15>/Data Type Duplicate' : Unused code path elimination
 * Block '<S16>/Conversion' : Unused code path elimination
 * Block '<S16>/Data Type Duplicate' : Unused code path elimination
 * Block '<S17>/Data Type Duplicate' : Unused code path elimination
 * Block '<S18>/Data Type Duplicate' : Unused code path elimination
 * Block '<S19>/Data Type Duplicate' : Unused code path elimination
 * Block '<S21>/Data Type Duplicate' : Unused code path elimination
 * Block '<S22>/Data Type Duplicate' : Unused code path elimination
 * Block '<S2>/G' : Unused code path elimination
 * Block '<S2>/H' : Unused code path elimination
 * Block '<S2>/N' : Unused code path elimination
 * Block '<S2>/P0' : Unused code path elimination
 * Block '<S2>/Q' : Unused code path elimination
 * Block '<S2>/R' : Unused code path elimination
 * Block '<S46>/CheckSignalProperties' : Unused code path elimination
 * Block '<S47>/CheckSignalProperties' : Unused code path elimination
 * Block '<S1>/MatrixMultiply1' : Unused code path elimination
 * Block '<S1>/Product1' : Unused code path elimination
 * Block '<S48>/Conversion' : Eliminate redundant data type conversion
 * Block '<S49>/Conversion' : Eliminate redundant data type conversion
 * Block '<S51>/Conversion' : Eliminate redundant data type conversion
 * Block '<S21>/Conversion' : Eliminate redundant data type conversion
 * Block '<S25>/Reshape' : Reshape block reduction
 * Block '<S2>/ReshapeX0' : Reshape block reduction
 * Block '<S2>/Reshapeu' : Reshape block reduction
 * Block '<S2>/Reshapexhat' : Reshape block reduction
 * Block '<S2>/Reshapey' : Reshape block reduction
 * Block '<S1>/Rate Transition4' : Eliminated since input and output rates are identical
 * Block '<S1>/Rate Transition5' : Eliminated since input and output rates are identical
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
 * '<Root>' : 'main'
 * '<S1>'   : 'main/Flight Control System'
 * '<S2>'   : 'main/Flight Control System/Kalman Filter, Elevator1'
 * '<S3>'   : 'main/Flight Control System/MATLAB Function'
 * '<S4>'   : 'main/Flight Control System/Subsystem'
 * '<S5>'   : 'main/Flight Control System/Kalman Filter, Elevator1/CalculatePL'
 * '<S6>'   : 'main/Flight Control System/Kalman Filter, Elevator1/CalculateYhat'
 * '<S7>'   : 'main/Flight Control System/Kalman Filter, Elevator1/CovarianceOutputConfigurator'
 * '<S8>'   : 'main/Flight Control System/Kalman Filter, Elevator1/DataTypeConversionA'
 * '<S9>'   : 'main/Flight Control System/Kalman Filter, Elevator1/DataTypeConversionB'
 * '<S10>'  : 'main/Flight Control System/Kalman Filter, Elevator1/DataTypeConversionC'
 * '<S11>'  : 'main/Flight Control System/Kalman Filter, Elevator1/DataTypeConversionD'
 * '<S12>'  : 'main/Flight Control System/Kalman Filter, Elevator1/DataTypeConversionEnable'
 * '<S13>'  : 'main/Flight Control System/Kalman Filter, Elevator1/DataTypeConversionG'
 * '<S14>'  : 'main/Flight Control System/Kalman Filter, Elevator1/DataTypeConversionH'
 * '<S15>'  : 'main/Flight Control System/Kalman Filter, Elevator1/DataTypeConversionN'
 * '<S16>'  : 'main/Flight Control System/Kalman Filter, Elevator1/DataTypeConversionP'
 * '<S17>'  : 'main/Flight Control System/Kalman Filter, Elevator1/DataTypeConversionP0'
 * '<S18>'  : 'main/Flight Control System/Kalman Filter, Elevator1/DataTypeConversionQ'
 * '<S19>'  : 'main/Flight Control System/Kalman Filter, Elevator1/DataTypeConversionR'
 * '<S20>'  : 'main/Flight Control System/Kalman Filter, Elevator1/DataTypeConversionReset'
 * '<S21>'  : 'main/Flight Control System/Kalman Filter, Elevator1/DataTypeConversionX'
 * '<S22>'  : 'main/Flight Control System/Kalman Filter, Elevator1/DataTypeConversionX0'
 * '<S23>'  : 'main/Flight Control System/Kalman Filter, Elevator1/DataTypeConversionu'
 * '<S24>'  : 'main/Flight Control System/Kalman Filter, Elevator1/MemoryP'
 * '<S25>'  : 'main/Flight Control System/Kalman Filter, Elevator1/Observer'
 * '<S26>'  : 'main/Flight Control System/Kalman Filter, Elevator1/ReducedQRN'
 * '<S27>'  : 'main/Flight Control System/Kalman Filter, Elevator1/Reset'
 * '<S28>'  : 'main/Flight Control System/Kalman Filter, Elevator1/Reshapeyhat'
 * '<S29>'  : 'main/Flight Control System/Kalman Filter, Elevator1/ScalarExpansionP0'
 * '<S30>'  : 'main/Flight Control System/Kalman Filter, Elevator1/ScalarExpansionQ'
 * '<S31>'  : 'main/Flight Control System/Kalman Filter, Elevator1/ScalarExpansionR'
 * '<S32>'  : 'main/Flight Control System/Kalman Filter, Elevator1/UseCurrentEstimator'
 * '<S33>'  : 'main/Flight Control System/Kalman Filter, Elevator1/checkA'
 * '<S34>'  : 'main/Flight Control System/Kalman Filter, Elevator1/checkB'
 * '<S35>'  : 'main/Flight Control System/Kalman Filter, Elevator1/checkC'
 * '<S36>'  : 'main/Flight Control System/Kalman Filter, Elevator1/checkD'
 * '<S37>'  : 'main/Flight Control System/Kalman Filter, Elevator1/checkEnable'
 * '<S38>'  : 'main/Flight Control System/Kalman Filter, Elevator1/checkG'
 * '<S39>'  : 'main/Flight Control System/Kalman Filter, Elevator1/checkH'
 * '<S40>'  : 'main/Flight Control System/Kalman Filter, Elevator1/checkN'
 * '<S41>'  : 'main/Flight Control System/Kalman Filter, Elevator1/checkP0'
 * '<S42>'  : 'main/Flight Control System/Kalman Filter, Elevator1/checkQ'
 * '<S43>'  : 'main/Flight Control System/Kalman Filter, Elevator1/checkR'
 * '<S44>'  : 'main/Flight Control System/Kalman Filter, Elevator1/checkReset'
 * '<S45>'  : 'main/Flight Control System/Kalman Filter, Elevator1/checkX0'
 * '<S46>'  : 'main/Flight Control System/Kalman Filter, Elevator1/checku'
 * '<S47>'  : 'main/Flight Control System/Kalman Filter, Elevator1/checky'
 * '<S48>'  : 'main/Flight Control System/Kalman Filter, Elevator1/CalculatePL/DataTypeConversionL'
 * '<S49>'  : 'main/Flight Control System/Kalman Filter, Elevator1/CalculatePL/DataTypeConversionM'
 * '<S50>'  : 'main/Flight Control System/Kalman Filter, Elevator1/CalculatePL/DataTypeConversionP'
 * '<S51>'  : 'main/Flight Control System/Kalman Filter, Elevator1/CalculatePL/DataTypeConversionZ'
 * '<S52>'  : 'main/Flight Control System/Kalman Filter, Elevator1/CalculatePL/Ground'
 * '<S53>'  : 'main/Flight Control System/Kalman Filter, Elevator1/CalculateYhat/Ground'
 * '<S54>'  : 'main/Flight Control System/Kalman Filter, Elevator1/CovarianceOutputConfigurator/decideOutput'
 * '<S55>'  : 'main/Flight Control System/Kalman Filter, Elevator1/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S56>'  : 'main/Flight Control System/Kalman Filter, Elevator1/Observer/MeasurementUpdate'
 * '<S57>'  : 'main/Flight Control System/Kalman Filter, Elevator1/ReducedQRN/Ground'
 * '<S58>'  : 'main/Flight Control System/Kalman Filter, Elevator1/UseCurrentEstimator/Enabled Subsystem'
 */
#endif                                 /* RTW_HEADER_main_h_ */
