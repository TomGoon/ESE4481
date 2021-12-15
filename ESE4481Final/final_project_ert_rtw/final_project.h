/*
 * final_project.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "final_project".
 *
 * Model version              : 1.22
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Tue Dec 14 23:04:45 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_final_project_h_
#define RTW_HEADER_final_project_h_
#include <stddef.h>
#include <math.h>
#include <string.h>
#include <float.h>
#ifndef final_project_COMMON_INCLUDES_
#define final_project_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* final_project_COMMON_INCLUDES_ */

#include "final_project_types.h"

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
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

/* Block signals for system '<S33>/MeasurementUpdate' */
typedef struct {
  real_T Product3[2];                  /* '<S64>/Product3' */
} B_MeasurementUpdate_final_pro_T;

/* Block states (default storage) for system '<S33>/MeasurementUpdate' */
typedef struct {
  boolean_T MeasurementUpdate_MODE;    /* '<S33>/MeasurementUpdate' */
} DW_MeasurementUpdate_final_pr_T;

/* Block signals for system '<S40>/Enabled Subsystem' */
typedef struct {
  real_T Product2[2];                  /* '<S66>/Product2' */
} B_EnabledSubsystem_final_proj_T;

/* Block states (default storage) for system '<S40>/Enabled Subsystem' */
typedef struct {
  boolean_T EnabledSubsystem_MODE;     /* '<S40>/Enabled Subsystem' */
} DW_EnabledSubsystem_final_pro_T;

