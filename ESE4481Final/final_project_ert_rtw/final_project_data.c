/*
 * final_project_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "final_project".
 *
 * Model version              : 1.43
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Sun Dec 19 14:34:30 2021
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

  /* Variable: M
   * Referenced by: '<S1>/Gain11'
   */
  { 491457.60662010126, 491457.60662010126, 491457.60662010126,
    491457.60662010126, 1.0319319824044121E+7, -1.0319319824044121E+7,
    -1.0319319824044121E+7, 1.0319319824044121E+7, 1.0319319824044121E+7,
    1.0319319824044121E+7, -1.0319319824044121E+7, -1.0319319824044121E+7,
    -9.4640670625353649E+7, 9.4640670625353649E+7, -9.4640670625353649E+7,
    9.4640670625353649E+7 },

  /* Variable: g
   * Referenced by:
   *   '<S1>/Constant'
   *   '<S1>/Constant17'
   *   '<S1>/Constant5'
   *   '<S1>/Constant8'
   */
  9.8,

  /* Variable: m
   * Referenced by:
   *   '<S1>/Constant17'
   *   '<S1>/Constant5'
   */
  0.068,

  /* Mask Parameter: Ramp3_InitialOutput
   * Referenced by: '<S12>/Constant1'
   */
  0.0,

  /* Mask Parameter: Ramp4_InitialOutput
   * Referenced by: '<S13>/Constant1'
   */
  0.0,

  /* Mask Parameter: Ramp1_InitialOutput
   * Referenced by: '<S10>/Constant1'
   */
  0.0,

  /* Mask Parameter: Ramp2_InitialOutput
   * Referenced by: '<S11>/Constant1'
   */
  0.0,

  /* Mask Parameter: CompareToConstant2_const
   * Referenced by: '<S2>/Constant'
   */
  1.0,

  /* Mask Parameter: Ramp3_slope
   * Referenced by: '<S12>/Step'
   */
  -0.2,

  /* Mask Parameter: Ramp4_slope
   * Referenced by: '<S13>/Step'
   */
  0.2,

  /* Mask Parameter: Ramp1_slope
   * Referenced by: '<S10>/Step'
   */
  -0.2,

  /* Mask Parameter: Ramp2_slope
   * Referenced by: '<S11>/Step'
   */
  0.2,

  /* Mask Parameter: Ramp3_start
   * Referenced by:
   *   '<S12>/Constant'
   *   '<S12>/Step'
   */
  5.0,

  /* Mask Parameter: Ramp4_start
   * Referenced by:
   *   '<S13>/Constant'
   *   '<S13>/Step'
   */
  10.0,

  /* Mask Parameter: Ramp1_start
   * Referenced by:
   *   '<S10>/Constant'
   *   '<S10>/Step'
   */
  30.0,

  /* Mask Parameter: Ramp2_start
   * Referenced by:
   *   '<S11>/Constant'
   *   '<S11>/Step'
   */
  25.0,

  /* Expression: 0
   * Referenced by: '<S174>/L*(y[k]-yhat[k|k-1])'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S176>/deltax'
   */
  0.0,

  /* Expression: pInitialization.M
   * Referenced by: '<S69>/KalmanGainM'
   */
  { 0.047292378799748042, -0.038222662408278076, -0.0095556656020695189,
    0.015040618246882919 },

  /* Expression: pInitialization.C
   * Referenced by: '<S4>/C'
   */
  { 1.0, 0.0, 0.0, 1.0 },

  /* Expression: pInitialization.M
   * Referenced by: '<S15>/KalmanGainM'
   */
  { 0.012093199631291138, 0.0043995023531774079, 0.00439950235317741,
    0.0023030960844769915 },

  /* Expression: pInitialization.C
   * Referenced by: '<S3>/C'
   */
  { 1.0, 0.0, 0.0, 1.0 },

  /* Expression: [0; 0; 0; 0]
   * Referenced by: '<S1>/Constant16'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Expression: pInitialization.X0
   * Referenced by: '<S4>/X0'
   */
  { 0.0, 0.0 },

  /* Expression: pInitialization.X0
   * Referenced by: '<S3>/X0'
   */
  { 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S12>/Step'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S13>/Step'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Constant12'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Constant13'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Constant15'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S10>/Step'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S11>/Step'
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

  /* Expression: [0;0;0;0]
   * Referenced by: '<S1>/Motor bias'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Expression: pInitialization.X0
   * Referenced by: '<S5>/X0'
   */
  { 0.0, 0.0 },

  /* Expression: pInitialization.M
   * Referenced by: '<S123>/KalmanGainM'
   */
  { 0.02185824607009796, 0.049412437490097237 },

  /* Expression: pInitialization.C
   * Referenced by: '<S5>/C'
   */
  { 1.0, 0.0 },

  /* Expression: 1/200
   * Referenced by: '<S1>/Constant18'
   */
  0.005,

  /* Expression: 0.0
   * Referenced by: '<S1>/Delay'
   */
  0.0,

  /* Expression: pInitialization.A
   * Referenced by: '<S3>/A'
   */
  { 0.9895163516515294, 0.0, 0.047652947038502869, 1.0 },

  /* Expression: pInitialization.L
   * Referenced by: '<S15>/KalmanGainL'
   */
  { 0.012176068031580552, 0.0043995023531773975, 0.0044631288333366031,
    0.0023030960844769919 },

  /* Expression: pInitialization.A
   * Referenced by: '<S4>/A'
   */
  { 0.9895163516515294, 0.0, -0.047652947038502869, 1.0 },

  /* Expression: pInitialization.L
   * Referenced by: '<S69>/KalmanGainL'
   */
  { 0.048618004638261048, -0.038222662408278027, -0.010172217148906905,
    0.015040618246882917 },

  /* Expression: pInitialization.A
   * Referenced by: '<S5>/A'
   */
  { 1.0, 0.0, 0.00488821378028095, 1.0 },

  /* Expression: pInitialization.B
   * Referenced by: '<S5>/B'
   */
  { 1.2220534450702375E-5, 0.005 },

  /* Expression: pInitialization.D
   * Referenced by: '<S5>/D'
   */
  0.0,

  /* Expression: pInitialization.L
   * Referenced by: '<S123>/KalmanGainL'
   */
  { 0.022099784627954311, 0.049412437490095877 },

  /* Expression: pInitialization.D
   * Referenced by: '<S4>/D'
   */
  { 0.0, 0.0 },

  /* Expression: pInitialization.B
   * Referenced by: '<S4>/B'
   */
  { -0.00011934162299238203, 0.005 },

  /* Expression: pInitialization.D
   * Referenced by: '<S3>/D'
   */
  { 0.0, 0.0 },

  /* Expression: pInitialization.B
   * Referenced by: '<S3>/B'
   */
  { 0.00011934162299238203, 0.005 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S15>/CovarianceZ'
   */
  { 0.012093199631291138, 0.0043995023531774079, 0.0043995023531774088,
    0.0023030960844769915 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S69>/CovarianceZ'
   */
  { 0.00047292378799748051, -0.00038222662408278078, -0.00038222662408278078,
    0.0006016247298753168 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S123>/CovarianceZ'
   */
  { 0.00021891955746076639, 0.00049488641100019378, 0.00049488641100019378,
    0.0022498971783312077 },

  /* Computed Parameter: Gain12_Gain
   * Referenced by: '<S1>/Gain12'
   */
  -1.0F,

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
   * Referenced by: '<S4>/Enable'
   */
  true,

  /* Expression: true()
   * Referenced by: '<S3>/Enable'
   */
  true,

  /* Expression: true()
   * Referenced by: '<S5>/Enable'
   */
  true,

  /* Expression: pInitialization.isSqrtUsed
   * Referenced by: '<S64>/isSqrtUsed'
   */
  false,

  /* Expression: pInitialization.isSqrtUsed
   * Referenced by: '<S118>/isSqrtUsed'
   */
  false,

  /* Expression: pInitialization.isSqrtUsed
   * Referenced by: '<S172>/isSqrtUsed'
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

  /* Computed Parameter: ManualSwitch3_CurrentSetting
   * Referenced by: '<S1>/Manual Switch3'
   */
  1U,

  /* Computed Parameter: ManualSwitch_CurrentSetting
   * Referenced by: '<S1>/Manual Switch'
   */
  1U,

  /* Start of '<S96>/Enabled Subsystem' */
  {
    /* Expression: 0
     * Referenced by: '<S122>/deltax'
     */
    0.0
  }
  ,

  /* End of '<S96>/Enabled Subsystem' */

  /* Start of '<S89>/MeasurementUpdate' */
  {
    /* Expression: 0
     * Referenced by: '<S120>/L*(y[k]-yhat[k|k-1])'
     */
    0.0
  }
  ,

  /* End of '<S89>/MeasurementUpdate' */

  /* Start of '<S42>/Enabled Subsystem' */
  {
    /* Expression: 0
     * Referenced by: '<S68>/deltax'
     */
    0.0
  }
  ,

  /* End of '<S42>/Enabled Subsystem' */

  /* Start of '<S35>/MeasurementUpdate' */
  {
    /* Expression: 0
     * Referenced by: '<S66>/L*(y[k]-yhat[k|k-1])'
     */
    0.0
  }
  /* End of '<S35>/MeasurementUpdate' */
};
