/*
 * final_project_data.c
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

#include "final_project.h"
#include "final_project_private.h"

/* Block parameters (default storage) */
P_final_project_T final_project_P = {
  /* Variable: F_aileron
   * Referenced by: '<S1>/Gain5'
   */
  5.7614635063083664E-5,

  /* Variable: F_elevator
   * Referenced by: '<S1>/Gain9'
   */
  -6.47120901070872E-5,

  /* Variable: F_rudder
   * Referenced by: '<S1>/Gain14'
   */
  0.00087987848045057045,

  /* Variable: F_throttle
   * Referenced by: '<S1>/Gain2'
   */
  -0.41733035658738188,

  /* Variable: Kappa
   * Referenced by: '<S1>/Constant3'
   */
  1.0,

  /* Variable: M_inv
   * Referenced by: '<S1>/M_inv'
   */
  { 122864.40165502531, 122864.40165502531, 122864.40165502534,
    122864.40165502534, 2.57982995601103E+6, -2.57982995601103E+6,
    -2.5798299560110308E+6, 2.5798299560110304E+6, 2.5798299560110304E+6,
    2.57982995601103E+6, -2.57982995601103E+6, -2.5798299560110308E+6,
    -2.3660167656338412E+7, 2.3660167656338412E+7, -2.3660167656338412E+7,
    2.3660167656338412E+7 },

  /* Variable: cmd_0
   * Referenced by: '<S1>/Rise and Hover'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Variable: cmd_hover
   * Referenced by: '<S1>/Rise and Hover'
   */
  { -1.0, 0.0, 0.0, 0.0 },

  /* Variable: g
   * Referenced by:
   *   '<S1>/Constant'
   *   '<S1>/Constant5'
   *   '<S1>/Constant8'
   */
  9.8,

  /* Variable: m
   * Referenced by: '<S1>/Constant5'
   */
  0.068,

  /* Variable: orbit_radius
   * Referenced by: '<S1>/Constant11'
   */
  2.0,

  /* Mask Parameter: Ramp1_InitialOutput
   * Referenced by: '<S9>/Constant1'
   */
  0.0,

  /* Mask Parameter: Ramp2_InitialOutput
   * Referenced by: '<S10>/Constant1'
   */
  0.0,

  /* Mask Parameter: Ramp1_slope
   * Referenced by: '<S9>/Step'
   */
  -0.2,

  /* Mask Parameter: Ramp2_slope
   * Referenced by: '<S10>/Step'
   */
  0.2,

  /* Mask Parameter: Ramp1_start
   * Referenced by:
   *   '<S9>/Constant'
   *   '<S9>/Step'
   */
  45.0,

  /* Mask Parameter: Ramp2_start
   * Referenced by:
   *   '<S10>/Constant'
   *   '<S10>/Step'
   */
  40.0,

  /* Expression: 0
   * Referenced by: '<S171>/L*(y[k]-yhat[k|k-1])'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S173>/deltax'
   */
  0.0,

  /* Expression: pInitialization.X0
   * Referenced by: '<S3>/X0'
   */
  { 0.0, 0.0 },

  /* Expression: pInitialization.M
   * Referenced by: '<S66>/KalmanGainM'
   */
  { 0.046824129202381985, -0.033984510393575106, -0.00067969020787150185,
    0.0008507923532510384 },

  /* Expression: pInitialization.C
   * Referenced by: '<S3>/C'
   */
  { 1.0, 0.0, 0.0, 1.0 },

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay3'
   */
  0.0,

  /* Expression: pInitialization.X0
   * Referenced by: '<S2>/X0'
   */
  { 0.0, 0.0 },

  /* Expression: pInitialization.M
   * Referenced by: '<S12>/KalmanGainM'
   */
  { 0.012093199631291138, 0.0043995023531774079, 0.00439950235317741,
    0.0023030960844769915 },

  /* Expression: pInitialization.C
   * Referenced by: '<S2>/C'
   */
  { 1.0, 0.0, 0.0, 1.0 },

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S1>/Rise and Hover'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S9>/Step'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S10>/Step'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Constant4'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Constant6'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Constant7'
   */
  0.0,

  /* Expression: 40
   * Referenced by: '<S1>/Step3'
   */
  40.0,

  /* Expression: 0
   * Referenced by: '<S1>/Step3'
   */
  0.0,

  /* Expression: -1
   * Referenced by: '<S1>/Step3'
   */
  -1.0,

  /* Expression: 6
   * Referenced by: '<S1>/Step2'
   */
  6.0,

  /* Expression: 0
   * Referenced by: '<S1>/Step2'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S1>/Step2'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S1>/Constant13'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Constant12'
   */
  0.0,

  /* Expression: orbit_speed
   * Referenced by: '<S1>/Constant10'
   */
  1.0,

  /* Expression: pInitialization.X0
   * Referenced by: '<S4>/X0'
   */
  { 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay5'
   */
  0.0,

  /* Expression: pInitialization.M
   * Referenced by: '<S120>/KalmanGainM'
   */
  { 0.035603934606230056, 0.13202385626180374 },

  /* Expression: pInitialization.C
   * Referenced by: '<S4>/C'
   */
  { 1.0, 0.0 },

  /* Expression: pInitialization.A
   * Referenced by: '<S2>/A'
   */
  { 0.9895163516515294, 0.0, 0.047652947038502869, 1.0 },

  /* Expression: pInitialization.L
   * Referenced by: '<S12>/KalmanGainL'
   */
  { 0.012176068031580552, 0.0043995023531773975, 0.0044631288333366031,
    0.0023030960844769919 },

  /* Expression: pInitialization.A
   * Referenced by: '<S3>/A'
   */
  { 0.9895163516515294, 0.0, -0.047652947038502869, 1.0 },

  /* Expression: pInitialization.L
   * Referenced by: '<S66>/KalmanGainL'
   */
  { 0.047952703571515327, -0.033984510393575175, -0.00071310733769651218,
    0.0008507923532510397 },

  /* Expression: pInitialization.A
   * Referenced by: '<S4>/A'
   */
  { 1.0, 0.0, 0.00488821378028095, 1.0 },

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay4'
   */
  0.0,

  /* Expression: pInitialization.B
   * Referenced by: '<S4>/B'
   */
  { 1.2220534450702375E-5, 0.005 },

  /* Expression: pInitialization.D
   * Referenced by: '<S4>/D'
   */
  0.0,

  /* Expression: pInitialization.L
   * Referenced by: '<S120>/KalmanGainL'
   */
  { 0.0362492954397347, 0.13202385626179919 },

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay2'
   */
  0.0,

  /* Expression: pInitialization.D
   * Referenced by: '<S3>/D'
   */
  { 0.0, 0.0 },

  /* Expression: pInitialization.B
   * Referenced by: '<S3>/B'
   */
  { -0.00011934162299238203, 0.005 },

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay'
   */
  0.0,

  /* Expression: pInitialization.D
   * Referenced by: '<S2>/D'
   */
  { 0.0, 0.0 },

  /* Expression: pInitialization.B
   * Referenced by: '<S2>/B'
   */
  { 0.00011934162299238203, 0.005 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S12>/CovarianceZ'
   */
  { 0.012093199631291138, 0.0043995023531774079, 0.0043995023531774088,
    0.0023030960844769915 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S66>/CovarianceZ'
   */
  { 0.00093648258404763955, -0.00067969020787150207, -0.000679690207871502,
    0.00085079235325103851 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S120>/CovarianceZ'
   */
  { 4.9248000838863545E-5, 0.0001826177655880087, 0.0001826177655880087,
    0.0013667258825528635 },

  /* Expression: orbit_speed
   * Referenced by: '<S1>/Multiply2'
   */
  1.0F,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<S1>/Gain'
   */
  -0.417330354F,

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<S1>/Gain1'
   */
  -0.34F,

  /* Computed Parameter: Gain3_Gain
   * Referenced by: '<S1>/Gain3'
   */
  1.55539635E-6F,

  /* Computed Parameter: Gain4_Gain
   * Referenced by: '<S1>/Gain4'
   */
  0.000254814717F,

  /* Computed Parameter: Gain6_Gain
   * Referenced by: '<S1>/Gain6'
   */
  0.000337561942F,

  /* Computed Parameter: Gain7_Gain
   * Referenced by: '<S1>/Gain7'
   */
  -1.74700313E-6F,

  /* Computed Parameter: Gain8_Gain
   * Referenced by: '<S1>/Gain8'
   */
  0.000286204944F,

  /* Computed Parameter: Gain10_Gain
   * Referenced by: '<S1>/Gain10'
   */
  0.000379145669F,

  /* Computed Parameter: Gain13_Gain
   * Referenced by: '<S1>/Gain13'
   */
  0.00075F,

  /* Computed Parameter: Saturation1_UpperSat
   * Referenced by: '<S1>/Saturation1'
   */
  500.0F,

  /* Computed Parameter: Saturation1_LowerSat
   * Referenced by: '<S1>/Saturation1'
   */
  0.0F,

  /* Expression: true()
   * Referenced by: '<S3>/Enable'
   */
  true,

  /* Expression: true()
   * Referenced by: '<S2>/Enable'
   */
  true,

  /* Expression: true()
   * Referenced by: '<S4>/Enable'
   */
  true,

  /* Expression: pInitialization.isSqrtUsed
   * Referenced by: '<S61>/isSqrtUsed'
   */
  false,

  /* Expression: pInitialization.isSqrtUsed
   * Referenced by: '<S115>/isSqrtUsed'
   */
  false,

  /* Expression: pInitialization.isSqrtUsed
   * Referenced by: '<S169>/isSqrtUsed'
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
  1U,

  /* Start of '<S93>/Enabled Subsystem' */
  {
    /* Expression: 0
     * Referenced by: '<S119>/deltax'
     */
    0.0
  }
  ,

  /* End of '<S93>/Enabled Subsystem' */

  /* Start of '<S86>/MeasurementUpdate' */
  {
    /* Expression: 0
     * Referenced by: '<S117>/L*(y[k]-yhat[k|k-1])'
     */
    0.0
  }
  ,

  /* End of '<S86>/MeasurementUpdate' */

  /* Start of '<S39>/Enabled Subsystem' */
  {
    /* Expression: 0
     * Referenced by: '<S65>/deltax'
     */
    0.0
  }
  ,

  /* End of '<S39>/Enabled Subsystem' */

  /* Start of '<S32>/MeasurementUpdate' */
  {
    /* Expression: 0
     * Referenced by: '<S63>/L*(y[k]-yhat[k|k-1])'
     */
    0.0
  }
  /* End of '<S32>/MeasurementUpdate' */
};
