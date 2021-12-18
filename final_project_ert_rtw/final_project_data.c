/*
 * final_project_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "final_project".
 *
 * Model version              : 1.38
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Sat Dec 18 10:39:59 2021
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
   *   '<S1>/Constant5'
   *   '<S1>/Constant8'
   *   '<S11>/Step'
   *   '<S16>/Step'
   */
  9.8,

  /* Variable: m
   * Referenced by:
   *   '<S1>/Constant5'
   *   '<S11>/Step'
   *   '<S16>/Step'
   */
  0.068,

  /* Mask Parameter: Ramp3_InitialOutput
   * Referenced by: '<S14>/Constant1'
   */
  0.0,

  /* Mask Parameter: Ramp4_InitialOutput
   * Referenced by: '<S15>/Constant1'
   */
  0.0,

  /* Mask Parameter: Ramp1_InitialOutput
   * Referenced by: '<S12>/Constant1'
   */
  0.0,

  /* Mask Parameter: Ramp2_InitialOutput
   * Referenced by: '<S13>/Constant1'
   */
  0.0,

  /* Mask Parameter: Ramp_InitialOutput
   * Referenced by: '<S11>/Constant1'
   */
  0.0,

  /* Mask Parameter: Ramp5_InitialOutput
   * Referenced by: '<S16>/Constant1'
   */
  0.0,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S2>/Constant'
   */
  15.0,

  /* Mask Parameter: CompareToConstant1_const
   * Referenced by: '<S3>/Constant'
   */
  15.0,

  /* Mask Parameter: Ramp3_slope
   * Referenced by: '<S14>/Step'
   */
  -0.2,

  /* Mask Parameter: Ramp4_slope
   * Referenced by: '<S15>/Step'
   */
  0.2,

  /* Mask Parameter: Ramp1_slope
   * Referenced by: '<S12>/Step'
   */
  -0.2,

  /* Mask Parameter: Ramp2_slope
   * Referenced by: '<S13>/Step'
   */
  0.2,

  /* Mask Parameter: Ramp3_start
   * Referenced by:
   *   '<S14>/Constant'
   *   '<S14>/Step'
   */
  5.0,

  /* Mask Parameter: Ramp4_start
   * Referenced by:
   *   '<S15>/Constant'
   *   '<S15>/Step'
   */
  10.0,

  /* Mask Parameter: Ramp1_start
   * Referenced by:
   *   '<S12>/Constant'
   *   '<S12>/Step'
   */
  30.0,

  /* Mask Parameter: Ramp2_start
   * Referenced by:
   *   '<S13>/Constant'
   *   '<S13>/Step'
   */
  25.0,

  /* Mask Parameter: Ramp_start
   * Referenced by:
   *   '<S11>/Constant'
   *   '<S11>/Step'
   */
  5.0,

  /* Mask Parameter: Ramp5_start
   * Referenced by:
   *   '<S16>/Constant'
   *   '<S16>/Step'
   */
  10.0,

  /* Expression: 0
   * Referenced by: '<S177>/L*(y[k]-yhat[k|k-1])'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S179>/deltax'
   */
  0.0,

  /* Expression: [0; 0; 0; 0]
   * Referenced by: '<S1>/Constant11'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Expression: [0; 0; 0; 0.004]
   * Referenced by: '<S1>/Constant10'
   */
  { 0.0, 0.0, 0.0, 0.004 },

  /* Expression: pInitialization.M
   * Referenced by: '<S72>/KalmanGainM'
   */
  { 0.047292378799748042, -0.038222662408278076, -0.0095556656020695189,
    0.015040618246882919 },

  /* Expression: pInitialization.C
   * Referenced by: '<S5>/C'
   */
  { 1.0, 0.0, 0.0, 1.0 },

  /* Expression: pInitialization.M
   * Referenced by: '<S18>/KalmanGainM'
   */
  { 0.012093199631291138, 0.0043995023531774079, 0.00439950235317741,
    0.0023030960844769915 },

  /* Expression: pInitialization.C
   * Referenced by: '<S4>/C'
   */
  { 1.0, 0.0, 0.0, 1.0 },

  /* Expression: [0; 0; 0; 0]
   * Referenced by: '<S1>/Constant16'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Expression: pInitialization.X0
   * Referenced by: '<S5>/X0'
   */
  { 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay3'
   */
  0.0,

  /* Expression: pInitialization.X0
   * Referenced by: '<S4>/X0'
   */
  { 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S14>/Step'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S15>/Step'
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
   * Referenced by: '<S12>/Step'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S13>/Step'
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

  /* Expression: [0; 0; 0; 0]
   * Referenced by: '<S1>/Constant17'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Expression: pInitialization.X0
   * Referenced by: '<S6>/X0'
   */
  { 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay5'
   */
  0.0,

  /* Expression: pInitialization.M
   * Referenced by: '<S126>/KalmanGainM'
   */
  { 0.02185824607009796, 0.049412437490097237 },

  /* Expression: pInitialization.C
   * Referenced by: '<S6>/C'
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

  /* Expression: 0
   * Referenced by: '<S11>/Step'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S16>/Step'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Constant9'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Constant19'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Constant20'
   */
  0.0,

  /* Expression: [0; 0; 0; 0]
   * Referenced by: '<S1>/Constant14'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Expression: pInitialization.A
   * Referenced by: '<S4>/A'
   */
  { 0.9895163516515294, 0.0, 0.047652947038502869, 1.0 },

  /* Expression: pInitialization.L
   * Referenced by: '<S18>/KalmanGainL'
   */
  { 0.012176068031580552, 0.0043995023531773975, 0.0044631288333366031,
    0.0023030960844769919 },

  /* Expression: pInitialization.A
   * Referenced by: '<S5>/A'
   */
  { 0.9895163516515294, 0.0, -0.047652947038502869, 1.0 },

  /* Expression: pInitialization.L
   * Referenced by: '<S72>/KalmanGainL'
   */
  { 0.048618004638261048, -0.038222662408278027, -0.010172217148906905,
    0.015040618246882917 },

  /* Expression: pInitialization.A
   * Referenced by: '<S6>/A'
   */
  { 1.0, 0.0, 0.00488821378028095, 1.0 },

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay4'
   */
  0.0,

  /* Expression: pInitialization.B
   * Referenced by: '<S6>/B'
   */
  { 1.2220534450702375E-5, 0.005 },

  /* Expression: pInitialization.D
   * Referenced by: '<S6>/D'
   */
  0.0,

  /* Expression: pInitialization.L
   * Referenced by: '<S126>/KalmanGainL'
   */
  { 0.022099784627954311, 0.049412437490095877 },

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay2'
   */
  0.0,

  /* Expression: pInitialization.D
   * Referenced by: '<S5>/D'
   */
  { 0.0, 0.0 },

  /* Expression: pInitialization.B
   * Referenced by: '<S5>/B'
   */
  { -0.00011934162299238203, 0.005 },

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay'
   */
  0.0,

  /* Expression: pInitialization.D
   * Referenced by: '<S4>/D'
   */
  { 0.0, 0.0 },

  /* Expression: pInitialization.B
   * Referenced by: '<S4>/B'
   */
  { 0.00011934162299238203, 0.005 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S18>/CovarianceZ'
   */
  { 0.012093199631291138, 0.0043995023531774079, 0.0043995023531774088,
    0.0023030960844769915 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S72>/CovarianceZ'
   */
  { 0.00047292378799748051, -0.00038222662408278078, -0.00038222662408278078,
    0.0006016247298753168 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S126>/CovarianceZ'
   */
  { 0.00021891955746076639, 0.00049488641100019378, 0.00049488641100019378,
    0.0022498971783312077 },

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

  /* Computed Parameter: Gain12_Gain
   * Referenced by: '<S1>/Gain12'
   */
  -1.0F,

  /* Expression: true()
   * Referenced by: '<S5>/Enable'
   */
  true,

  /* Expression: true()
   * Referenced by: '<S4>/Enable'
   */
  true,

  /* Expression: true()
   * Referenced by: '<S6>/Enable'
   */
  true,

  /* Expression: pInitialization.isSqrtUsed
   * Referenced by: '<S67>/isSqrtUsed'
   */
  false,

  /* Expression: pInitialization.isSqrtUsed
   * Referenced by: '<S121>/isSqrtUsed'
   */
  false,

  /* Expression: pInitialization.isSqrtUsed
   * Referenced by: '<S175>/isSqrtUsed'
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

  /* Computed Parameter: ManualSwitch2_CurrentSetting
   * Referenced by: '<S1>/Manual Switch2'
   */
  1U,

  /* Computed Parameter: ManualSwitch_CurrentSetting
   * Referenced by: '<S1>/Manual Switch'
   */
  1U,

  /* Start of '<S99>/Enabled Subsystem' */
  {
    /* Expression: 0
     * Referenced by: '<S125>/deltax'
     */
    0.0
  }
  ,

  /* End of '<S99>/Enabled Subsystem' */

  /* Start of '<S92>/MeasurementUpdate' */
  {
    /* Expression: 0
     * Referenced by: '<S123>/L*(y[k]-yhat[k|k-1])'
     */
    0.0
  }
  ,

  /* End of '<S92>/MeasurementUpdate' */

  /* Start of '<S45>/Enabled Subsystem' */
  {
    /* Expression: 0
     * Referenced by: '<S71>/deltax'
     */
    0.0
  }
  ,

  /* End of '<S45>/Enabled Subsystem' */

  /* Start of '<S38>/MeasurementUpdate' */
  {
    /* Expression: 0
     * Referenced by: '<S69>/L*(y[k]-yhat[k|k-1])'
     */
    0.0
  }
  /* End of '<S38>/MeasurementUpdate' */
};