/* Block signals (default storage) */
typedef struct {
  real32_T c[9];
  real32_T Command_tmp[9];
  real32_T c_m[9];
  real32_T c_c[9];
  real_T Command[4];                   /* '<S1>/Sum14' */
  real_T ManualSwitch1[4];             /* '<S1>/Manual Switch1' */
  real_T ManualSwitch2[4];             /* '<S1>/Manual Switch2' */
  real_T Sum19[4];                     /* '<S1>/Sum19' */
  real_T UnitDelay3[2];                /* '<S1>/Unit Delay3' */
  real_T MemoryX[2];                   /* '<S3>/MemoryX' */
  real_T UnitDelay1[2];                /* '<S1>/Unit Delay1' */
  real_T MemoryX_j[2];                 /* '<S2>/MemoryX' */
  real_T Add[2];                       /* '<S141>/Add' */
  real_T Add_g[2];                     /* '<S87>/Add' */
  real_T Add_l[2];                     /* '<S33>/Add' */
  real32_T fv[3];
  real32_T c_k[3];
  real_T CastToDouble3;                /* '<S1>/Cast To Double3' */
  real_T CastToDouble2;                /* '<S1>/Cast To Double2' */
  real_T Sum10;                        /* '<S1>/Sum10' */
  real_T Sum16;                        /* '<S1>/Sum16' */
  real_T CastToDouble1;                /* '<S1>/Cast To Double1' */
  real_T CastToDouble5;                /* '<S1>/Cast To Double5' */
  real_T MatrixMultiply1[2];           /* '<S1>/MatrixMultiply1' */
  real_T CastToDouble7;                /* '<S1>/Cast To Double7' */
  real_T Product2[2];                  /* '<S174>/Product2' */
  real_T Product3[2];                  /* '<S172>/Product3' */
  real_T Ckxhatkk1;                    /* '<S172>/C[k]*xhat[k|k-1]' */
  real_T d;
  real_T d1;
  real_T d2;
  real32_T CastToSingle1[2];           /* '<S1>/Cast To Single1' */
  real32_T CastToSingle[2];            /* '<S1>/Cast To Single' */
  real32_T CastToSingle2[2];           /* '<S1>/Cast To Single2' */
  real32_T Gain;                       /* '<S1>/Gain' */
  real32_T Gain1;                      /* '<S1>/Gain1' */
  real32_T Gain3;                      /* '<S1>/Gain3' */
  real32_T Gain4;                      /* '<S1>/Gain4' */
  real32_T Sum12;                      /* '<S1>/Sum12' */
  real32_T Gain7;                      /* '<S1>/Gain7' */
  real32_T Gain8;                      /* '<S1>/Gain8' */
  real32_T Sum17;                      /* '<S1>/Sum17' */
  real32_T Sum18;                      /* '<S1>/Sum18' */
  real32_T Sum2;                       /* '<S1>/Sum2' */
  real32_T Sum3;                       /* '<S1>/Sum3' */
  real32_T opticalFlow_data[3];
  real32_T altitude;
  real32_T pressure;
  real32_T bias;                       /* '<S1>/MATLAB Function7' */
  real32_T theta_measured;             /* '<S1>/MATLAB Function' */
  real32_T phi_measured;               /* '<S1>/MATLAB Function' */
  B_EnabledSubsystem_final_proj_T EnabledSubsystem_g;/* '<S94>/Enabled Subsystem' */
  B_MeasurementUpdate_final_pro_T MeasurementUpdate_f;/* '<S87>/MeasurementUpdate' */
  B_EnabledSubsystem_final_proj_T EnabledSubsystem;/* '<S40>/Enabled Subsystem' */
  B_MeasurementUpdate_final_pro_T MeasurementUpdate;/* '<S33>/MeasurementUpdate' */
} B_final_project_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T MemoryX_DSTATE[2];            /* '<S3>/MemoryX' */
  real_T UnitDelay3_DSTATE[2];         /* '<S1>/Unit Delay3' */
  real_T MemoryX_DSTATE_n[2];          /* '<S2>/MemoryX' */
  real_T UnitDelay1_DSTATE[2];         /* '<S1>/Unit Delay1' */
  real_T MemoryX_DSTATE_p[2];          /* '<S4>/MemoryX' */
  real_T UnitDelay5_DSTATE;            /* '<S1>/Unit Delay5' */
  real_T UnitDelay4_DSTATE;            /* '<S1>/Unit Delay4' */
  real_T UnitDelay2_DSTATE;            /* '<S1>/Unit Delay2' */
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  struct {
    void *LoggedData;
  } Scope22_PWORK;                     /* '<S1>/Scope22' */

  struct {
    void *LoggedData;
  } Scope23_PWORK;                     /* '<S1>/Scope23' */

  struct {
    void *LoggedData;
  } Scope15_PWORK;                     /* '<S1>/Scope15' */

  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<S1>/Scope' */

  struct {
    void *LoggedData;
  } Scope10_PWORK;                     /* '<S1>/Scope10' */

  struct {
    void *LoggedData;
  } Scope14_PWORK;                     /* '<S1>/Scope14' */

  struct {
    void *LoggedData;
  } Scope11_PWORK;                     /* '<S1>/Scope11' */

  struct {
    void *LoggedData;
  } Scope16_PWORK;                     /* '<S1>/Scope16' */

  struct {
    void *LoggedData;
  } Scope17_PWORK;                     /* '<S1>/Scope17' */

  struct {
    void *LoggedData;
  } Scope9_PWORK;                      /* '<S1>/Scope9' */

  struct {
    void *LoggedData;
  } Scope8_PWORK;                      /* '<S1>/Scope8' */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<S1>/To Workspace' */

  struct {
    void *LoggedData;
  } Scope7_PWORK;                      /* '<S1>/Scope7' */

  struct {
    void *LoggedData;
  } Scope19_PWORK;                     /* '<S1>/Scope19' */

  struct {
    void *LoggedData;
  } Scope21_PWORK;                     /* '<S1>/Scope21' */

  struct {
    void *LoggedData;
  } Scope5_PWORK;                      /* '<S1>/Scope5' */

  struct {
    void *LoggedData;
  } Scope4_PWORK;                      /* '<S1>/Scope4' */

  struct {
    void *LoggedData;
  } Scope6_PWORK;                      /* '<S1>/Scope6' */

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
  } Scope18_PWORK;                     /* '<S1>/Scope18' */

  struct {
    void *LoggedData;
  } Scope20_PWORK;                     /* '<S1>/Scope20' */

  struct {
    void *LoggedData;
  } Scope13_PWORK;                     /* '<S1>/Scope13' */

  struct {
    void *LoggedData;
  } Scope12_PWORK;                     /* '<S1>/Scope12' */

  boolean_T icLoad;                    /* '<S3>/MemoryX' */
  boolean_T icLoad_k;                  /* '<S2>/MemoryX' */
  boolean_T icLoad_i;                  /* '<S4>/MemoryX' */
  boolean_T EnabledSubsystem_MODE;     /* '<S148>/Enabled Subsystem' */
  boolean_T MeasurementUpdate_MODE;    /* '<S141>/MeasurementUpdate' */
  DW_EnabledSubsystem_final_pro_T EnabledSubsystem_g;/* '<S94>/Enabled Subsystem' */
  DW_MeasurementUpdate_final_pr_T MeasurementUpdate_f;/* '<S87>/MeasurementUpdate' */
  DW_EnabledSubsystem_final_pro_T EnabledSubsystem;/* '<S40>/Enabled Subsystem' */
  DW_MeasurementUpdate_final_pr_T MeasurementUpdate;/* '<S33>/MeasurementUpdate' */
} DW_final_project_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T Motors[4];                  /* '<Root>/Motors' */
  uint8_T Flag;                        /* '<Root>/Flag' */
} ExtY_final_project_T;

/* Parameters for system: '<S33>/MeasurementUpdate' */
struct P_MeasurementUpdate_final_pro_T_ {
  real_T Lykyhatkk1_Y0;                /* Expression: 0
                                        * Referenced by: '<S64>/L*(y[k]-yhat[k|k-1])'
                                        */
};

/* Parameters for system: '<S40>/Enabled Subsystem' */
struct P_EnabledSubsystem_final_proj_T_ {
  real_T deltax_Y0;                    /* Expression: 0
                                        * Referenced by: '<S66>/deltax'
                                        */
};

