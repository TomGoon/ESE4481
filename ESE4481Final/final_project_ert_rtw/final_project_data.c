/*
 * final_project_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "final_project".
 *
 * Model version              : 1.35
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Thu Dec 16 18:18:48 2021
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
  5.7614635063083692E-5,

  /* Variable: F_elevator
   * Referenced by: '<S1>/Gain9'
   */
  -6.4712090107087021E-5,

  /* Variable: F_rudder
   * Referenced by: '<S1>/Gain14'
   */
  0.00087987848045057023,

  /* Variable: F_throttle
   * Referenced by: '<S1>/Gain2'
   */
  -0.41733035658738171,

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
   *   '<S1>/Constant5'
   *   '<S1>/Constant8'
   */
  9.8,

  /* Variable: m
   * Referenced by: '<S1>/Constant5'
   */
  0.068,

  /* Mask Parameter: Ramp3_InitialOutput
   * Referenced by: '<S11>/Constant1'
   */
  0.0,

  /* Mask Parameter: Ramp4_InitialOutput
   * Referenced by: '<S12>/Constant1'
   */
  0.0,

  /* Mask Parameter: Ramp1_InitialOutput
   * Referenced by: '<S9>/Constant1'
   */
  0.0,

  /* Mask Parameter: Ramp2_InitialOutput
   * Referenced by: '<S10>/Constant1'
   */
  0.0,

  /* Mask Parameter: Ramp3_slope
   * Referenced by: '<S11>/Step'
   */
  -0.2,

  /* Mask Parameter: Ramp4_slope
   * Referenced by: '<S12>/Step'
   */
  0.2,

  /* Mask Parameter: Ramp1_slope
   * Referenced by: '<S9>/Step'
   */
  -0.2,

  /* Mask Parameter: Ramp2_slope
   * Referenced by: '<S10>/Step'
   */
  0.2,

  /* Mask Parameter: Ramp3_start
   * Referenced by:
   *   '<S11>/Constant'
   *   '<S11>/Step'
   */
  5.0,

  /* Mask Parameter: Ramp4_start
   * Referenced by:
   *   '<S12>/Constant'
   *   '<S12>/Step'
   */
  10.0,

  /* Mask Parameter: Ramp1_start
   * Referenced by:
   *   '<S9>/Constant'
   *   '<S9>/Step'
   */
  25.0,

  /* Mask Parameter: Ramp2_start
   * Referenced by:
   *   '<S10>/Constant'
   *   '<S10>/Step'
   */
  20.0,

  /* Expression: 0
   * Referenced by: '<S173>/L*(y[k]-yhat[k|k-1])'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S175>/deltax'
   */
  0.0,

  /* Expression: [0; 0; 0; 0]
   * Referenced by: '<S1>/Constant9'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Expression: [m*g; 0; 0; 0]
   * Referenced by: '<S1>/Constant14'
   */
  { 0.6664000000000001, 0.0, 0.0, 0.0 },

  /* Expression: [0; 0; 0; 0]
   * Referenced by: '<S1>/Constant11'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Expression: [0; 0; 0.0035; 0]
   * Referenced by: '<S1>/Constant10'
   */
  { 0.0, 0.0, 0.0035, 0.0 },

  /* Expression: pInitialization.M
   * Referenced by: '<S68>/KalmanGainM'
   */
  { 0.04729237879974818, -0.038222662408278228, -0.009555665602069557,
    0.015040618246882954 },

  /* Expression: pInitialization.C
   * Referenced by: '<S3>/C'
   */
  { 1.0, 0.0, 0.0, 1.0 },

  /* Expression: pInitialization.M
   * Referenced by: '<S14>/KalmanGainM'
   */
  { 0.012093199631291133, 0.004399502353177407, 0.0043995023531774088,
    0.0023030960844769919 },

  /* Expression: pInitialization.C
   * Referenced by: '<S2>/C'
   */
  { 1.0, 0.0, 0.0, 1.0 },

  /* Expression: [0; 0; 0; 0]
   * Referenced by: '<S1>/Constant16'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Expression: pInitialization.X0
   * Referenced by: '<S3>/X0'
   */
  { 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay3'
   */
  0.0,

  /* Expression: pInitialization.X0
   * Referenced by: '<S2>/X0'
   */
  { 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S11>/Step'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S12>/Step'
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

  /* Expression: 0
   * Referenced by: '<S1>/Constant17'
   */
  0.0,

  /* Expression: pInitialization.X0
   * Referenced by: '<S4>/X0'
   */
  { 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay5'
   */
  0.0,

  /* Expression: pInitialization.M
   * Referenced by: '<S122>/KalmanGainM'
   */
  { 0.035603934606229515, 0.13202385626180205 },

  /* Expression: pInitialization.C
   * Referenced by: '<S4>/C'
   */
  { 1.0, 0.0 },

  /* Expression: pInitialization.A
   * Referenced by: '<S2>/A'
   */
  { 0.9895163516515294, 0.0, 0.047652947038502869, 1.0 },

  /* Expression: pInitialization.L
   * Referenced by: '<S14>/KalmanGainL'
   */
  { 0.012176068031580544, 0.004399502353177394, 0.0044631288333366,
    0.0023030960844769911 },

  /* Expression: pInitialization.A
   * Referenced by: '<S3>/A'
   */
  { 0.9895163516515294, 0.0, -0.047652947038502869, 1.0 },

  /* Expression: pInitialization.L
   * Referenced by: '<S68>/KalmanGainL'
   */
  { 0.048618004638261214, -0.038222662408278235, -0.010172217148906938,
    0.015040618246882954 },

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
   * Referenced by: '<S122>/KalmanGainL'
   */
  { 0.036249295439734416, 0.13202385626180421 },

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
   * Referenced by: '<S14>/CovarianceZ'
   */
  { 0.012093199631291133, 0.004399502353177407, 0.0043995023531774079,
    0.0023030960844769919 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S68>/CovarianceZ'
   */
  { 0.00047292378799748187, -0.00038222662408278241, -0.0003822266240827823,
    0.00060162472987531821 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S122>/CovarianceZ'
   */
  { 4.9248000838862833E-5, 0.00018261776558800647, 0.00018261776558800647,
    0.001366725882552944 },

  /* Computed Parameter: Gain6_Gain
   * Referenced by: '<S1>/Gain6'
   */
  0.000337561942F,

  /* Computed Parameter: Gain10_Gain
   * Referenced by: '<S1>/Gain10'
   */
  0.000379145669F,

  /* Computed Parameter: Gain13_Gain
   * Referenced by: '<S1>/Gain13'
   */
  0.00075F,

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

  /* Computed Parameter: Gain7_Gain
   * Referenced by: '<S1>/Gain7'
   */
  -1.74700313E-6F,

  /* Computed Parameter: Gain8_Gain
   * Referenced by: '<S1>/Gain8'
   */
  0.000286204944F,

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
   * Referenced by: '<S63>/isSqrtUsed'
   */
  false,

  /* Expression: pInitialization.isSqrtUsed
   * Referenced by: '<S117>/isSqrtUsed'
   */
  false,

  /* Expression: pInitialization.isSqrtUsed
   * Referenced by: '<S171>/isSqrtUsed'
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

  /* Computed Parameter: ManualSwitch1_CurrentSetting
   * Referenced by: '<S1>/Manual Switch1'
   */
  0U,

  /* Computed Parameter: ManualSwitch4_CurrentSetting
   * Referenced by: '<S1>/Manual Switch4'
   */
  1U,

  /* Computed Parameter: ManualSwitch2_CurrentSetting
   * Referenced by: '<S1>/Manual Switch2'
   */
  1U,

  /* Computed Parameter: ManualSwitch_CurrentSetting
   * Referenced by: '<S1>/Manual Switch'
   */
  1U,

  /* Start of '<S95>/Enabled Subsystem' */
  {
    /* Expression: 0
     * Referenced by: '<S121>/deltax'
     */
    0.0
  }
  ,

  /* End of '<S95>/Enabled Subsystem' */

  /* Start of '<S88>/MeasurementUpdate' */
  {
    /* Expression: 0
     * Referenced by: '<S119>/L*(y[k]-yhat[k|k-1])'
     */
    0.0
  }
  ,

  /* End of '<S88>/MeasurementUpdate' */

  /* Start of '<S41>/Enabled Subsystem' */
  {
    /* Expression: 0
     * Referenced by: '<S67>/deltax'
     */
    0.0
  }
  ,

  /* End of '<S41>/Enabled Subsystem' */

  /* Start of '<S34>/MeasurementUpdate' */
  {
    /* Expression: 0
     * Referenced by: '<S65>/L*(y[k]-yhat[k|k-1])'
     */
    0.0
  }
  /* End of '<S34>/MeasurementUpdate' */
};
