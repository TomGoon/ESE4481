/*
 * final_project.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "final_project".
 *
 * Model version              : 1.37
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Thu Dec 16 20:28:33 2021
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

/* Block signals for system '<S38>/MeasurementUpdate' */
typedef struct {
  real_T Product3[2];                  /* '<S69>/Product3' */
} B_MeasurementUpdate_final_pro_T;

/* Block states (default storage) for system '<S38>/MeasurementUpdate' */
typedef struct {
  boolean_T MeasurementUpdate_MODE;    /* '<S38>/MeasurementUpdate' */
} DW_MeasurementUpdate_final_pr_T;

/* Block signals for system '<S45>/Enabled Subsystem' */
typedef struct {
  real_T Product2[2];                  /* '<S71>/Product2' */
} B_EnabledSubsystem_final_proj_T;

/* Block states (default storage) for system '<S45>/Enabled Subsystem' */
typedef struct {
  boolean_T EnabledSubsystem_MODE;     /* '<S45>/Enabled Subsystem' */
} DW_EnabledSubsystem_final_pro_T;

/* Block signals (default storage) */
typedef struct {
  real32_T c[9];
  real32_T rtb_Switch_tmp[9];
  real32_T c_m[9];
  real32_T c_c[9];
  real_T Command[4];                   /* '<S1>/Sum14' */
  real_T ManualSwitch2[4];             /* '<S1>/Manual Switch2' */
  real_T Sum19[4];                     /* '<S1>/Sum19' */
  real_T UnitDelay3[2];                /* '<S1>/Unit Delay3' */
  real_T MemoryX[2];                   /* '<S5>/MemoryX' */
  real_T UnitDelay1[2];                /* '<S1>/Unit Delay1' */
  real_T MemoryX_j[2];                 /* '<S4>/MemoryX' */
  real_T Add[2];                       /* '<S146>/Add' */
  real_T Add_g[2];                     /* '<S92>/Add' */
  real_T Add_l[2];                     /* '<S38>/Add' */
  real32_T fv[3];
  real32_T c_k[3];
  real_T CastToDouble3;                /* '<S1>/Cast To Double3' */
  real_T CastToDouble2;                /* '<S1>/Cast To Double2' */
  real_T Sum10;                        /* '<S1>/Sum10' */
  real_T Sum16;                        /* '<S1>/Sum16' */
  real_T CastToDouble1;                /* '<S1>/Cast To Double1' */
  real_T CastToDouble5;                /* '<S1>/Cast To Double5' */
  real_T CastToDouble7;                /* '<S1>/Cast To Double7' */
  real_T MatrixMultiply1[2];           /* '<S1>/MatrixMultiply1' */
  real_T Product2[2];                  /* '<S179>/Product2' */
  real_T Product3[2];                  /* '<S177>/Product3' */
  real_T Ckxhatkk1;                    /* '<S177>/C[k]*xhat[k|k-1]' */
  real_T rtb_Sqrt1_idx_0;
  real_T rtb_Sqrt1_idx_2;
  real_T rtb_Sqrt1_idx_3;
  real_T t;                            /* '<S1>/Sum21' */
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
  real32_T pressure;
  real32_T opticalFlow_data[3];
  real32_T Gain12;                     /* '<S1>/Gain12' */
  real32_T bias;                       /* '<S1>/MATLAB Function7' */
  real32_T z_p;                        /* '<S1>/MATLAB Function1' */
  real32_T theta_measured;             /* '<S1>/MATLAB Function' */
  real32_T phi_measured;               /* '<S1>/MATLAB Function' */
  boolean_T Compare;                   /* '<S2>/Compare' */
  boolean_T Compare_l;                 /* '<S3>/Compare' */
  B_EnabledSubsystem_final_proj_T EnabledSubsystem_g;/* '<S99>/Enabled Subsystem' */
  B_MeasurementUpdate_final_pro_T MeasurementUpdate_f;/* '<S92>/MeasurementUpdate' */
  B_EnabledSubsystem_final_proj_T EnabledSubsystem;/* '<S45>/Enabled Subsystem' */
  B_MeasurementUpdate_final_pro_T MeasurementUpdate;/* '<S38>/MeasurementUpdate' */
} B_final_project_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T MemoryX_DSTATE[2];            /* '<S5>/MemoryX' */
  real_T UnitDelay3_DSTATE[2];         /* '<S1>/Unit Delay3' */
  real_T MemoryX_DSTATE_n[2];          /* '<S4>/MemoryX' */
  real_T UnitDelay1_DSTATE[2];         /* '<S1>/Unit Delay1' */
  real_T MemoryX_DSTATE_p[2];          /* '<S6>/MemoryX' */
  real_T UnitDelay5_DSTATE;            /* '<S1>/Unit Delay5' */
  real_T Delay_DSTATE;                 /* '<S1>/Delay' */
  real_T UnitDelay4_DSTATE;            /* '<S1>/Unit Delay4' */
  real_T UnitDelay2_DSTATE;            /* '<S1>/Unit Delay2' */
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  struct {
    void *LoggedData;
  } Scope23_PWORK;                     /* '<S1>/Scope23' */

  struct {
    void *LoggedData;
  } Scope24_PWORK;                     /* '<S1>/Scope24' */

  struct {
    void *LoggedData;
  } Scope22_PWORK;                     /* '<S1>/Scope22' */

  struct {
    void *LoggedData;
  } Scope15_PWORK;                     /* '<S1>/Scope15' */

  struct {
    void *LoggedData;
  } Scope26_PWORK;                     /* '<S1>/Scope26' */

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
  } Scope25_PWORK;                     /* '<S1>/Scope25' */

  struct {
    void *LoggedData;
  } Scope12_PWORK;                     /* '<S1>/Scope12' */

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

  boolean_T icLoad;                    /* '<S5>/MemoryX' */
  boolean_T icLoad_k;                  /* '<S4>/MemoryX' */
  boolean_T icLoad_i;                  /* '<S6>/MemoryX' */
  boolean_T EnabledSubsystem_MODE;     /* '<S153>/Enabled Subsystem' */
  boolean_T MeasurementUpdate_MODE;    /* '<S146>/MeasurementUpdate' */
  DW_EnabledSubsystem_final_pro_T EnabledSubsystem_g;/* '<S99>/Enabled Subsystem' */
  DW_MeasurementUpdate_final_pr_T MeasurementUpdate_f;/* '<S92>/MeasurementUpdate' */
  DW_EnabledSubsystem_final_pro_T EnabledSubsystem;/* '<S45>/Enabled Subsystem' */
  DW_MeasurementUpdate_final_pr_T MeasurementUpdate;/* '<S38>/MeasurementUpdate' */
} DW_final_project_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T Motors[4];                  /* '<Root>/Motors' */
  uint8_T Flag;                        /* '<Root>/Flag' */
} ExtY_final_project_T;

