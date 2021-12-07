/*
 * main_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "main".
 *
 * Model version              : 1.10
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Thu Dec  2 22:42:29 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_main_private_h_
#define RTW_HEADER_main_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "main.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

extern void main_MeasurementUpdate_Init(B_MeasurementUpdate_main_T *localB,
  P_MeasurementUpdate_main_T *localP);
extern void main_MeasurementUpdate_Start(DW_MeasurementUpdate_main_T *localDW);
extern void main_MeasurementUpdate_Disable(B_MeasurementUpdate_main_T *localB,
  DW_MeasurementUpdate_main_T *localDW, P_MeasurementUpdate_main_T *localP);
extern void main_MeasurementUpdate(boolean_T rtu_Enable, const real_T rtu_Lk[4],
  real_T rtu_yk, real_T rtu_yk_d, const real_T rtu_Ck[4], const real_T
  rtu_xhatkk1[2], const real_T rtu_Dk[2], real_T rtu_uk,
  B_MeasurementUpdate_main_T *localB, DW_MeasurementUpdate_main_T *localDW,
  P_MeasurementUpdate_main_T *localP);
extern void main_EnabledSubsystem_Init(B_EnabledSubsystem_main_T *localB,
  P_EnabledSubsystem_main_T *localP);
extern void main_EnabledSubsystem_Start(DW_EnabledSubsystem_main_T *localDW);
extern void main_EnabledSubsystem_Disable(B_EnabledSubsystem_main_T *localB,
  DW_EnabledSubsystem_main_T *localDW, P_EnabledSubsystem_main_T *localP);
extern void main_EnabledSubsystem(boolean_T rtu_Enable, const real_T rtu_Mk[4],
  const real_T rtu_Ck[4], real_T rtu_yk, real_T rtu_yk_b, const real_T
  rtu_xhatkk1[2], B_EnabledSubsystem_main_T *localB, DW_EnabledSubsystem_main_T *
  localDW, P_EnabledSubsystem_main_T *localP);

#endif                                 /* RTW_HEADER_main_private_h_ */
