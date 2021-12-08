/*
 * main.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "main".
 *
 * Model version              : 1.10
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Wed Dec  1 17:09:56 2021
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

/* Block signals for system '<S27>/MeasurementUpdate' */
typedef struct {
  real_T Product3[2];                  /* '<S58>/Product3' */
} B_MeasurementUpdate_main_T;

/* Block states (default storage) for system '<S27>/MeasurementUpdate' */
typedef struct {
  boolean_T MeasurementUpdate_MODE;    /* '<S27>/MeasurementUpdate' */
} DW_MeasurementUpdate_main_T;

/* Block signals for system '<S34>/Enabled Subsystem' */
typedef struct {
  real_T Product2[2];                  /* '<S60>/Product2' */
} B_EnabledSubsystem_main_T;

/* Block states (default storage) for system '<S34>/Enabled Subsystem' */
typedef struct {
  boolean_T EnabledSubsystem_MODE;     /* '<S34>/Enabled Subsystem' */
} DW_EnabledSubsystem_main_T;

/* Block signals (default storage) */
typedef struct {
  real32_T SensorCalibration[8];
  real_T Product2[2];                  /* '<S168>/Product2' */
  real_T Product3[2];                  /* '<S166>/Product3' */
  real32_T opticalFlow_data[3];
  real_T rtb_VectorConcatenate1_idx_0;
  real_T rtb_VectorConcatenate1_idx_1;
  real_T rtb_VectorConcatenate1_idx_2;
  real32_T CastToSingle2[2];           /* '<S1>/Cast To Single2' */
  B_EnabledSubsystem_main_T EnabledSubsystem_p;/* '<S88>/Enabled Subsystem' */
  B_MeasurementUpdate_main_T MeasurementUpdate_h;/* '<S81>/MeasurementUpdate' */
  B_EnabledSubsystem_main_T EnabledSubsystem;/* '<S34>/Enabled Subsystem' */
  B_MeasurementUpdate_main_T MeasurementUpdate;/* '<S27>/MeasurementUpdate' */
} B_main_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T MemoryX_DSTATE[2];            /* '<S3>/MemoryX' */
  real_T MemoryX_DSTATE_n[2];          /* '<S2>/MemoryX' */
  real_T MemoryX_DSTATE_j[2];          /* '<S4>/MemoryX' */
  struct {
    void *LoggedData;
  } Scope10_PWORK;                     /* '<S1>/Scope10' */

  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<S1>/Scope' */

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
  } Scope11_PWORK;                     /* '<S1>/Scope11' */

  struct {
    void *LoggedData;
  } Scope14_PWORK;                     /* '<S1>/Scope14' */

  struct {
    void *LoggedData;
  } Scope15_PWORK;                     /* '<S1>/Scope15' */

  struct {
    void *LoggedData;
  } Scope7_PWORK;                      /* '<S1>/Scope7' */

  struct {
    void *LoggedData;
  } Scope8_PWORK;                      /* '<S1>/Scope8' */

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
  } Scope13_PWORK;                     /* '<S1>/Scope13' */

  struct {
    void *LoggedData;
  } Scope12_PWORK;                     /* '<S1>/Scope12' */

  struct {
    void *LoggedData;
  } Scope9_PWORK;                      /* '<S1>/Scope9' */

  int32_T clockTickCounter;            /* '<S1>/Pulse Generator1' */
  int32_T clockTickCounter_h;          /* '<S1>/Pulse Generator3' */
  int32_T clockTickCounter_a;          /* '<S1>/Pulse Generator4' */
  int32_T clockTickCounter_n;          /* '<S1>/Pulse Generator2' */
  boolean_T icLoad;                    /* '<S3>/MemoryX' */
  boolean_T icLoad_g;                  /* '<S2>/MemoryX' */
  boolean_T icLoad_b;                  /* '<S4>/MemoryX' */
  boolean_T EnabledSubsystem_MODE;     /* '<S142>/Enabled Subsystem' */
  boolean_T MeasurementUpdate_MODE;    /* '<S135>/MeasurementUpdate' */
  DW_EnabledSubsystem_main_T EnabledSubsystem_p;/* '<S88>/Enabled Subsystem' */
  DW_MeasurementUpdate_main_T MeasurementUpdate_h;/* '<S81>/MeasurementUpdate' */
  DW_EnabledSubsystem_main_T EnabledSubsystem;/* '<S34>/Enabled Subsystem' */
  DW_MeasurementUpdate_main_T MeasurementUpdate;/* '<S27>/MeasurementUpdate' */
} DW_main_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T Motors[4];                  /* '<Root>/Motors' */
  uint8_T Flag;                        /* '<Root>/Flag' */
} ExtY_main_T;

