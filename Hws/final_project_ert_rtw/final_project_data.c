/*
 * final_project_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "final_project".
 *
 * Model version              : 1.42
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Sat Dec 18 15:48:33 2021
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

  /* Mask Parameter: CompareToConstant2_const
   * Referenced by: '<S3>/Constant'
   */
  4.0,

  /* Mask Parameter: CompareToConstant1_const
   * Referenced by: '<S2>/Constant'
   */
  2.0,

  /* Mask Parameter: CompareToConstant3_const
   * Referenced by: '<S4>/Constant'
   */
  4.0,

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

  /* Expression: 0
   * Referenced by: '<S176>/L*(y[k]-yhat[k|k-1])'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S178>/deltax'
   */
  0.0,

  /* Expression: [0; 0; 0; 0]
   * Referenced by: '<S1>/Constant21'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Expression: [10; 5; 0; 5]
   * Referenced by: '<S1>/Constant9'
   */
  { 10.0, 5.0, 0.0, 5.0 },

  /* Expression: [15; 10; 0; 10]
   * Referenced by: '<S1>/Motor bias'
   */
  { 15.0, 10.0, 0.0, 10.0 },

  /* Expression: pInitialization.M
   * Referenced by: '<S71>/KalmanGainM'
   */
  { 0.0032492966632162207, -0.0012041124634958617, -0.030102811587396531,
    0.023932896837283557 },

  /* Expression: pInitialization.C
   * Referenced by: '<S6>/C'
   */
  { 1.0, 0.0, 0.0, 1.0 },

  /* Expression: pInitialization.M
   * Referenced by: '<S17>/KalmanGainM'
   */
  { 0.0032492966632163226, 0.0012041124634958442, 0.030102811587396108,
    0.023932896837283391 },

  /* Expression: pInitialization.C
   * Referenced by: '<S5>/C'
   */
  { 1.0, 0.0, 0.0, 1.0 },

  /* Expression: [0; 0; 0; 0]
   * Referenced by: '<S1>/Constant16'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Expression: pInitialization.X0
   * Referenced by: '<S6>/X0'
   */
  { 0.0, 0.0 },

  /* Expression: pInitialization.X0
   * Referenced by: '<S5>/X0'
   */
  { 0.0, 0.0 },

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

  /* Expression: [0;0;0;0]
   * Referenced by: '<S1>/Constant10'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Expression: pInitialization.X0
   * Referenced by: '<S7>/X0'
   */
  { 0.0, 0.0 },

  /* Expression: pInitialization.M
   * Referenced by: '<S125>/KalmanGainM'
   */
  { 0.021858246070097381, 0.049412437490098889 },

  /* Expression: pInitialization.C
   * Referenced by: '<S7>/C'
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
   * Referenced by: '<S5>/A'
   */
  { 0.9895163516515294, 0.0, 0.047652947038502869, 1.0 },

  /* Expression: pInitialization.L
   * Referenced by: '<S17>/KalmanGainL'
   */
  { 0.0032726116870706715, 0.0012041124634958628, 0.030927697361878122,
    0.023932896837283384 },

  /* Expression: pInitialization.A
   * Referenced by: '<S6>/A'
   */
  { 0.9895163516515294, 0.0, -0.047652947038502869, 1.0 },

  /* Expression: pInitialization.L
   * Referenced by: '<S71>/KalmanGainL'
   */
  { 0.0032726116870705727, -0.0012041124634958604, -0.030927697361879131,
    0.023932896837283574 },

  /* Expression: pInitialization.A
   * Referenced by: '<S7>/A'
   */
  { 1.0, 0.0, 0.00488821378028095, 1.0 },

  /* Expression: pInitialization.B
   * Referenced by: '<S7>/B'
   */
  { 1.2220534450702375E-5, 0.005 },

  /* Expression: pInitialization.D
   * Referenced by: '<S7>/D'
   */
  0.0,

  /* Expression: pInitialization.L
   * Referenced by: '<S125>/KalmanGainL'
   */
  { 0.022099784627953756, 0.049412437490098896 },

  /* Expression: pInitialization.D
   * Referenced by: '<S6>/D'
   */
  { 0.0, 0.0 },

  /* Expression: pInitialization.B
   * Referenced by: '<S6>/B'
   */
  { -0.00011934162299238203, 0.005 },

  /* Expression: pInitialization.D
   * Referenced by: '<S5>/D'
   */
  { 0.0, 0.0 },

  /* Expression: pInitialization.B
   * Referenced by: '<S5>/B'
   */
  { 0.00011934162299238203, 0.005 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S17>/CovarianceZ'
   */
  { 0.0032492966632163235, 0.0012041124634958444, 0.0012041124634958444,
    0.0009573158734913355 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S71>/CovarianceZ'
   */
  { 0.0032492966632162194, -0.0012041124634958615, -0.0012041124634958615,
    0.00095731587349134233 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S125>/CovarianceZ'
   */
  { 0.00021891955746076075, 0.00049488641100021069, 0.00049488641100021069,
    0.0022498971783311665 },

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
   * Referenced by: '<S6>/Enable'
   */
  true,

  /* Expression: true()
   * Referenced by: '<S5>/Enable'
   */
  true,

  /* Expression: true()
   * Referenced by: '<S7>/Enable'
   */
  true,

  /* Expression: pInitialization.isSqrtUsed
   * Referenced by: '<S66>/isSqrtUsed'
   */
  false,

  /* Expression: pInitialization.isSqrtUsed
   * Referenced by: '<S120>/isSqrtUsed'
   */
  false,

  /* Expression: pInitialization.isSqrtUsed
   * Referenced by: '<S174>/isSqrtUsed'
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

  /* Computed Parameter: ManualSwitch_CurrentSetting
   * Referenced by: '<S1>/Manual Switch'
   */
  1U,

  /* Start of '<S98>/Enabled Subsystem' */
  {
    /* Expression: 0
     * Referenced by: '<S124>/deltax'
     */
    0.0
  }
  ,

  /* End of '<S98>/Enabled Subsystem' */

  /* Start of '<S91>/MeasurementUpdate' */
  {
    /* Expression: 0
     * Referenced by: '<S122>/L*(y[k]-yhat[k|k-1])'
     */
    0.0
  }
  ,

  /* End of '<S91>/MeasurementUpdate' */

  /* Start of '<S44>/Enabled Subsystem' */
  {
    /* Expression: 0
     * Referenced by: '<S70>/deltax'
     */
    0.0
  }
  ,

  /* End of '<S44>/Enabled Subsystem' */

  /* Start of '<S37>/MeasurementUpdate' */
  {
    /* Expression: 0
     * Referenced by: '<S68>/L*(y[k]-yhat[k|k-1])'
     */
    0.0
  }
  /* End of '<S37>/MeasurementUpdate' */
};
