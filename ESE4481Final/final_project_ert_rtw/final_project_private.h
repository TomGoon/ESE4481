/*
 * final_project_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "final_project".
 *
 * Model version              : 1.21
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Tue Dec 14 20:10:11 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_final_project_private_h_
#define RTW_HEADER_final_project_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "final_project.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

extern void final_pr_MeasurementUpdate_Init(B_MeasurementUpdate_final_pro_T
  *localB, P_MeasurementUpdate_final_pro_T *localP);
extern void final_p_MeasurementUpdate_Start(DW_MeasurementUpdate_final_pr_T
  *localDW);
extern void final_MeasurementUpdate_Disable(B_MeasurementUpdate_final_pro_T
  *localB, DW_MeasurementUpdate_final_pr_T *localDW,
  P_MeasurementUpdate_final_pro_T *localP);
extern void final_project_MeasurementUpdate(boolean_T rtu_Enable, const real_T
  rtu_Lk[4], const real_T rtu_yk[2], const real_T rtu_Ck[4], const real_T
  rtu_xhatkk1[2], const real_T rtu_Dk[2], real_T rtu_uk,
  B_MeasurementUpdate_final_pro_T *localB, DW_MeasurementUpdate_final_pr_T
  *localDW, P_MeasurementUpdate_final_pro_T *localP);
extern void final_pro_EnabledSubsystem_Init(B_EnabledSubsystem_final_proj_T
  *localB, P_EnabledSubsystem_final_proj_T *localP);
extern void final_pr_EnabledSubsystem_Start(DW_EnabledSubsystem_final_pro_T
  *localDW);
extern void final__EnabledSubsystem_Disable(B_EnabledSubsystem_final_proj_T
  *localB, DW_EnabledSubsystem_final_pro_T *localDW,
  P_EnabledSubsystem_final_proj_T *localP);
extern void final_project_EnabledSubsystem(boolean_T rtu_Enable, const real_T
  rtu_Mk[4], const real_T rtu_Ck[4], const real_T rtu_yk[2], const real_T
  rtu_xhatkk1[2], B_EnabledSubsystem_final_proj_T *localB,
  DW_EnabledSubsystem_final_pro_T *localDW, P_EnabledSubsystem_final_proj_T
  *localP);

#endif                                 /* RTW_HEADER_final_project_private_h_ */