/* Parameters (default storage) */
struct P_final_project_T_ {
  real_T F_aileron;                    /* Variable: F_aileron
                                        * Referenced by: '<S1>/Gain5'
                                        */
  real_T F_elevator;                   /* Variable: F_elevator
                                        * Referenced by: '<S1>/Gain9'
                                        */
  real_T F_rudder;                     /* Variable: F_rudder
                                        * Referenced by: '<S1>/Gain14'
                                        */
  real_T F_throttle;                   /* Variable: F_throttle
                                        * Referenced by: '<S1>/Gain2'
                                        */
  real_T Kappa;                        /* Variable: Kappa
                                        * Referenced by: '<S1>/Constant3'
                                        */
  real_T M_inv[16];                    /* Variable: M_inv
                                        * Referenced by: '<S1>/M_inv'
                                        */
  real_T g;                            /* Variable: g
                                        * Referenced by:
                                        *   '<S1>/Constant'
                                        *   '<S1>/Constant5'
                                        *   '<S1>/Constant8'
                                        */
  real_T m;                            /* Variable: m
                                        * Referenced by: '<S1>/Constant5'
                                        */
  real_T Ramp3_InitialOutput;          /* Mask Parameter: Ramp3_InitialOutput
                                        * Referenced by: '<S10>/Constant1'
                                        */
  real_T Ramp4_InitialOutput;          /* Mask Parameter: Ramp4_InitialOutput
                                        * Referenced by: '<S11>/Constant1'
                                        */
  real_T Ramp1_InitialOutput;          /* Mask Parameter: Ramp1_InitialOutput
                                        * Referenced by: '<S8>/Constant1'
                                        */
  real_T Ramp2_InitialOutput;          /* Mask Parameter: Ramp2_InitialOutput
                                        * Referenced by: '<S9>/Constant1'
                                        */
  real_T Ramp3_slope;                  /* Mask Parameter: Ramp3_slope
                                        * Referenced by: '<S10>/Step'
                                        */
  real_T Ramp4_slope;                  /* Mask Parameter: Ramp4_slope
                                        * Referenced by: '<S11>/Step'
                                        */
  real_T Ramp1_slope;                  /* Mask Parameter: Ramp1_slope
                                        * Referenced by: '<S8>/Step'
                                        */
  real_T Ramp2_slope;                  /* Mask Parameter: Ramp2_slope
                                        * Referenced by: '<S9>/Step'
                                        */
  real_T Ramp3_start;                  /* Mask Parameter: Ramp3_start
                                        * Referenced by:
                                        *   '<S10>/Constant'
                                        *   '<S10>/Step'
                                        */
  real_T Ramp4_start;                  /* Mask Parameter: Ramp4_start
                                        * Referenced by:
                                        *   '<S11>/Constant'
                                        *   '<S11>/Step'
                                        */
  real_T Ramp1_start;                  /* Mask Parameter: Ramp1_start
                                        * Referenced by:
                                        *   '<S8>/Constant'
                                        *   '<S8>/Step'
                                        */
  real_T Ramp2_start;                  /* Mask Parameter: Ramp2_start
                                        * Referenced by:
                                        *   '<S9>/Constant'
                                        *   '<S9>/Step'
                                        */
  real_T Lykyhatkk1_Y0;                /* Expression: 0
                                        * Referenced by: '<S172>/L*(y[k]-yhat[k|k-1])'
                                        */
  real_T deltax_Y0;                    /* Expression: 0
                                        * Referenced by: '<S174>/deltax'
                                        */
  real_T Constant9_Value[4];           /* Expression: [0; 0; 0; 0]
                                        * Referenced by: '<S1>/Constant9'
                                        */
  real_T Constant14_Value[4];          /* Expression: [0.7; 0; 0; 0]
                                        * Referenced by: '<S1>/Constant14'
                                        */
  real_T Constant11_Value[4];          /* Expression: [0; 0; 0; 0]
                                        * Referenced by: '<S1>/Constant11'
                                        */
  real_T Constant10_Value[4];          /* Expression: [0; 0; 0.004; 0]
                                        * Referenced by: '<S1>/Constant10'
                                        */
  real_T X0_Value[2];                  /* Expression: pInitialization.X0
                                        * Referenced by: '<S3>/X0'
                                        */
  real_T KalmanGainM_Value[4];         /* Expression: pInitialization.M
                                        * Referenced by: '<S67>/KalmanGainM'
                                        */
  real_T C_Value[4];                   /* Expression: pInitialization.C
                                        * Referenced by: '<S3>/C'
                                        */
  real_T UnitDelay3_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay3'
                                        */
  real_T X0_Value_b[2];                /* Expression: pInitialization.X0
                                        * Referenced by: '<S2>/X0'
                                        */
  real_T KalmanGainM_Value_d[4];       /* Expression: pInitialization.M
                                        * Referenced by: '<S13>/KalmanGainM'
                                        */
  real_T C_Value_e[4];                 /* Expression: pInitialization.C
                                        * Referenced by: '<S2>/C'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay1'
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<S10>/Step'
                                        */
  real_T Step_Y0_j;                    /* Expression: 0
                                        * Referenced by: '<S11>/Step'
                                        */
  real_T Constant12_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/Constant12'
                                        */
  real_T Constant13_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/Constant13'
                                        */
  real_T Constant15_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/Constant15'
                                        */
  real_T Step_Y0_d;                    /* Expression: 0
                                        * Referenced by: '<S8>/Step'
                                        */
  real_T Step_Y0_g;                    /* Expression: 0
                                        * Referenced by: '<S9>/Step'
                                        */
  real_T Constant4_Value;              /* Expression: 0
                                        * Referenced by: '<S1>/Constant4'
                                        */
  real_T Constant6_Value;              /* Expression: 0
                                        * Referenced by: '<S1>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: 0
                                        * Referenced by: '<S1>/Constant7'
                                        */
  real_T X0_Value_o[2];                /* Expression: pInitialization.X0
                                        * Referenced by: '<S4>/X0'
                                        */
  real_T UnitDelay5_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay5'
                                        */
  real_T KalmanGainM_Value_do[2];      /* Expression: pInitialization.M
                                        * Referenced by: '<S121>/KalmanGainM'
                                        */
  real_T C_Value_n[2];                 /* Expression: pInitialization.C
                                        * Referenced by: '<S4>/C'
                                        */
  real_T A_Value[4];                   /* Expression: pInitialization.A
                                        * Referenced by: '<S2>/A'
                                        */
  real_T KalmanGainL_Value[4];         /* Expression: pInitialization.L
                                        * Referenced by: '<S13>/KalmanGainL'
                                        */
  real_T A_Value_d[4];                 /* Expression: pInitialization.A
                                        * Referenced by: '<S3>/A'
                                        */
  real_T KalmanGainL_Value_b[4];       /* Expression: pInitialization.L
                                        * Referenced by: '<S67>/KalmanGainL'
                                        */
  real_T A_Value_i[4];                 /* Expression: pInitialization.A
                                        * Referenced by: '<S4>/A'
                                        */
  real_T UnitDelay4_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay4'
                                        */
  real_T B_Value[2];                   /* Expression: pInitialization.B
                                        * Referenced by: '<S4>/B'
                                        */
  real_T D_Value;                      /* Expression: pInitialization.D
                                        * Referenced by: '<S4>/D'
                                        */
  real_T KalmanGainL_Value_c[2];       /* Expression: pInitialization.L
                                        * Referenced by: '<S121>/KalmanGainL'
                                        */
  real_T UnitDelay2_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay2'
                                        */
  real_T D_Value_n[2];                 /* Expression: pInitialization.D
                                        * Referenced by: '<S3>/D'
                                        */
  real_T B_Value_g[2];                 /* Expression: pInitialization.B
                                        * Referenced by: '<S3>/B'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay'
                                        */
  real_T D_Value_e[2];                 /* Expression: pInitialization.D
                                        * Referenced by: '<S2>/D'
                                        */
  real_T B_Value_m[2];                 /* Expression: pInitialization.B
                                        * Referenced by: '<S2>/B'
                                        */
  real_T CovarianceZ_Value[4];         /* Expression: pInitialization.Z
                                        * Referenced by: '<S13>/CovarianceZ'
                                        */
  real_T CovarianceZ_Value_a[4];       /* Expression: pInitialization.Z
                                        * Referenced by: '<S67>/CovarianceZ'
                                        */
  real_T CovarianceZ_Value_n[4];       /* Expression: pInitialization.Z
                                        * Referenced by: '<S121>/CovarianceZ'
                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S1>/Gain'
                                        */
  real32_T Gain1_Gain;                 /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<S1>/Gain1'
                                        */
  real32_T Gain3_Gain;                 /* Computed Parameter: Gain3_Gain
                                        * Referenced by: '<S1>/Gain3'
                                        */
  real32_T Gain4_Gain;                 /* Computed Parameter: Gain4_Gain
                                        * Referenced by: '<S1>/Gain4'
                                        */
  real32_T Gain6_Gain;                 /* Computed Parameter: Gain6_Gain
                                        * Referenced by: '<S1>/Gain6'
                                        */
  real32_T Gain7_Gain;                 /* Computed Parameter: Gain7_Gain
                                        * Referenced by: '<S1>/Gain7'
                                        */
  real32_T Gain8_Gain;                 /* Computed Parameter: Gain8_Gain
                                        * Referenced by: '<S1>/Gain8'
                                        */
  real32_T Gain10_Gain;                /* Computed Parameter: Gain10_Gain
                                        * Referenced by: '<S1>/Gain10'
                                        */
  real32_T Gain13_Gain;                /* Computed Parameter: Gain13_Gain
                                        * Referenced by: '<S1>/Gain13'
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
  boolean_T Enable_Value_h;            /* Expression: true()
                                        * Referenced by: '<S2>/Enable'
                                        */
  boolean_T Enable_Value_o;            /* Expression: true()
                                        * Referenced by: '<S4>/Enable'
                                        */
  boolean_T isSqrtUsed_Value;          /* Expression: pInitialization.isSqrtUsed
                                        * Referenced by: '<S62>/isSqrtUsed'
                                        */
  boolean_T isSqrtUsed_Value_h;        /* Expression: pInitialization.isSqrtUsed
                                        * Referenced by: '<S116>/isSqrtUsed'
                                        */
  boolean_T isSqrtUsed_Value_e;        /* Expression: pInitialization.isSqrtUsed
                                        * Referenced by: '<S170>/isSqrtUsed'
                                        */
  uint8_T Constant2_Value;             /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S1>/Constant2'
                                        */
  uint8_T Constant1_Value;             /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S1>/Constant1'
                                        */
  uint8_T ManualSwitch1_CurrentSetting;
                             /* Computed Parameter: ManualSwitch1_CurrentSetting
                              * Referenced by: '<S1>/Manual Switch1'
                              */
  uint8_T ManualSwitch2_CurrentSetting;
                             /* Computed Parameter: ManualSwitch2_CurrentSetting
                              * Referenced by: '<S1>/Manual Switch2'
                              */
  uint8_T ManualSwitch_CurrentSetting;
                              /* Computed Parameter: ManualSwitch_CurrentSetting
                               * Referenced by: '<S1>/Manual Switch'
                               */
  P_EnabledSubsystem_final_proj_T EnabledSubsystem_g;/* '<S94>/Enabled Subsystem' */
  P_MeasurementUpdate_final_pro_T MeasurementUpdate_f;/* '<S87>/MeasurementUpdate' */
  P_EnabledSubsystem_final_proj_T EnabledSubsystem;/* '<S40>/Enabled Subsystem' */
  P_MeasurementUpdate_final_pro_T MeasurementUpdate;/* '<S33>/MeasurementUpdate' */
};