/* Parameters for system: '<S38>/MeasurementUpdate' */
struct P_MeasurementUpdate_final_pro_T_ {
  real_T Lykyhatkk1_Y0;                /* Expression: 0
                                        * Referenced by: '<S69>/L*(y[k]-yhat[k|k-1])'
                                        */
};

/* Parameters for system: '<S45>/Enabled Subsystem' */
struct P_EnabledSubsystem_final_proj_T_ {
  real_T deltax_Y0;                    /* Expression: 0
                                        * Referenced by: '<S71>/deltax'
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
  real_T M[16];                        /* Variable: M
                                        * Referenced by: '<S1>/Gain11'
                                        */
  real_T g;                            /* Variable: g
                                        * Referenced by:
                                        *   '<S1>/Constant'
                                        *   '<S1>/Constant5'
                                        *   '<S1>/Constant8'
                                        *   '<S11>/Step'
                                        *   '<S16>/Step'
                                        */
  real_T m;                            /* Variable: m
                                        * Referenced by:
                                        *   '<S1>/Constant5'
                                        *   '<S11>/Step'
                                        *   '<S16>/Step'
                                        */
  real_T Ramp3_InitialOutput;          /* Mask Parameter: Ramp3_InitialOutput
                                        * Referenced by: '<S14>/Constant1'
                                        */
  real_T Ramp4_InitialOutput;          /* Mask Parameter: Ramp4_InitialOutput
                                        * Referenced by: '<S15>/Constant1'
                                        */
  real_T Ramp1_InitialOutput;          /* Mask Parameter: Ramp1_InitialOutput
                                        * Referenced by: '<S12>/Constant1'
                                        */
  real_T Ramp2_InitialOutput;          /* Mask Parameter: Ramp2_InitialOutput
                                        * Referenced by: '<S13>/Constant1'
                                        */
  real_T Ramp_InitialOutput;           /* Mask Parameter: Ramp_InitialOutput
                                        * Referenced by: '<S11>/Constant1'
                                        */
  real_T Ramp5_InitialOutput;          /* Mask Parameter: Ramp5_InitialOutput
                                        * Referenced by: '<S16>/Constant1'
                                        */
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S2>/Constant'
                                       */
  real_T CompareToConstant1_const;   /* Mask Parameter: CompareToConstant1_const
                                      * Referenced by: '<S3>/Constant'
                                      */
  real_T Ramp3_slope;                  /* Mask Parameter: Ramp3_slope
                                        * Referenced by: '<S14>/Step'
                                        */
  real_T Ramp4_slope;                  /* Mask Parameter: Ramp4_slope
                                        * Referenced by: '<S15>/Step'
                                        */
  real_T Ramp1_slope;                  /* Mask Parameter: Ramp1_slope
                                        * Referenced by: '<S12>/Step'
                                        */
  real_T Ramp2_slope;                  /* Mask Parameter: Ramp2_slope
                                        * Referenced by: '<S13>/Step'
                                        */
  real_T Ramp3_start;                  /* Mask Parameter: Ramp3_start
                                        * Referenced by:
                                        *   '<S14>/Constant'
                                        *   '<S14>/Step'
                                        */
  real_T Ramp4_start;                  /* Mask Parameter: Ramp4_start
                                        * Referenced by:
                                        *   '<S15>/Constant'
                                        *   '<S15>/Step'
                                        */
  real_T Ramp1_start;                  /* Mask Parameter: Ramp1_start
                                        * Referenced by:
                                        *   '<S12>/Constant'
                                        *   '<S12>/Step'
                                        */
  real_T Ramp2_start;                  /* Mask Parameter: Ramp2_start
                                        * Referenced by:
                                        *   '<S13>/Constant'
                                        *   '<S13>/Step'
                                        */
  real_T Ramp_start;                   /* Mask Parameter: Ramp_start
                                        * Referenced by:
                                        *   '<S11>/Constant'
                                        *   '<S11>/Step'
                                        */
  real_T Ramp5_start;                  /* Mask Parameter: Ramp5_start
                                        * Referenced by:
                                        *   '<S16>/Constant'
                                        *   '<S16>/Step'
                                        */
  real_T Lykyhatkk1_Y0;                /* Expression: 0
                                        * Referenced by: '<S177>/L*(y[k]-yhat[k|k-1])'
                                        */
  real_T deltax_Y0;                    /* Expression: 0
                                        * Referenced by: '<S179>/deltax'
                                        */
  real_T Constant11_Value[4];          /* Expression: [0; 0; 0; 0]
                                        * Referenced by: '<S1>/Constant11'
                                        */
  real_T Constant10_Value[4];          /* Expression: [0; 0.001; 0.0035; 0]
                                        * Referenced by: '<S1>/Constant10'
                                        */
  real_T KalmanGainM_Value[4];         /* Expression: pInitialization.M
                                        * Referenced by: '<S72>/KalmanGainM'
                                        */
  real_T C_Value[4];                   /* Expression: pInitialization.C
                                        * Referenced by: '<S5>/C'
                                        */
  real_T KalmanGainM_Value_d[4];       /* Expression: pInitialization.M
                                        * Referenced by: '<S18>/KalmanGainM'
                                        */
  real_T C_Value_e[4];                 /* Expression: pInitialization.C
                                        * Referenced by: '<S4>/C'
                                        */
  real_T Constant16_Value[4];          /* Expression: [0; 0; 0; 0]
                                        * Referenced by: '<S1>/Constant16'
                                        */
  real_T X0_Value[2];                  /* Expression: pInitialization.X0
                                        * Referenced by: '<S5>/X0'
                                        */
  real_T UnitDelay3_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay3'
                                        */
  real_T X0_Value_b[2];                /* Expression: pInitialization.X0
                                        * Referenced by: '<S4>/X0'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay1'
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<S14>/Step'
                                        */
  real_T Step_Y0_j;                    /* Expression: 0
                                        * Referenced by: '<S15>/Step'
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
                                        * Referenced by: '<S12>/Step'
                                        */
  real_T Step_Y0_g;                    /* Expression: 0
                                        * Referenced by: '<S13>/Step'
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
  real_T Constant17_Value[4];          /* Expression: [0; 0; 0; 0]
                                        * Referenced by: '<S1>/Constant17'
                                        */
  real_T X0_Value_o[2];                /* Expression: pInitialization.X0
                                        * Referenced by: '<S6>/X0'
                                        */
  real_T UnitDelay5_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay5'
                                        */
  real_T KalmanGainM_Value_do[2];      /* Expression: pInitialization.M
                                        * Referenced by: '<S126>/KalmanGainM'
                                        */
  real_T C_Value_n[2];                 /* Expression: pInitialization.C
                                        * Referenced by: '<S6>/C'
                                        */
  real_T Constant18_Value;             /* Expression: 1/200
                                        * Referenced by: '<S1>/Constant18'
                                        */
  real_T Delay_InitialCondition;       /* Expression: 0.0
                                        * Referenced by: '<S1>/Delay'
                                        */
  real_T Step_Y0_m;                    /* Expression: 0
                                        * Referenced by: '<S11>/Step'
                                        */
  real_T Step_Y0_k;                    /* Expression: 0
                                        * Referenced by: '<S16>/Step'
                                        */
  real_T Constant9_Value;              /* Expression: 0
                                        * Referenced by: '<S1>/Constant9'
                                        */
  real_T Constant19_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/Constant19'
                                        */
  real_T Constant20_Value;             /* Expression: 0
                                        * Referenced by: '<S1>/Constant20'
                                        */
  real_T Constant14_Value[4];          /* Expression: [0; 0; 0; 0]
                                        * Referenced by: '<S1>/Constant14'
                                        */
  real_T A_Value[4];                   /* Expression: pInitialization.A
                                        * Referenced by: '<S4>/A'
                                        */
  real_T KalmanGainL_Value[4];         /* Expression: pInitialization.L
                                        * Referenced by: '<S18>/KalmanGainL'
                                        */
  real_T A_Value_d[4];                 /* Expression: pInitialization.A
                                        * Referenced by: '<S5>/A'
                                        */
  real_T KalmanGainL_Value_b[4];       /* Expression: pInitialization.L
                                        * Referenced by: '<S72>/KalmanGainL'
                                        */
  real_T A_Value_i[4];                 /* Expression: pInitialization.A
                                        * Referenced by: '<S6>/A'
                                        */
  real_T UnitDelay4_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay4'
                                        */
  real_T B_Value[2];                   /* Expression: pInitialization.B
                                        * Referenced by: '<S6>/B'
                                        */
  real_T D_Value;                      /* Expression: pInitialization.D
                                        * Referenced by: '<S6>/D'
                                        */
  real_T KalmanGainL_Value_c[2];       /* Expression: pInitialization.L
                                        * Referenced by: '<S126>/KalmanGainL'
                                        */
  real_T UnitDelay2_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay2'
                                        */
  real_T D_Value_n[2];                 /* Expression: pInitialization.D
                                        * Referenced by: '<S5>/D'
                                        */
  real_T B_Value_g[2];                 /* Expression: pInitialization.B
                                        * Referenced by: '<S5>/B'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay'
                                        */
  real_T D_Value_e[2];                 /* Expression: pInitialization.D
                                        * Referenced by: '<S4>/D'
                                        */
  real_T B_Value_m[2];                 /* Expression: pInitialization.B
                                        * Referenced by: '<S4>/B'
                                        */
  real_T CovarianceZ_Value[4];         /* Expression: pInitialization.Z
                                        * Referenced by: '<S18>/CovarianceZ'
                                        */
  real_T CovarianceZ_Value_a[4];       /* Expression: pInitialization.Z
                                        * Referenced by: '<S72>/CovarianceZ'
                                        */
  real_T CovarianceZ_Value_n[4];       /* Expression: pInitialization.Z
                                        * Referenced by: '<S126>/CovarianceZ'
                                        */
  real32_T Gain6_Gain;                 /* Computed Parameter: Gain6_Gain
                                        * Referenced by: '<S1>/Gain6'
                                        */
  real32_T Gain10_Gain;                /* Computed Parameter: Gain10_Gain
                                        * Referenced by: '<S1>/Gain10'
                                        */
  real32_T Gain13_Gain;                /* Computed Parameter: Gain13_Gain
                                        * Referenced by: '<S1>/Gain13'
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
  real32_T Gain7_Gain;                 /* Computed Parameter: Gain7_Gain
                                        * Referenced by: '<S1>/Gain7'
                                        */
  real32_T Gain8_Gain;                 /* Computed Parameter: Gain8_Gain
                                        * Referenced by: '<S1>/Gain8'
                                        */
  real32_T Saturation1_UpperSat;     /* Computed Parameter: Saturation1_UpperSat
                                      * Referenced by: '<S1>/Saturation1'
                                      */
  real32_T Saturation1_LowerSat;     /* Computed Parameter: Saturation1_LowerSat
                                      * Referenced by: '<S1>/Saturation1'
                                      */
  real32_T Gain12_Gain;                /* Computed Parameter: Gain12_Gain
                                        * Referenced by: '<S1>/Gain12'
                                        */
  boolean_T Enable_Value;              /* Expression: true()
                                        * Referenced by: '<S5>/Enable'
                                        */
  boolean_T Enable_Value_h;            /* Expression: true()
                                        * Referenced by: '<S4>/Enable'
                                        */
  boolean_T Enable_Value_o;            /* Expression: true()
                                        * Referenced by: '<S6>/Enable'
                                        */
  boolean_T isSqrtUsed_Value;          /* Expression: pInitialization.isSqrtUsed
                                        * Referenced by: '<S67>/isSqrtUsed'
                                        */
  boolean_T isSqrtUsed_Value_h;        /* Expression: pInitialization.isSqrtUsed
                                        * Referenced by: '<S121>/isSqrtUsed'
                                        */
  boolean_T isSqrtUsed_Value_e;        /* Expression: pInitialization.isSqrtUsed
                                        * Referenced by: '<S175>/isSqrtUsed'
                                        */
  uint8_T Constant2_Value;             /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S1>/Constant2'
                                        */
  uint8_T Constant1_Value;             /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S1>/Constant1'
                                        */
  uint8_T ManualSwitch3_CurrentSetting;
                             /* Computed Parameter: ManualSwitch3_CurrentSetting
                              * Referenced by: '<S1>/Manual Switch3'
                              */
  uint8_T ManualSwitch2_CurrentSetting;
                             /* Computed Parameter: ManualSwitch2_CurrentSetting
                              * Referenced by: '<S1>/Manual Switch2'
                              */
  uint8_T ManualSwitch_CurrentSetting;
                              /* Computed Parameter: ManualSwitch_CurrentSetting
                               * Referenced by: '<S1>/Manual Switch'
                               */
  P_EnabledSubsystem_final_proj_T EnabledSubsystem_g;/* '<S99>/Enabled Subsystem' */
  P_MeasurementUpdate_final_pro_T MeasurementUpdate_f;/* '<S92>/MeasurementUpdate' */
  P_EnabledSubsystem_final_proj_T EnabledSubsystem;/* '<S45>/Enabled Subsystem' */
  P_MeasurementUpdate_final_pro_T MeasurementUpdate;/* '<S38>/MeasurementUpdate' */
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
 * Block '<S1>/Display' : Unused code path elimination
 * Block '<S1>/Display1' : Unused code path elimination
 * Block '<S61>/Data Type Duplicate' : Unused code path elimination
 * Block '<S62>/Data Type Duplicate' : Unused code path elimination
 * Block '<S63>/Conversion' : Unused code path elimination
 * Block '<S63>/Data Type Duplicate' : Unused code path elimination
 * Block '<S64>/Data Type Duplicate' : Unused code path elimination
 * Block '<S21>/Data Type Duplicate' : Unused code path elimination
 * Block '<S22>/Data Type Duplicate' : Unused code path elimination
 * Block '<S23>/Data Type Duplicate' : Unused code path elimination
 * Block '<S24>/Data Type Duplicate' : Unused code path elimination
 * Block '<S26>/Data Type Duplicate' : Unused code path elimination
 * Block '<S27>/Data Type Duplicate' : Unused code path elimination
 * Block '<S28>/Data Type Duplicate' : Unused code path elimination
 * Block '<S29>/Conversion' : Unused code path elimination
 * Block '<S29>/Data Type Duplicate' : Unused code path elimination
 * Block '<S30>/Data Type Duplicate' : Unused code path elimination
 * Block '<S31>/Data Type Duplicate' : Unused code path elimination
 * Block '<S32>/Data Type Duplicate' : Unused code path elimination
 * Block '<S34>/Data Type Duplicate' : Unused code path elimination
 * Block '<S35>/Data Type Duplicate' : Unused code path elimination
 * Block '<S4>/G' : Unused code path elimination
 * Block '<S4>/H' : Unused code path elimination
 * Block '<S4>/N' : Unused code path elimination
 * Block '<S4>/P0' : Unused code path elimination
 * Block '<S4>/Q' : Unused code path elimination
 * Block '<S4>/R' : Unused code path elimination
 * Block '<S59>/CheckSignalProperties' : Unused code path elimination
 * Block '<S60>/CheckSignalProperties' : Unused code path elimination
 * Block '<S115>/Data Type Duplicate' : Unused code path elimination
 * Block '<S116>/Data Type Duplicate' : Unused code path elimination
 * Block '<S117>/Conversion' : Unused code path elimination
 * Block '<S117>/Data Type Duplicate' : Unused code path elimination
 * Block '<S118>/Data Type Duplicate' : Unused code path elimination
 * Block '<S75>/Data Type Duplicate' : Unused code path elimination
 * Block '<S76>/Data Type Duplicate' : Unused code path elimination
 * Block '<S77>/Data Type Duplicate' : Unused code path elimination
 * Block '<S78>/Data Type Duplicate' : Unused code path elimination
 * Block '<S80>/Data Type Duplicate' : Unused code path elimination
 * Block '<S81>/Data Type Duplicate' : Unused code path elimination
 * Block '<S82>/Data Type Duplicate' : Unused code path elimination
 * Block '<S83>/Conversion' : Unused code path elimination
 * Block '<S83>/Data Type Duplicate' : Unused code path elimination
 * Block '<S84>/Data Type Duplicate' : Unused code path elimination
 * Block '<S85>/Data Type Duplicate' : Unused code path elimination
 * Block '<S86>/Data Type Duplicate' : Unused code path elimination
 * Block '<S88>/Data Type Duplicate' : Unused code path elimination
 * Block '<S89>/Data Type Duplicate' : Unused code path elimination
 * Block '<S5>/G' : Unused code path elimination
 * Block '<S5>/H' : Unused code path elimination
 * Block '<S5>/N' : Unused code path elimination
 * Block '<S5>/P0' : Unused code path elimination
 * Block '<S5>/Q' : Unused code path elimination
 * Block '<S5>/R' : Unused code path elimination
 * Block '<S113>/CheckSignalProperties' : Unused code path elimination
 * Block '<S114>/CheckSignalProperties' : Unused code path elimination
 * Block '<S169>/Data Type Duplicate' : Unused code path elimination
 * Block '<S170>/Data Type Duplicate' : Unused code path elimination
 * Block '<S171>/Conversion' : Unused code path elimination
 * Block '<S171>/Data Type Duplicate' : Unused code path elimination
 * Block '<S172>/Data Type Duplicate' : Unused code path elimination
 * Block '<S129>/Data Type Duplicate' : Unused code path elimination
 * Block '<S130>/Data Type Duplicate' : Unused code path elimination
 * Block '<S131>/Data Type Duplicate' : Unused code path elimination
 * Block '<S132>/Data Type Duplicate' : Unused code path elimination
 * Block '<S134>/Data Type Duplicate' : Unused code path elimination
 * Block '<S135>/Data Type Duplicate' : Unused code path elimination
 * Block '<S136>/Data Type Duplicate' : Unused code path elimination
 * Block '<S137>/Conversion' : Unused code path elimination
 * Block '<S137>/Data Type Duplicate' : Unused code path elimination
 * Block '<S138>/Data Type Duplicate' : Unused code path elimination
 * Block '<S139>/Data Type Duplicate' : Unused code path elimination
 * Block '<S140>/Data Type Duplicate' : Unused code path elimination
 * Block '<S142>/Data Type Duplicate' : Unused code path elimination
 * Block '<S143>/Data Type Duplicate' : Unused code path elimination
 * Block '<S6>/G' : Unused code path elimination
 * Block '<S6>/H' : Unused code path elimination
 * Block '<S6>/N' : Unused code path elimination
 * Block '<S6>/P0' : Unused code path elimination
 * Block '<S6>/Q' : Unused code path elimination
 * Block '<S6>/R' : Unused code path elimination
 * Block '<S167>/CheckSignalProperties' : Unused code path elimination
 * Block '<S168>/CheckSignalProperties' : Unused code path elimination
 * Block '<S1>/Cast To Double' : Eliminate redundant data type conversion
 * Block '<S1>/Cast To Double4' : Eliminate redundant data type conversion
 * Block '<S1>/Cast To Double6' : Eliminate redundant data type conversion
 * Block '<S61>/Conversion' : Eliminate redundant data type conversion
 * Block '<S62>/Conversion' : Eliminate redundant data type conversion
 * Block '<S64>/Conversion' : Eliminate redundant data type conversion
 * Block '<S34>/Conversion' : Eliminate redundant data type conversion
 * Block '<S38>/Reshape' : Reshape block reduction
 * Block '<S4>/ReshapeX0' : Reshape block reduction
 * Block '<S4>/Reshapeu' : Reshape block reduction
 * Block '<S4>/Reshapexhat' : Reshape block reduction
 * Block '<S4>/Reshapey' : Reshape block reduction
 * Block '<S115>/Conversion' : Eliminate redundant data type conversion
 * Block '<S116>/Conversion' : Eliminate redundant data type conversion
 * Block '<S118>/Conversion' : Eliminate redundant data type conversion
 * Block '<S88>/Conversion' : Eliminate redundant data type conversion
 * Block '<S92>/Reshape' : Reshape block reduction
 * Block '<S5>/ReshapeX0' : Reshape block reduction
 * Block '<S5>/Reshapeu' : Reshape block reduction
 * Block '<S5>/Reshapexhat' : Reshape block reduction
 * Block '<S5>/Reshapey' : Reshape block reduction
 * Block '<S169>/Conversion' : Eliminate redundant data type conversion
 * Block '<S170>/Conversion' : Eliminate redundant data type conversion
 * Block '<S172>/Conversion' : Eliminate redundant data type conversion
 * Block '<S142>/Conversion' : Eliminate redundant data type conversion
 * Block '<S146>/Reshape' : Reshape block reduction
 * Block '<S6>/ReshapeX0' : Reshape block reduction
 * Block '<S6>/Reshapeu' : Reshape block reduction
 * Block '<S6>/Reshapexhat' : Reshape block reduction
 * Block '<S6>/Reshapey' : Reshape block reduction
 * Block '<S1>/Rate Transition' : Eliminated since input and output rates are identical
 * Block '<S1>/Rate Transition1' : Eliminated since input and output rates are identical
 * Block '<S1>/Rate Transition2' : Eliminated since input and output rates are identical
 * Block '<S1>/Rate Transition3' : Eliminated since input and output rates are identical
 * Block '<S1>/Rate Transition4' : Eliminated since input and output rates are identical
 * Block '<S1>/Rate Transition5' : Eliminated since input and output rates are identical
 * Block '<S1>/Reshape1' : Reshape block reduction
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
 * '<S2>'   : 'final_project/Flight Control System/Compare To Constant'
 * '<S3>'   : 'final_project/Flight Control System/Compare To Constant1'
 * '<S4>'   : 'final_project/Flight Control System/Kalman Filter, Aileron'
 * '<S5>'   : 'final_project/Flight Control System/Kalman Filter, Elevator'
 * '<S6>'   : 'final_project/Flight Control System/Kalman Filter, Throttle'
 * '<S7>'   : 'final_project/Flight Control System/MATLAB Function'
 * '<S8>'   : 'final_project/Flight Control System/MATLAB Function1'
 * '<S9>'   : 'final_project/Flight Control System/MATLAB Function3'
 * '<S10>'  : 'final_project/Flight Control System/MATLAB Function7'
 * '<S11>'  : 'final_project/Flight Control System/Ramp'
 * '<S12>'  : 'final_project/Flight Control System/Ramp1'
 * '<S13>'  : 'final_project/Flight Control System/Ramp2'
 * '<S14>'  : 'final_project/Flight Control System/Ramp3'
 * '<S15>'  : 'final_project/Flight Control System/Ramp4'
 * '<S16>'  : 'final_project/Flight Control System/Ramp5'
 * '<S17>'  : 'final_project/Flight Control System/Subsystem'
 * '<S18>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/CalculatePL'
 * '<S19>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/CalculateYhat'
 * '<S20>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/CovarianceOutputConfigurator'
 * '<S21>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionA'
 * '<S22>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionB'
 * '<S23>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionC'
 * '<S24>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionD'
 * '<S25>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionEnable'
 * '<S26>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionG'
 * '<S27>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionH'
 * '<S28>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionN'
 * '<S29>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionP'
 * '<S30>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionP0'
 * '<S31>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionQ'
 * '<S32>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionR'
 * '<S33>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionReset'
 * '<S34>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionX'
 * '<S35>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionX0'
 * '<S36>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/DataTypeConversionu'
 * '<S37>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/MemoryP'
 * '<S38>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/Observer'
 * '<S39>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/ReducedQRN'
 * '<S40>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/Reset'
 * '<S41>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/Reshapeyhat'
 * '<S42>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/ScalarExpansionP0'
 * '<S43>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/ScalarExpansionQ'
 * '<S44>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/ScalarExpansionR'
 * '<S45>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/UseCurrentEstimator'
 * '<S46>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkA'
 * '<S47>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkB'
 * '<S48>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkC'
 * '<S49>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkD'
 * '<S50>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkEnable'
 * '<S51>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkG'
 * '<S52>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkH'
 * '<S53>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkN'
 * '<S54>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkP0'
 * '<S55>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkQ'
 * '<S56>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkR'
 * '<S57>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkReset'
 * '<S58>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checkX0'
 * '<S59>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checku'
 * '<S60>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/checky'
 * '<S61>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/CalculatePL/DataTypeConversionL'
 * '<S62>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/CalculatePL/DataTypeConversionM'
 * '<S63>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/CalculatePL/DataTypeConversionP'
 * '<S64>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/CalculatePL/DataTypeConversionZ'
 * '<S65>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/CalculatePL/Ground'
 * '<S66>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/CalculateYhat/Ground'
 * '<S67>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/CovarianceOutputConfigurator/decideOutput'
 * '<S68>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S69>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/Observer/MeasurementUpdate'
 * '<S70>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/ReducedQRN/Ground'
 * '<S71>'  : 'final_project/Flight Control System/Kalman Filter, Aileron/UseCurrentEstimator/Enabled Subsystem'
 * '<S72>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/CalculatePL'
 * '<S73>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/CalculateYhat'
 * '<S74>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/CovarianceOutputConfigurator'
 * '<S75>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionA'
 * '<S76>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionB'
 * '<S77>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionC'
 * '<S78>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionD'
 * '<S79>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionEnable'
 * '<S80>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionG'
 * '<S81>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionH'
 * '<S82>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionN'
 * '<S83>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionP'
 * '<S84>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionP0'
 * '<S85>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionQ'
 * '<S86>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionR'
 * '<S87>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionReset'
 * '<S88>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionX'
 * '<S89>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionX0'
 * '<S90>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/DataTypeConversionu'
 * '<S91>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/MemoryP'
 * '<S92>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/Observer'
 * '<S93>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/ReducedQRN'
 * '<S94>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/Reset'
 * '<S95>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/Reshapeyhat'
 * '<S96>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/ScalarExpansionP0'
 * '<S97>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/ScalarExpansionQ'
 * '<S98>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/ScalarExpansionR'
 * '<S99>'  : 'final_project/Flight Control System/Kalman Filter, Elevator/UseCurrentEstimator'
 * '<S100>' : 'final_project/Flight Control System/Kalman Filter, Elevator/checkA'
 * '<S101>' : 'final_project/Flight Control System/Kalman Filter, Elevator/checkB'
 * '<S102>' : 'final_project/Flight Control System/Kalman Filter, Elevator/checkC'
 * '<S103>' : 'final_project/Flight Control System/Kalman Filter, Elevator/checkD'
 * '<S104>' : 'final_project/Flight Control System/Kalman Filter, Elevator/checkEnable'
 * '<S105>' : 'final_project/Flight Control System/Kalman Filter, Elevator/checkG'
 * '<S106>' : 'final_project/Flight Control System/Kalman Filter, Elevator/checkH'
 * '<S107>' : 'final_project/Flight Control System/Kalman Filter, Elevator/checkN'
 * '<S108>' : 'final_project/Flight Control System/Kalman Filter, Elevator/checkP0'
 * '<S109>' : 'final_project/Flight Control System/Kalman Filter, Elevator/checkQ'
 * '<S110>' : 'final_project/Flight Control System/Kalman Filter, Elevator/checkR'
 * '<S111>' : 'final_project/Flight Control System/Kalman Filter, Elevator/checkReset'
 * '<S112>' : 'final_project/Flight Control System/Kalman Filter, Elevator/checkX0'
 * '<S113>' : 'final_project/Flight Control System/Kalman Filter, Elevator/checku'
 * '<S114>' : 'final_project/Flight Control System/Kalman Filter, Elevator/checky'
 * '<S115>' : 'final_project/Flight Control System/Kalman Filter, Elevator/CalculatePL/DataTypeConversionL'
 * '<S116>' : 'final_project/Flight Control System/Kalman Filter, Elevator/CalculatePL/DataTypeConversionM'
 * '<S117>' : 'final_project/Flight Control System/Kalman Filter, Elevator/CalculatePL/DataTypeConversionP'
 * '<S118>' : 'final_project/Flight Control System/Kalman Filter, Elevator/CalculatePL/DataTypeConversionZ'
 * '<S119>' : 'final_project/Flight Control System/Kalman Filter, Elevator/CalculatePL/Ground'
 * '<S120>' : 'final_project/Flight Control System/Kalman Filter, Elevator/CalculateYhat/Ground'
 * '<S121>' : 'final_project/Flight Control System/Kalman Filter, Elevator/CovarianceOutputConfigurator/decideOutput'
 * '<S122>' : 'final_project/Flight Control System/Kalman Filter, Elevator/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S123>' : 'final_project/Flight Control System/Kalman Filter, Elevator/Observer/MeasurementUpdate'
 * '<S124>' : 'final_project/Flight Control System/Kalman Filter, Elevator/ReducedQRN/Ground'
 * '<S125>' : 'final_project/Flight Control System/Kalman Filter, Elevator/UseCurrentEstimator/Enabled Subsystem'
 * '<S126>' : 'final_project/Flight Control System/Kalman Filter, Throttle/CalculatePL'
 * '<S127>' : 'final_project/Flight Control System/Kalman Filter, Throttle/CalculateYhat'
 * '<S128>' : 'final_project/Flight Control System/Kalman Filter, Throttle/CovarianceOutputConfigurator'
 * '<S129>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionA'
 * '<S130>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionB'
 * '<S131>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionC'
 * '<S132>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionD'
 * '<S133>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionEnable'
 * '<S134>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionG'
 * '<S135>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionH'
 * '<S136>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionN'
 * '<S137>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionP'
 * '<S138>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionP0'
 * '<S139>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionQ'
 * '<S140>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionR'
 * '<S141>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionReset'
 * '<S142>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionX'
 * '<S143>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionX0'
 * '<S144>' : 'final_project/Flight Control System/Kalman Filter, Throttle/DataTypeConversionu'
 * '<S145>' : 'final_project/Flight Control System/Kalman Filter, Throttle/MemoryP'
 * '<S146>' : 'final_project/Flight Control System/Kalman Filter, Throttle/Observer'
 * '<S147>' : 'final_project/Flight Control System/Kalman Filter, Throttle/ReducedQRN'
 * '<S148>' : 'final_project/Flight Control System/Kalman Filter, Throttle/Reset'
 * '<S149>' : 'final_project/Flight Control System/Kalman Filter, Throttle/Reshapeyhat'
 * '<S150>' : 'final_project/Flight Control System/Kalman Filter, Throttle/ScalarExpansionP0'
 * '<S151>' : 'final_project/Flight Control System/Kalman Filter, Throttle/ScalarExpansionQ'
 * '<S152>' : 'final_project/Flight Control System/Kalman Filter, Throttle/ScalarExpansionR'
 * '<S153>' : 'final_project/Flight Control System/Kalman Filter, Throttle/UseCurrentEstimator'
 * '<S154>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkA'
 * '<S155>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkB'
 * '<S156>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkC'
 * '<S157>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkD'
 * '<S158>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkEnable'
 * '<S159>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkG'
 * '<S160>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkH'
 * '<S161>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkN'
 * '<S162>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkP0'
 * '<S163>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkQ'
 * '<S164>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkR'
 * '<S165>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkReset'
 * '<S166>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checkX0'
 * '<S167>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checku'
 * '<S168>' : 'final_project/Flight Control System/Kalman Filter, Throttle/checky'
 * '<S169>' : 'final_project/Flight Control System/Kalman Filter, Throttle/CalculatePL/DataTypeConversionL'
 * '<S170>' : 'final_project/Flight Control System/Kalman Filter, Throttle/CalculatePL/DataTypeConversionM'
 * '<S171>' : 'final_project/Flight Control System/Kalman Filter, Throttle/CalculatePL/DataTypeConversionP'
 * '<S172>' : 'final_project/Flight Control System/Kalman Filter, Throttle/CalculatePL/DataTypeConversionZ'
 * '<S173>' : 'final_project/Flight Control System/Kalman Filter, Throttle/CalculatePL/Ground'
 * '<S174>' : 'final_project/Flight Control System/Kalman Filter, Throttle/CalculateYhat/Ground'
 * '<S175>' : 'final_project/Flight Control System/Kalman Filter, Throttle/CovarianceOutputConfigurator/decideOutput'
 * '<S176>' : 'final_project/Flight Control System/Kalman Filter, Throttle/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S177>' : 'final_project/Flight Control System/Kalman Filter, Throttle/Observer/MeasurementUpdate'
 * '<S178>' : 'final_project/Flight Control System/Kalman Filter, Throttle/ReducedQRN/Ground'
 * '<S179>' : 'final_project/Flight Control System/Kalman Filter, Throttle/UseCurrentEstimator/Enabled Subsystem'
 */
#endif                                 /* RTW_HEADER_final_project_h_ */