/* Parameters for system: '<S27>/MeasurementUpdate' */
struct P_MeasurementUpdate_main_T_ {
  real_T Lykyhatkk1_Y0;                /* Expression: 0
                                        * Referenced by: '<S58>/L*(y[k]-yhat[k|k-1])'
                                        */
};

/* Parameters for system: '<S34>/Enabled Subsystem' */
struct P_EnabledSubsystem_main_T_ {
  real_T deltax_Y0;                    /* Expression: 0
                                        * Referenced by: '<S60>/deltax'
                                        */
};

/* Parameters (default storage) */
struct P_main_T_ {
  real_T M[16];                        /* Variable: M
                                        * Referenced by: '<S1>/Gain'
                                        */
  real_T W[4];                         /* Variable: W
                                        * Referenced by:
                                        *   '<S1>/Pulse Generator1'
                                        *   '<S1>/Pulse Generator2'
                                        *   '<S1>/Pulse Generator3'
                                        *   '<S1>/Pulse Generator4'
                                        */
  real_T Lykyhatkk1_Y0;                /* Expression: 0
                                        * Referenced by: '<S166>/L*(y[k]-yhat[k|k-1])'
                                        */
  real_T deltax_Y0;                    /* Expression: 0
                                        * Referenced by: '<S168>/deltax'
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
  real_T KalmanGainM_Value[4];         /* Expression: pInitialization.M
                                        * Referenced by: '<S61>/KalmanGainM'
                                        */
  real_T C_Value[4];                   /* Expression: pInitialization.C
                                        * Referenced by: '<S3>/C'
                                        */
  real_T KalmanGainM_Value_p[4];       /* Expression: pInitialization.M
                                        * Referenced by: '<S7>/KalmanGainM'
                                        */
  real_T C_Value_g[4];                 /* Expression: pInitialization.C
                                        * Referenced by: '<S2>/C'
                                        */
  real_T A_Value[4];                   /* Expression: pInitialization.A
                                        * Referenced by: '<S2>/A'
                                        */
  real_T KalmanGainL_Value[4];         /* Expression: pInitialization.L
                                        * Referenced by: '<S7>/KalmanGainL'
                                        */
  real_T A_Value_j[4];                 /* Expression: pInitialization.A
                                        * Referenced by: '<S3>/A'
                                        */
  real_T KalmanGainL_Value_a[4];       /* Expression: pInitialization.L
                                        * Referenced by: '<S61>/KalmanGainL'
                                        */
  real_T A_Value_h[4];                 /* Expression: pInitialization.A
                                        * Referenced by: '<S4>/A'
                                        */
  real_T Constant3_Value;              /* Expression: 1
                                        * Referenced by: '<S1>/Constant3'
                                        */
  real_T X0_Value[2];                  /* Expression: pInitialization.X0
                                        * Referenced by: '<S3>/X0'
                                        */
  real_T B_Value[2];                   /* Expression: pInitialization.B
                                        * Referenced by: '<S3>/B'
                                        */
  real_T D_Value[2];                   /* Expression: pInitialization.D
                                        * Referenced by: '<S3>/D'
                                        */
  real_T X0_Value_g[2];                /* Expression: pInitialization.X0
                                        * Referenced by: '<S2>/X0'
                                        */
  real_T B_Value_c[2];                 /* Expression: pInitialization.B
                                        * Referenced by: '<S2>/B'
                                        */
  real_T D_Value_o[2];                 /* Expression: pInitialization.D
                                        * Referenced by: '<S2>/D'
                                        */
  real_T X0_Value_m[2];                /* Expression: pInitialization.X0
                                        * Referenced by: '<S4>/X0'
                                        */
  real_T B_Value_p[2];                 /* Expression: pInitialization.B
                                        * Referenced by: '<S4>/B'
                                        */
  real_T D_Value_n;                    /* Expression: pInitialization.D
                                        * Referenced by: '<S4>/D'
                                        */
  real_T C_Value_j[2];                 /* Expression: pInitialization.C
                                        * Referenced by: '<S4>/C'
                                        */
  real_T KalmanGainL_Value_h[2];       /* Expression: pInitialization.L
                                        * Referenced by: '<S115>/KalmanGainL'
                                        */
  real_T KalmanGainM_Value_b[2];       /* Expression: pInitialization.M
                                        * Referenced by: '<S115>/KalmanGainM'
                                        */
  real_T CovarianceZ_Value[4];         /* Expression: pInitialization.Z
                                        * Referenced by: '<S7>/CovarianceZ'
                                        */
  real_T CovarianceZ_Value_o[4];       /* Expression: pInitialization.Z
                                        * Referenced by: '<S61>/CovarianceZ'
                                        */
  real_T CovarianceZ_Value_ok[4];      /* Expression: pInitialization.Z
                                        * Referenced by: '<S115>/CovarianceZ'
                                        */
  real32_T Saturation1_UpperSat;     /* Computed Parameter: Saturation1_UpperSat
                                      * Referenced by: '<S1>/Saturation1'
                                      */
  real32_T Saturation1_LowerSat;     /* Computed Parameter: Saturation1_LowerSat
                                      * Referenced by: '<S1>/Saturation1'
                                      */
  boolean_T Enable_Value;              /* Expression: true()
                                        * Referenced by: '<S3>/Enable'
                                        */
  boolean_T Enable_Value_n;            /* Expression: true()
                                        * Referenced by: '<S2>/Enable'
                                        */
  boolean_T Enable_Value_p;            /* Expression: true()
                                        * Referenced by: '<S4>/Enable'
                                        */
  boolean_T isSqrtUsed_Value;          /* Expression: pInitialization.isSqrtUsed
                                        * Referenced by: '<S56>/isSqrtUsed'
                                        */
  boolean_T isSqrtUsed_Value_i;        /* Expression: pInitialization.isSqrtUsed
                                        * Referenced by: '<S110>/isSqrtUsed'
                                        */
  boolean_T isSqrtUsed_Value_h;        /* Expression: pInitialization.isSqrtUsed
                                        * Referenced by: '<S164>/isSqrtUsed'
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
  P_EnabledSubsystem_main_T EnabledSubsystem_p;/* '<S88>/Enabled Subsystem' */
  P_MeasurementUpdate_main_T MeasurementUpdate_h;/* '<S81>/MeasurementUpdate' */
  P_EnabledSubsystem_main_T EnabledSubsystem;/* '<S34>/Enabled Subsystem' */
  P_MeasurementUpdate_main_T MeasurementUpdate;/* '<S27>/MeasurementUpdate' */
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
 * Block '<S50>/Data Type Duplicate' : Unused code path elimination
 * Block '<S51>/Data Type Duplicate' : Unused code path elimination
 * Block '<S52>/Conversion' : Unused code path elimination
 * Block '<S52>/Data Type Duplicate' : Unused code path elimination
 * Block '<S53>/Data Type Duplicate' : Unused code path elimination
 * Block '<S10>/Data Type Duplicate' : Unused code path elimination
 * Block '<S11>/Data Type Duplicate' : Unused code path elimination
 * Block '<S12>/Data Type Duplicate' : Unused code path elimination
 * Block '<S13>/Data Type Duplicate' : Unused code path elimination
 * Block '<S15>/Data Type Duplicate' : Unused code path elimination
 * Block '<S16>/Data Type Duplicate' : Unused code path elimination
 * Block '<S17>/Data Type Duplicate' : Unused code path elimination
 * Block '<S18>/Conversion' : Unused code path elimination
 * Block '<S18>/Data Type Duplicate' : Unused code path elimination
 * Block '<S19>/Data Type Duplicate' : Unused code path elimination
 * Block '<S20>/Data Type Duplicate' : Unused code path elimination
 * Block '<S21>/Data Type Duplicate' : Unused code path elimination
 * Block '<S23>/Data Type Duplicate' : Unused code path elimination
 * Block '<S24>/Data Type Duplicate' : Unused code path elimination
 * Block '<S2>/G' : Unused code path elimination
 * Block '<S2>/H' : Unused code path elimination
 * Block '<S2>/N' : Unused code path elimination
 * Block '<S2>/P0' : Unused code path elimination
 * Block '<S2>/Q' : Unused code path elimination
 * Block '<S2>/R' : Unused code path elimination
 * Block '<S48>/CheckSignalProperties' : Unused code path elimination
 * Block '<S49>/CheckSignalProperties' : Unused code path elimination
 * Block '<S104>/Data Type Duplicate' : Unused code path elimination
 * Block '<S105>/Data Type Duplicate' : Unused code path elimination
 * Block '<S106>/Conversion' : Unused code path elimination
 * Block '<S106>/Data Type Duplicate' : Unused code path elimination
 * Block '<S107>/Data Type Duplicate' : Unused code path elimination
 * Block '<S64>/Data Type Duplicate' : Unused code path elimination
 * Block '<S65>/Data Type Duplicate' : Unused code path elimination
 * Block '<S66>/Data Type Duplicate' : Unused code path elimination
 * Block '<S67>/Data Type Duplicate' : Unused code path elimination
 * Block '<S69>/Data Type Duplicate' : Unused code path elimination
 * Block '<S70>/Data Type Duplicate' : Unused code path elimination
 * Block '<S71>/Data Type Duplicate' : Unused code path elimination
 * Block '<S72>/Conversion' : Unused code path elimination
 * Block '<S72>/Data Type Duplicate' : Unused code path elimination
 * Block '<S73>/Data Type Duplicate' : Unused code path elimination
 * Block '<S74>/Data Type Duplicate' : Unused code path elimination
 * Block '<S75>/Data Type Duplicate' : Unused code path elimination
 * Block '<S77>/Data Type Duplicate' : Unused code path elimination
 * Block '<S78>/Data Type Duplicate' : Unused code path elimination
 * Block '<S3>/G' : Unused code path elimination
 * Block '<S3>/H' : Unused code path elimination
 * Block '<S3>/N' : Unused code path elimination
 * Block '<S3>/P0' : Unused code path elimination
 * Block '<S3>/Q' : Unused code path elimination
 * Block '<S3>/R' : Unused code path elimination
 * Block '<S102>/CheckSignalProperties' : Unused code path elimination
 * Block '<S103>/CheckSignalProperties' : Unused code path elimination
 * Block '<S158>/Data Type Duplicate' : Unused code path elimination
 * Block '<S159>/Data Type Duplicate' : Unused code path elimination
 * Block '<S160>/Conversion' : Unused code path elimination
 * Block '<S160>/Data Type Duplicate' : Unused code path elimination
 * Block '<S161>/Data Type Duplicate' : Unused code path elimination
 * Block '<S118>/Data Type Duplicate' : Unused code path elimination
 * Block '<S119>/Data Type Duplicate' : Unused code path elimination
 * Block '<S120>/Data Type Duplicate' : Unused code path elimination
 * Block '<S121>/Data Type Duplicate' : Unused code path elimination
 * Block '<S123>/Data Type Duplicate' : Unused code path elimination
 * Block '<S124>/Data Type Duplicate' : Unused code path elimination
 * Block '<S125>/Data Type Duplicate' : Unused code path elimination
 * Block '<S126>/Conversion' : Unused code path elimination
 * Block '<S126>/Data Type Duplicate' : Unused code path elimination
 * Block '<S127>/Data Type Duplicate' : Unused code path elimination
 * Block '<S128>/Data Type Duplicate' : Unused code path elimination
 * Block '<S129>/Data Type Duplicate' : Unused code path elimination
 * Block '<S131>/Data Type Duplicate' : Unused code path elimination
 * Block '<S132>/Data Type Duplicate' : Unused code path elimination
 * Block '<S4>/G' : Unused code path elimination
 * Block '<S4>/H' : Unused code path elimination
 * Block '<S4>/N' : Unused code path elimination
 * Block '<S4>/P0' : Unused code path elimination
 * Block '<S4>/Q' : Unused code path elimination
 * Block '<S4>/R' : Unused code path elimination
 * Block '<S156>/CheckSignalProperties' : Unused code path elimination
 * Block '<S157>/CheckSignalProperties' : Unused code path elimination
 * Block '<S1>/Cast To Double' : Eliminate redundant data type conversion
 * Block '<S1>/Cast To Double4' : Eliminate redundant data type conversion
 * Block '<S50>/Conversion' : Eliminate redundant data type conversion
 * Block '<S51>/Conversion' : Eliminate redundant data type conversion
 * Block '<S53>/Conversion' : Eliminate redundant data type conversion
 * Block '<S23>/Conversion' : Eliminate redundant data type conversion
 * Block '<S27>/Reshape' : Reshape block reduction
 * Block '<S2>/ReshapeX0' : Reshape block reduction
 * Block '<S2>/Reshapeu' : Reshape block reduction
 * Block '<S2>/Reshapexhat' : Reshape block reduction
 * Block '<S2>/Reshapey' : Reshape block reduction
 * Block '<S104>/Conversion' : Eliminate redundant data type conversion
 * Block '<S105>/Conversion' : Eliminate redundant data type conversion
 * Block '<S107>/Conversion' : Eliminate redundant data type conversion
 * Block '<S77>/Conversion' : Eliminate redundant data type conversion
 * Block '<S81>/Reshape' : Reshape block reduction
 * Block '<S3>/ReshapeX0' : Reshape block reduction
 * Block '<S3>/Reshapeu' : Reshape block reduction
 * Block '<S3>/Reshapexhat' : Reshape block reduction
 * Block '<S3>/Reshapey' : Reshape block reduction
 * Block '<S158>/Conversion' : Eliminate redundant data type conversion
 * Block '<S159>/Conversion' : Eliminate redundant data type conversion
 * Block '<S161>/Conversion' : Eliminate redundant data type conversion
 * Block '<S131>/Conversion' : Eliminate redundant data type conversion
 * Block '<S135>/Reshape' : Reshape block reduction
 * Block '<S4>/ReshapeX0' : Reshape block reduction
 * Block '<S4>/Reshapeu' : Reshape block reduction
 * Block '<S4>/Reshapexhat' : Reshape block reduction
 * Block '<S4>/Reshapey' : Reshape block reduction
 * Block '<S1>/Rate Transition' : Eliminated since input and output rates are identical
 * Block '<S1>/Rate Transition1' : Eliminated since input and output rates are identical
 * Block '<S1>/Rate Transition2' : Eliminated since input and output rates are identical
 * Block '<S1>/Rate Transition3' : Eliminated since input and output rates are identical
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
 * '<S2>'   : 'main/Flight Control System/Kalman Filter, Aileron'
 * '<S3>'   : 'main/Flight Control System/Kalman Filter, Elevator'
 * '<S4>'   : 'main/Flight Control System/Kalman Filter, Throttle'
 * '<S5>'   : 'main/Flight Control System/MATLAB Function'
 * '<S6>'   : 'main/Flight Control System/Subsystem'
 * '<S7>'   : 'main/Flight Control System/Kalman Filter, Aileron/CalculatePL'
 * '<S8>'   : 'main/Flight Control System/Kalman Filter, Aileron/CalculateYhat'
 * '<S9>'   : 'main/Flight Control System/Kalman Filter, Aileron/CovarianceOutputConfigurator'
 * '<S10>'  : 'main/Flight Control System/Kalman Filter, Aileron/DataTypeConversionA'
 * '<S11>'  : 'main/Flight Control System/Kalman Filter, Aileron/DataTypeConversionB'
 * '<S12>'  : 'main/Flight Control System/Kalman Filter, Aileron/DataTypeConversionC'
 * '<S13>'  : 'main/Flight Control System/Kalman Filter, Aileron/DataTypeConversionD'
 * '<S14>'  : 'main/Flight Control System/Kalman Filter, Aileron/DataTypeConversionEnable'
 * '<S15>'  : 'main/Flight Control System/Kalman Filter, Aileron/DataTypeConversionG'
 * '<S16>'  : 'main/Flight Control System/Kalman Filter, Aileron/DataTypeConversionH'
 * '<S17>'  : 'main/Flight Control System/Kalman Filter, Aileron/DataTypeConversionN'
 * '<S18>'  : 'main/Flight Control System/Kalman Filter, Aileron/DataTypeConversionP'
 * '<S19>'  : 'main/Flight Control System/Kalman Filter, Aileron/DataTypeConversionP0'
 * '<S20>'  : 'main/Flight Control System/Kalman Filter, Aileron/DataTypeConversionQ'
 * '<S21>'  : 'main/Flight Control System/Kalman Filter, Aileron/DataTypeConversionR'
 * '<S22>'  : 'main/Flight Control System/Kalman Filter, Aileron/DataTypeConversionReset'
 * '<S23>'  : 'main/Flight Control System/Kalman Filter, Aileron/DataTypeConversionX'
 * '<S24>'  : 'main/Flight Control System/Kalman Filter, Aileron/DataTypeConversionX0'
 * '<S25>'  : 'main/Flight Control System/Kalman Filter, Aileron/DataTypeConversionu'
 * '<S26>'  : 'main/Flight Control System/Kalman Filter, Aileron/MemoryP'
 * '<S27>'  : 'main/Flight Control System/Kalman Filter, Aileron/Observer'
 * '<S28>'  : 'main/Flight Control System/Kalman Filter, Aileron/ReducedQRN'
 * '<S29>'  : 'main/Flight Control System/Kalman Filter, Aileron/Reset'
 * '<S30>'  : 'main/Flight Control System/Kalman Filter, Aileron/Reshapeyhat'
 * '<S31>'  : 'main/Flight Control System/Kalman Filter, Aileron/ScalarExpansionP0'
 * '<S32>'  : 'main/Flight Control System/Kalman Filter, Aileron/ScalarExpansionQ'
 * '<S33>'  : 'main/Flight Control System/Kalman Filter, Aileron/ScalarExpansionR'
 * '<S34>'  : 'main/Flight Control System/Kalman Filter, Aileron/UseCurrentEstimator'
 * '<S35>'  : 'main/Flight Control System/Kalman Filter, Aileron/checkA'
 * '<S36>'  : 'main/Flight Control System/Kalman Filter, Aileron/checkB'
 * '<S37>'  : 'main/Flight Control System/Kalman Filter, Aileron/checkC'
 * '<S38>'  : 'main/Flight Control System/Kalman Filter, Aileron/checkD'
 * '<S39>'  : 'main/Flight Control System/Kalman Filter, Aileron/checkEnable'
 * '<S40>'  : 'main/Flight Control System/Kalman Filter, Aileron/checkG'
 * '<S41>'  : 'main/Flight Control System/Kalman Filter, Aileron/checkH'
 * '<S42>'  : 'main/Flight Control System/Kalman Filter, Aileron/checkN'
 * '<S43>'  : 'main/Flight Control System/Kalman Filter, Aileron/checkP0'
 * '<S44>'  : 'main/Flight Control System/Kalman Filter, Aileron/checkQ'
 * '<S45>'  : 'main/Flight Control System/Kalman Filter, Aileron/checkR'
 * '<S46>'  : 'main/Flight Control System/Kalman Filter, Aileron/checkReset'
 * '<S47>'  : 'main/Flight Control System/Kalman Filter, Aileron/checkX0'
 * '<S48>'  : 'main/Flight Control System/Kalman Filter, Aileron/checku'
 * '<S49>'  : 'main/Flight Control System/Kalman Filter, Aileron/checky'
 * '<S50>'  : 'main/Flight Control System/Kalman Filter, Aileron/CalculatePL/DataTypeConversionL'
 * '<S51>'  : 'main/Flight Control System/Kalman Filter, Aileron/CalculatePL/DataTypeConversionM'
 * '<S52>'  : 'main/Flight Control System/Kalman Filter, Aileron/CalculatePL/DataTypeConversionP'
 * '<S53>'  : 'main/Flight Control System/Kalman Filter, Aileron/CalculatePL/DataTypeConversionZ'
 * '<S54>'  : 'main/Flight Control System/Kalman Filter, Aileron/CalculatePL/Ground'
 * '<S55>'  : 'main/Flight Control System/Kalman Filter, Aileron/CalculateYhat/Ground'
 * '<S56>'  : 'main/Flight Control System/Kalman Filter, Aileron/CovarianceOutputConfigurator/decideOutput'
 * '<S57>'  : 'main/Flight Control System/Kalman Filter, Aileron/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S58>'  : 'main/Flight Control System/Kalman Filter, Aileron/Observer/MeasurementUpdate'
 * '<S59>'  : 'main/Flight Control System/Kalman Filter, Aileron/ReducedQRN/Ground'
 * '<S60>'  : 'main/Flight Control System/Kalman Filter, Aileron/UseCurrentEstimator/Enabled Subsystem'
 * '<S61>'  : 'main/Flight Control System/Kalman Filter, Elevator/CalculatePL'
 * '<S62>'  : 'main/Flight Control System/Kalman Filter, Elevator/CalculateYhat'
 * '<S63>'  : 'main/Flight Control System/Kalman Filter, Elevator/CovarianceOutputConfigurator'
 * '<S64>'  : 'main/Flight Control System/Kalman Filter, Elevator/DataTypeConversionA'
 * '<S65>'  : 'main/Flight Control System/Kalman Filter, Elevator/DataTypeConversionB'
 * '<S66>'  : 'main/Flight Control System/Kalman Filter, Elevator/DataTypeConversionC'
 * '<S67>'  : 'main/Flight Control System/Kalman Filter, Elevator/DataTypeConversionD'
 * '<S68>'  : 'main/Flight Control System/Kalman Filter, Elevator/DataTypeConversionEnable'
 * '<S69>'  : 'main/Flight Control System/Kalman Filter, Elevator/DataTypeConversionG'
 * '<S70>'  : 'main/Flight Control System/Kalman Filter, Elevator/DataTypeConversionH'
 * '<S71>'  : 'main/Flight Control System/Kalman Filter, Elevator/DataTypeConversionN'
 * '<S72>'  : 'main/Flight Control System/Kalman Filter, Elevator/DataTypeConversionP'
 * '<S73>'  : 'main/Flight Control System/Kalman Filter, Elevator/DataTypeConversionP0'
 * '<S74>'  : 'main/Flight Control System/Kalman Filter, Elevator/DataTypeConversionQ'
 * '<S75>'  : 'main/Flight Control System/Kalman Filter, Elevator/DataTypeConversionR'
 * '<S76>'  : 'main/Flight Control System/Kalman Filter, Elevator/DataTypeConversionReset'
 * '<S77>'  : 'main/Flight Control System/Kalman Filter, Elevator/DataTypeConversionX'
 * '<S78>'  : 'main/Flight Control System/Kalman Filter, Elevator/DataTypeConversionX0'
 * '<S79>'  : 'main/Flight Control System/Kalman Filter, Elevator/DataTypeConversionu'
 * '<S80>'  : 'main/Flight Control System/Kalman Filter, Elevator/MemoryP'
 * '<S81>'  : 'main/Flight Control System/Kalman Filter, Elevator/Observer'
 * '<S82>'  : 'main/Flight Control System/Kalman Filter, Elevator/ReducedQRN'
 * '<S83>'  : 'main/Flight Control System/Kalman Filter, Elevator/Reset'
 * '<S84>'  : 'main/Flight Control System/Kalman Filter, Elevator/Reshapeyhat'
 * '<S85>'  : 'main/Flight Control System/Kalman Filter, Elevator/ScalarExpansionP0'
 * '<S86>'  : 'main/Flight Control System/Kalman Filter, Elevator/ScalarExpansionQ'
 * '<S87>'  : 'main/Flight Control System/Kalman Filter, Elevator/ScalarExpansionR'
 * '<S88>'  : 'main/Flight Control System/Kalman Filter, Elevator/UseCurrentEstimator'
 * '<S89>'  : 'main/Flight Control System/Kalman Filter, Elevator/checkA'
 * '<S90>'  : 'main/Flight Control System/Kalman Filter, Elevator/checkB'
 * '<S91>'  : 'main/Flight Control System/Kalman Filter, Elevator/checkC'
 * '<S92>'  : 'main/Flight Control System/Kalman Filter, Elevator/checkD'
 * '<S93>'  : 'main/Flight Control System/Kalman Filter, Elevator/checkEnable'
 * '<S94>'  : 'main/Flight Control System/Kalman Filter, Elevator/checkG'
 * '<S95>'  : 'main/Flight Control System/Kalman Filter, Elevator/checkH'
 * '<S96>'  : 'main/Flight Control System/Kalman Filter, Elevator/checkN'
 * '<S97>'  : 'main/Flight Control System/Kalman Filter, Elevator/checkP0'
 * '<S98>'  : 'main/Flight Control System/Kalman Filter, Elevator/checkQ'
 * '<S99>'  : 'main/Flight Control System/Kalman Filter, Elevator/checkR'
 * '<S100>' : 'main/Flight Control System/Kalman Filter, Elevator/checkReset'
 * '<S101>' : 'main/Flight Control System/Kalman Filter, Elevator/checkX0'
 * '<S102>' : 'main/Flight Control System/Kalman Filter, Elevator/checku'
 * '<S103>' : 'main/Flight Control System/Kalman Filter, Elevator/checky'
 * '<S104>' : 'main/Flight Control System/Kalman Filter, Elevator/CalculatePL/DataTypeConversionL'
 * '<S105>' : 'main/Flight Control System/Kalman Filter, Elevator/CalculatePL/DataTypeConversionM'
 * '<S106>' : 'main/Flight Control System/Kalman Filter, Elevator/CalculatePL/DataTypeConversionP'
 * '<S107>' : 'main/Flight Control System/Kalman Filter, Elevator/CalculatePL/DataTypeConversionZ'
 * '<S108>' : 'main/Flight Control System/Kalman Filter, Elevator/CalculatePL/Ground'
 * '<S109>' : 'main/Flight Control System/Kalman Filter, Elevator/CalculateYhat/Ground'
 * '<S110>' : 'main/Flight Control System/Kalman Filter, Elevator/CovarianceOutputConfigurator/decideOutput'
 * '<S111>' : 'main/Flight Control System/Kalman Filter, Elevator/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S112>' : 'main/Flight Control System/Kalman Filter, Elevator/Observer/MeasurementUpdate'
 * '<S113>' : 'main/Flight Control System/Kalman Filter, Elevator/ReducedQRN/Ground'
 * '<S114>' : 'main/Flight Control System/Kalman Filter, Elevator/UseCurrentEstimator/Enabled Subsystem'
 * '<S115>' : 'main/Flight Control System/Kalman Filter, Throttle/CalculatePL'
 * '<S116>' : 'main/Flight Control System/Kalman Filter, Throttle/CalculateYhat'
 * '<S117>' : 'main/Flight Control System/Kalman Filter, Throttle/CovarianceOutputConfigurator'
 * '<S118>' : 'main/Flight Control System/Kalman Filter, Throttle/DataTypeConversionA'
 * '<S119>' : 'main/Flight Control System/Kalman Filter, Throttle/DataTypeConversionB'
 * '<S120>' : 'main/Flight Control System/Kalman Filter, Throttle/DataTypeConversionC'
 * '<S121>' : 'main/Flight Control System/Kalman Filter, Throttle/DataTypeConversionD'
 * '<S122>' : 'main/Flight Control System/Kalman Filter, Throttle/DataTypeConversionEnable'
 * '<S123>' : 'main/Flight Control System/Kalman Filter, Throttle/DataTypeConversionG'
 * '<S124>' : 'main/Flight Control System/Kalman Filter, Throttle/DataTypeConversionH'
 * '<S125>' : 'main/Flight Control System/Kalman Filter, Throttle/DataTypeConversionN'
 * '<S126>' : 'main/Flight Control System/Kalman Filter, Throttle/DataTypeConversionP'
 * '<S127>' : 'main/Flight Control System/Kalman Filter, Throttle/DataTypeConversionP0'
 * '<S128>' : 'main/Flight Control System/Kalman Filter, Throttle/DataTypeConversionQ'
 * '<S129>' : 'main/Flight Control System/Kalman Filter, Throttle/DataTypeConversionR'
 * '<S130>' : 'main/Flight Control System/Kalman Filter, Throttle/DataTypeConversionReset'
 * '<S131>' : 'main/Flight Control System/Kalman Filter, Throttle/DataTypeConversionX'
 * '<S132>' : 'main/Flight Control System/Kalman Filter, Throttle/DataTypeConversionX0'
 * '<S133>' : 'main/Flight Control System/Kalman Filter, Throttle/DataTypeConversionu'
 * '<S134>' : 'main/Flight Control System/Kalman Filter, Throttle/MemoryP'
 * '<S135>' : 'main/Flight Control System/Kalman Filter, Throttle/Observer'
 * '<S136>' : 'main/Flight Control System/Kalman Filter, Throttle/ReducedQRN'
 * '<S137>' : 'main/Flight Control System/Kalman Filter, Throttle/Reset'
 * '<S138>' : 'main/Flight Control System/Kalman Filter, Throttle/Reshapeyhat'
 * '<S139>' : 'main/Flight Control System/Kalman Filter, Throttle/ScalarExpansionP0'
 * '<S140>' : 'main/Flight Control System/Kalman Filter, Throttle/ScalarExpansionQ'
 * '<S141>' : 'main/Flight Control System/Kalman Filter, Throttle/ScalarExpansionR'
 * '<S142>' : 'main/Flight Control System/Kalman Filter, Throttle/UseCurrentEstimator'
 * '<S143>' : 'main/Flight Control System/Kalman Filter, Throttle/checkA'
 * '<S144>' : 'main/Flight Control System/Kalman Filter, Throttle/checkB'
 * '<S145>' : 'main/Flight Control System/Kalman Filter, Throttle/checkC'
 * '<S146>' : 'main/Flight Control System/Kalman Filter, Throttle/checkD'
 * '<S147>' : 'main/Flight Control System/Kalman Filter, Throttle/checkEnable'
 * '<S148>' : 'main/Flight Control System/Kalman Filter, Throttle/checkG'
 * '<S149>' : 'main/Flight Control System/Kalman Filter, Throttle/checkH'
 * '<S150>' : 'main/Flight Control System/Kalman Filter, Throttle/checkN'
 * '<S151>' : 'main/Flight Control System/Kalman Filter, Throttle/checkP0'
 * '<S152>' : 'main/Flight Control System/Kalman Filter, Throttle/checkQ'
 * '<S153>' : 'main/Flight Control System/Kalman Filter, Throttle/checkR'
 * '<S154>' : 'main/Flight Control System/Kalman Filter, Throttle/checkReset'
 * '<S155>' : 'main/Flight Control System/Kalman Filter, Throttle/checkX0'
 * '<S156>' : 'main/Flight Control System/Kalman Filter, Throttle/checku'
 * '<S157>' : 'main/Flight Control System/Kalman Filter, Throttle/checky'
 * '<S158>' : 'main/Flight Control System/Kalman Filter, Throttle/CalculatePL/DataTypeConversionL'
 * '<S159>' : 'main/Flight Control System/Kalman Filter, Throttle/CalculatePL/DataTypeConversionM'
 * '<S160>' : 'main/Flight Control System/Kalman Filter, Throttle/CalculatePL/DataTypeConversionP'
 * '<S161>' : 'main/Flight Control System/Kalman Filter, Throttle/CalculatePL/DataTypeConversionZ'
 * '<S162>' : 'main/Flight Control System/Kalman Filter, Throttle/CalculatePL/Ground'
 * '<S163>' : 'main/Flight Control System/Kalman Filter, Throttle/CalculateYhat/Ground'
 * '<S164>' : 'main/Flight Control System/Kalman Filter, Throttle/CovarianceOutputConfigurator/decideOutput'
 * '<S165>' : 'main/Flight Control System/Kalman Filter, Throttle/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S166>' : 'main/Flight Control System/Kalman Filter, Throttle/Observer/MeasurementUpdate'
 * '<S167>' : 'main/Flight Control System/Kalman Filter, Throttle/ReducedQRN/Ground'
 * '<S168>' : 'main/Flight Control System/Kalman Filter, Throttle/UseCurrentEstimator/Enabled Subsystem'
 */
#endif                                 /* RTW_HEADER_main_h_ */