/* Real-time Model Data Structure */
struct tag_RTM_final_project_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_final_project_T final_project_P;

/* Block signals (default storage) */
extern B_final_project_T final_project_B;

/* Block states (default storage) */
extern DW_final_project_T final_project_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_final_project_T final_project_Y;

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
extern void final_project_initialize(void);
extern void final_project_step(void);
extern void final_project_terminate(void);

/* Real-time Model object */
extern RT_MODEL_final_project_T *const final_project_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S56>/Data Type Duplicate' : Unused code path elimination
 * Block '<S57>/Data Type Duplicate' : Unused code path elimination
 * Block '<S58>/Conversion' : Unused code path elimination
 * Block '<S58>/Data Type Duplicate' : Unused code path elimination
 * Block '<S59>/Data Type Duplicate' : Unused code path elimination
 * Block '<S16>/Data Type Duplicate' : Unused code path elimination
 * Block '<S17>/Data Type Duplicate' : Unused code path elimination
 * Block '<S18>/Data Type Duplicate' : Unused code path elimination
 * Block '<S19>/Data Type Duplicate' : Unused code path elimination
 * Block '<S21>/Data Type Duplicate' : Unused code path elimination
 * Block '<S22>/Data Type Duplicate' : Unused code path elimination
 * Block '<S23>/Data Type Duplicate' : Unused code path elimination
 * Block '<S24>/Conversion' : Unused code path elimination
 * Block '<S24>/Data Type Duplicate' : Unused code path elimination
 * Block '<S25>/Data Type Duplicate' : Unused code path elimination
 * Block '<S26>/Data Type Duplicate' : Unused code path elimination
 * Block '<S27>/Data Type Duplicate' : Unused code path elimination
 * Block '<S29>/Data Type Duplicate' : Unused code path elimination
 * Block '<S30>/Data Type Duplicate' : Unused code path elimination
 * Block '<S2>/G' : Unused code path elimination
 * Block '<S2>/H' : Unused code path elimination
 * Block '<S2>/N' : Unused code path elimination
 * Block '<S2>/P0' : Unused code path elimination
 * Block '<S2>/Q' : Unused code path elimination
 * Block '<S2>/R' : Unused code path elimination
 * Block '<S54>/CheckSignalProperties' : Unused code path elimination
 * Block '<S55>/CheckSignalProperties' : Unused code path elimination
 * Block '<S110>/Data Type Duplicate' : Unused code path elimination
 * Block '<S111>/Data Type Duplicate' : Unused code path elimination
 * Block '<S112>/Conversion' : Unused code path elimination
 * Block '<S112>/Data Type Duplicate' : Unused code path elimination
 * Block '<S113>/Data Type Duplicate' : Unused code path elimination
 * Block '<S70>/Data Type Duplicate' : Unused code path elimination
 * Block '<S71>/Data Type Duplicate' : Unused code path elimination
 * Block '<S72>/Data Type Duplicate' : Unused code path elimination
 * Block '<S73>/Data Type Duplicate' : Unused code path elimination
 * Block '<S75>/Data Type Duplicate' : Unused code path elimination
 * Block '<S76>/Data Type Duplicate' : Unused code path elimination
 * Block '<S77>/Data Type Duplicate' : Unused code path elimination
 * Block '<S78>/Conversion' : Unused code path elimination
 * Block '<S78>/Data Type Duplicate' : Unused code path elimination
 * Block '<S79>/Data Type Duplicate' : Unused code path elimination
 * Block '<S80>/Data Type Duplicate' : Unused code path elimination
 * Block '<S81>/Data Type Duplicate' : Unused code path elimination
 * Block '<S83>/Data Type Duplicate' : Unused code path elimination
 * Block '<S84>/Data Type Duplicate' : Unused code path elimination
 * Block '<S3>/G' : Unused code path elimination
 * Block '<S3>/H' : Unused code path elimination
 * Block '<S3>/N' : Unused code path elimination
 * Block '<S3>/P0' : Unused code path elimination
 * Block '<S3>/Q' : Unused code path elimination
 * Block '<S3>/R' : Unused code path elimination
 * Block '<S108>/CheckSignalProperties' : Unused code path elimination
 * Block '<S109>/CheckSignalProperties' : Unused code path elimination
 * Block '<S164>/Data Type Duplicate' : Unused code path elimination
 * Block '<S165>/Data Type Duplicate' : Unused code path elimination
 * Block '<S166>/Conversion' : Unused code path elimination
 * Block '<S166>/Data Type Duplicate' : Unused code path elimination
 * Block '<S167>/Data Type Duplicate' : Unused code path elimination
 * Block '<S124>/Data Type Duplicate' : Unused code path elimination
 * Block '<S125>/Data Type Duplicate' : Unused code path elimination
 * Block '<S126>/Data Type Duplicate' : Unused code path elimination
 * Block '<S127>/Data Type Duplicate' : Unused code path elimination
 * Block '<S129>/Data Type Duplicate' : Unused code path elimination
 * Block '<S130>/Data Type Duplicate' : Unused code path elimination
 * Block '<S131>/Data Type Duplicate' : Unused code path elimination
 * Block '<S132>/Conversion' : Unused code path elimination
 * Block '<S132>/Data Type Duplicate' : Unused code path elimination
 * Block '<S133>/Data Type Duplicate' : Unused code path elimination
 * Block '<S134>/Data Type Duplicate' : Unused code path elimination
 * Block '<S135>/Data Type Duplicate' : Unused code path elimination
 * Block '<S137>/Data Type Duplicate' : Unused code path elimination
 * Block '<S138>/Data Type Duplicate' : Unused code path elimination
 * Block '<S4>/G' : Unused code path elimination
 * Block '<S4>/H' : Unused code path elimination
 * Block '<S4>/N' : Unused code path elimination
 * Block '<S4>/P0' : Unused code path elimination
 * Block '<S4>/Q' : Unused code path elimination
 * Block '<S4>/R' : Unused code path elimination
 * Block '<S162>/CheckSignalProperties' : Unused code path elimination
 * Block '<S163>/CheckSignalProperties' : Unused code path elimination
 * Block '<S1>/Cast To Double' : Eliminate redundant data type conversion
 * Block '<S1>/Cast To Double4' : Eliminate redundant data type conversion
 * Block '<S1>/Cast To Double6' : Eliminate redundant data type conversion
 * Block '<S56>/Conversion' : Eliminate redundant data type conversion
 * Block '<S57>/Conversion' : Eliminate redundant data type conversion
 * Block '<S59>/Conversion' : Eliminate redundant data type conversion
 * Block '<S29>/Conversion' : Eliminate redundant data type conversion
 * Block '<S33>/Reshape' : Reshape block reduction
 * Block '<S2>/ReshapeX0' : Reshape block reduction
 * Block '<S2>/Reshapeu' : Reshape block reduction
 * Block '<S2>/Reshapexhat' : Reshape block reduction
 * Block '<S2>/Reshapey' : Reshape block reduction
 * Block '<S110>/Conversion' : Eliminate redundant data type conversion
 * Block '<S111>/Conversion' : Eliminate redundant data type conversion
 * Block '<S113>/Conversion' : Eliminate redundant data type conversion
 * Block '<S83>/Conversion' : Eliminate redundant data type conversion
 * Block '<S87>/Reshape' : Reshape block reduction
 * Block '<S3>/ReshapeX0' : Reshape block reduction
 * Block '<S3>/Reshapeu' : Reshape block reduction
 * Block '<S3>/Reshapexhat' : Reshape block reduction
 * Block '<S3>/Reshapey' : Reshape block reduction
 * Block '<S164>/Conversion' : Eliminate redundant data type conversion
 * Block '<S165>/Conversion' : Eliminate redundant data type conversion
 * Block '<S167>/Conversion' : Eliminate redundant data type conversion
 * Block '<S137>/Conversion' : Eliminate redundant data type conversion
 * Block '<S141>/Reshape' : Reshape block reduction
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
 * '<Root>' : 'final_project'
 * '<S1>'   : 'final_project/Flight Control System'
 * '<S2>'   : 'final_project/Flight Control System/Kalman Filter, Aileron'
 * '<S3>'   : 'final_project/Flight Control System/Kalman Filter, Elevator'
 * '<S4>'   : 'final_project/Flight Control System/Kalman Filter, Throttle'
 * '<S5>'   : 'final_project/Flight Control System/MATLAB Function'
 * '<S6>'   : 'final_project/Flight Control System/MATLAB Function3'
 * '<S7>'   : 'final_project/Flight Control System/MATLAB Function7'
 * '<S8>'   : 'final_project/Flight Control System/Ramp1'
 * '<S9>'   : 'final_project/Flight Control System/Ramp2'
 * '<S10>'  : 'final_project/Flight Control System/Ramp3'
 * '<S11>'  : 'final_project/Flight Control System/Ramp4'
 * '<S12>'  : 'final_project/Flight Control System/Subsystem'
 * '<S13>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/CalculatePL'
 * '<S14>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/CalculateYhat'
 * '<S15>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/CovarianceOutputConfigurator'
 * '<S16>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionA'
 * '<S17>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionB'
 * '<S18>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionC'
 * '<S19>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionD'
 * '<S20>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionEnable'
 * '<S21>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionG'
 * '<S22>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionH'
 * '<S23>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionN'
 * '<S24>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionP'
 * '<S25>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionP0'
 * '<S26>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionQ'
 * '<S27>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionR'
 * '<S28>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionReset'
 * '<S29>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionX'
 * '<S30>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionX0'
 * '<S31>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionu'
 * '<S32>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/MemoryP'
 * '<S33>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/Observer'
 * '<S34>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/ReducedQRN'
 * '<S35>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/Reset'
 * '<S36>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/Reshapeyhat'
 * '<S37>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/ScalarExpansionP0'
 * '<S38>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/ScalarExpansionQ'
 * '<S39>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/ScalarExpansionR'
 * '<S40>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/UseCurrentEstimator'
 * '<S41>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkA'
 * '<S42>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkB'
 * '<S43>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkC'
 * '<S44>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkD'
 * '<S45>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkEnable'
 * '<S46>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkG'
 * '<S47>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkH'
 * '<S48>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkN'
 * '<S49>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkP0'
 * '<S50>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkQ'
 * '<S51>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkR'
 * '<S52>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkReset'
 * '<S53>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkX0'
 * '<S54>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checku'
 * '<S55>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checky'
 * '<S56>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/CalculatePL/DataTypeConversionL'
 * '<S57>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/CalculatePL/DataTypeConversionM'
 * '<S58>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/CalculatePL/DataTypeConversionP'
 * '<S59>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/CalculatePL/DataTypeConversionZ'
 * '<S60>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/CalculatePL/Ground'
 * '<S61>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/CalculateYhat/Ground'
 * '<S62>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/CovarianceOutputConfigurator/decideOutput'
 * '<S63>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S64>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/Observer/MeasurementUpdate'
 * '<S65>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/ReducedQRN/Ground'
 * '<S66>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/UseCurrentEstimator/Enabled Subsystem'
 * '<S67>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/CalculatePL'
 * '<S68>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/CalculateYhat'
 * '<S69>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/CovarianceOutputConfigurator'
 * '<S70>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionA'
 * '<S71>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionB'
 * '<S72>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionC'
 * '<S73>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionD'
 * '<S74>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionEnable'
 * '<S75>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionG'
 * '<S76>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionH'
 * '<S77>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionN'
 * '<S78>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionP'
 * '<S79>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionP0'
 * '<S80>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionQ'
 * '<S81>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionR'
 * '<S82>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionReset'
 * '<S83>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionX'
 * '<S84>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionX0'
 * '<S85>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionu'
 * '<S86>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/MemoryP'
 * '<S87>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/Observer'
 * '<S88>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/ReducedQRN'
 * '<S89>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/Reset'
 * '<S90>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/Reshapeyhat'
 * '<S91>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/ScalarExpansionP0'
 * '<S92>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/ScalarExpansionQ'
 * '<S93>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/ScalarExpansionR'
 * '<S94>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/UseCurrentEstimator'
 * '<S95>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/checkA'
 * '<S96>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/checkB'
 * '<S97>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/checkC'
 * '<S98>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/checkD'
 * '<S99>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/checkEnable'
 * '<S100>' : 'final_project/Flight Control System/Kalman Filter, Elevator/checkG'
 * '<S101>' : 'final_project/Flight Control System/Kalman Filter, Elevator/checkH'
 * '<S102>' : 'final_project/Flight Control System/Kalman Filter, Elevator/checkN'
 * '<S103>' : 'final_project/Flight Control System/Kalman Filter, Elevator/checkP0'
 * '<S104>' : 'final_project/Flight Control System/Kalman Filter, Elevator/checkQ'
 * '<S105>' : 'final_project/Flight Control System/Kalman Filter, Elevator/checkR'
 * '<S106>' : 'final_project/Flight Control System/Kalman Filter, Elevator/checkReset'
 * '<S107>' : 'final_project/Flight Control System/Kalman Filter, Elevator/checkX0'
 * '<S108>' : 'final_project/Flight Control System/Kalman Filter, Elevator/checku'
 * '<S109>' : 'final_project/Flight Control System/Kalman Filter, Elevator/checky'
 * '<S110>' : 'final_project/Flight Control System/Kalman Filter, Elevator/CalculatePL/DataTypeConversionL'
 * '<S111>' : 'final_project/Flight Control System/Kalman Filter, Elevator/CalculatePL/DataTypeConversionM'
 * '<S112>' : 'final_project/Flight Control System/Kalman Filter, Elevator/CalculatePL/DataTypeConversionP'
 * '<S113>' : 'final_project/Flight Control System/Kalman Filter, Elevator/CalculatePL/DataTypeConversionZ'
 * '<S114>' : 'final_project/Flight Control System/Kalman Filter, Elevator/CalculatePL/Ground'
 * '<S115>' : 'final_project/Flight Control System/Kalman Filter, Elevator/CalculateYhat/Ground'
 * '<S116>' : 'final_project/Flight Control System/Kalman Filter, Elevator/CovarianceOutputConfigurator/decideOutput'
 * '<S117>' : 'final_project/Flight Control System/Kalman Filter, Elevator/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S118>' : 'final_project/Flight Control System/Kalman Filter, Elevator/Observer/MeasurementUpdate'
 * '<S119>' : 'final_project/Flight Control System/Kalman Filter, Elevator/ReducedQRN/Ground'
 * '<S120>' : 'final_project/Flight Control System/Kalman Filter, Elevator/UseCurrentEstimator/Enabled Subsystem'
 * '<S121>' : 'final_project/Flight Control System/Kalman Filter, Throttle/CalculatePL'
 * '<S122>' : 'final_project/Flight Control System/Kalman Filter, Throttle/CalculateYhat'
 * '<S123>' : 'final_project/Flight Control System/Kalman Filter, Throttle/CovarianceOutputConfigurator'
 * '<S124>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionA'
 * '<S125>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionB'
 * '<S126>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionC'
 * '<S127>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionD'
 * '<S128>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionEnable'
 * '<S129>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionG'
 * '<S130>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionH'
 * '<S131>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionN'
 * '<S132>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionP'
 * '<S133>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionP0'
 * '<S134>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionQ'
 * '<S135>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionR'
 * '<S136>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionReset'
 * '<S137>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionX'
 * '<S138>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionX0'
 * '<S139>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionu'
 * '<S140>' : 'final_project/Flight Control System/Kalman Filter, Throttle/MemoryP'
 * '<S141>' : 'final_project/Flight Control System/Kalman Filter, Throttle/Observer'
 * '<S142>' : 'final_project/Flight Control System/Kalman Filter, Throttle/ReducedQRN'
 * '<S143>' : 'final_project/Flight Control System/Kalman Filter, Throttle/Reset'
 * '<S144>' : 'final_project/Flight Control System/Kalman Filter, Throttle/Reshapeyhat'
 * '<S145>' : 'final_project/Flight Control System/Kalman Filter, Throttle/ScalarExpansionP0'
 * '<S146>' : 'final_project/Flight Control System/Kalman Filter, Throttle/ScalarExpansionQ'
 * '<S147>' : 'final_project/Flight Control System/Kalman Filter, Throttle/ScalarExpansionR'
 * '<S148>' : 'final_project/Flight Control System/Kalman Filter, Throttle/UseCurrentEstimator'
 * '<S149>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkA'
 * '<S150>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkB'
 * '<S151>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkC'
 * '<S152>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkD'
 * '<S153>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkEnable'
 * '<S154>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkG'
 * '<S155>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkH'
 * '<S156>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkN'
 * '<S157>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkP0'
 * '<S158>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkQ'
 * '<S159>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkR'
 * '<S160>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkReset'
 * '<S161>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkX0'
 * '<S162>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checku'
 * '<S163>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checky'
 * '<S164>' : 'final_project/Flight Control System/Kalman Filter, Throttle/CalculatePL/DataTypeConversionL'
 * '<S165>' : 'final_project/Flight Control System/Kalman Filter, Throttle/CalculatePL/DataTypeConversionM'
 * '<S166>' : 'final_project/Flight Control System/Kalman Filter, Throttle/CalculatePL/DataTypeConversionP'
 * '<S167>' : 'final_project/Flight Control System/Kalman Filter, Throttle/CalculatePL/DataTypeConversionZ'
 * '<S168>' : 'final_project/Flight Control System/Kalman Filter, Throttle/CalculatePL/Ground'
 * '<S169>' : 'final_project/Flight Control System/Kalman Filter, Throttle/CalculateYhat/Ground'
 * '<S170>' : 'final_project/Flight Control System/Kalman Filter, Throttle/CovarianceOutputConfigurator/decideOutput'
 * '<S171>' : 'final_project/Flight Control System/Kalman Filter, Throttle/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S172>' : 'final_project/Flight Control System/Kalman Filter, Throttle/Observer/MeasurementUpdate'
 * '<S173>' : 'final_project/Flight Control System/Kalman Filter, Throttle/ReducedQRN/Ground'
 * '<S174>' : 'final_project/Flight Control System/Kalman Filter, Throttle/UseCurrentEstimator/Enabled Subsystem'
 */
#endif                                 /* RTW_HEADER_final_project_h_ */
