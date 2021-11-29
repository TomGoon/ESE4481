/*
 * main_data.c
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

#include "main.h"
#include "main_private.h"

/* Block parameters (default storage) */
P_main_T main_P = {
  /* Variable: M
   * Referenced by: '<S1>/Gain'
   */
  0.0289644,

  /* Variable: W
   * Referenced by:
   *   '<S1>/Pulse Generator1'
   *   '<S1>/Pulse Generator2'
   *   '<S1>/Pulse Generator3'
   *   '<S1>/Pulse Generator4'
   */
  { 0.6664000000000001, 0.004, 0.004, 0.004 },

  /* Expression: 1600
   * Referenced by: '<S1>/Pulse Generator1'
   */
  1600.0,

  /* Expression: 400
   * Referenced by: '<S1>/Pulse Generator1'
   */
  400.0,

  /* Expression: 0
   * Referenced by: '<S1>/Pulse Generator1'
   */
  0.0,

  /* Expression: 1600
   * Referenced by: '<S1>/Pulse Generator3'
   */
  1600.0,

  /* Expression: 400
   * Referenced by: '<S1>/Pulse Generator3'
   */
  400.0,

  /* Expression: 400
   * Referenced by: '<S1>/Pulse Generator3'
   */
  400.0,

  /* Expression: 1600
   * Referenced by: '<S1>/Pulse Generator4'
   */
  1600.0,

  /* Expression: 400
   * Referenced by: '<S1>/Pulse Generator4'
   */
  400.0,

  /* Expression: 800
   * Referenced by: '<S1>/Pulse Generator4'
   */
  800.0,

  /* Expression: 1600
   * Referenced by: '<S1>/Pulse Generator2'
   */
  1600.0,

  /* Expression: 400
   * Referenced by: '<S1>/Pulse Generator2'
   */
  400.0,

  /* Expression: 1200
   * Referenced by: '<S1>/Pulse Generator2'
   */
  1200.0,

  /* Computed Parameter: Lykyhatkk1_Y0
   * Referenced by: '<S56>/L*(y[k]-yhat[k|k-1])'
   */
  0.0F,

  /* Computed Parameter: deltax_Y0
   * Referenced by: '<S58>/deltax'
   */
  0.0F,

  /* Computed Parameter: Saturation1_UpperSat
   * Referenced by: '<S1>/Saturation1'
   */
  500.0F,

  /* Computed Parameter: Saturation1_LowerSat
   * Referenced by: '<S1>/Saturation1'
   */
  0.0F,

  /* Computed Parameter: A_Value
   * Referenced by: '<S2>/A'
   */
  { 1.0F, 0.0F, 0.00488821371F, 1.0F },

  /* Computed Parameter: X0_Value
   * Referenced by: '<S2>/X0'
   */
  { 0.0F, 0.0F },

  /* Computed Parameter: B_Value
   * Referenced by: '<S2>/B'
   */
  { 0.0F, -0.0735294148F },

  /* Computed Parameter: D_Value
   * Referenced by: '<S2>/D'
   */
  0.0F,

  /* Computed Parameter: C_Value
   * Referenced by: '<S2>/C'
   */
  { 1.0F, 0.0F },

  /* Expression: pInitialization.L
   * Referenced by: '<S5>/KalmanGainL'
   */
  { 0.0602179058F, 0.359342784F },

  /* Expression: pInitialization.M
   * Referenced by: '<S5>/KalmanGainM'
   */
  { 0.058465492F, 0.359474838F },

  /* Expression: pInitialization.Z
   * Referenced by: '<S5>/CovarianceZ'
   */
  { 0.000103017432F, 0.000633402204F, 0.000633402204F, 0.008044824F },

  /* Expression: true()
   * Referenced by: '<S2>/Enable'
   */
  true,

  /* Expression: pInitialization.isSqrtUsed
   * Referenced by: '<S54>/isSqrtUsed'
   */
  false,

  /* Computed Parameter: Constant2_Value
   * Referenced by: '<S1>/Constant2'
   */
  0U,

  /* Computed Parameter: Constant1_Value
   * Referenced by: '<S1>/Constant1'
   */
  1U,

  /* Computed Parameter: ManualSwitch_CurrentSetting
   * Referenced by: '<S1>/Manual Switch'
   */
  1U
};
