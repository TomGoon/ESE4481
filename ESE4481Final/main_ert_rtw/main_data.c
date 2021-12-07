/*
 * main_data.c
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

#include "main.h"
#include "main_private.h"

/* Block parameters (default storage) */
P_main_T main_P = {
  /* Variable: M
   * Referenced by: '<S1>/Gain'
   */
  { 492234.81092037243, 492234.81092037243, 492234.81092037243,
    492234.81092037243, 1.0335639074443517E+7, -1.0335639074443517E+7,
    -1.0335639074443517E+7, 1.0335639074443517E+7, 1.0335639074443517E+7,
    1.0335639074443517E+7, -1.0335639074443517E+7, -1.0335639074443517E+7,
    -9.4640670625353619E+7, 9.4640670625353619E+7, -9.4640670625353619E+7,
    9.4640670625353619E+7 },

  /* Variable: W
   * Referenced by:
   *   '<S1>/Pulse Generator1'
   *   '<S1>/Pulse Generator2'
   *   '<S1>/Pulse Generator3'
   *   '<S1>/Pulse Generator4'
   */
  { 0.6664000000000001, 0.004, 0.004, 0.004 },

  /* Expression: 0
   * Referenced by: '<S166>/L*(y[k]-yhat[k|k-1])'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S168>/deltax'
   */
  0.0,

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

  /* Expression: pInitialization.M
   * Referenced by: '<S61>/KalmanGainM'
   */
  { 0.020113695651352223, 0.0044769133696415967, 0.0044769133696415959,
    0.0021093711942085885 },

  /* Expression: pInitialization.C
   * Referenced by: '<S3>/C'
   */
  { 1.0, 0.0, 0.0, 1.0 },

  /* Expression: pInitialization.M
   * Referenced by: '<S7>/KalmanGainM'
   */
  { 0.020113695651352223, -0.0044769133696415967, -0.0044769133696415959,
    0.0021093711942085885 },

  /* Expression: pInitialization.C
   * Referenced by: '<S2>/C'
   */
  { 1.0, 0.0, 0.0, 1.0 },

  /* Expression: pInitialization.A
   * Referenced by: '<S2>/A'
   */
  { 1.0, 0.0, -0.047904495046753308, 1.0 },

  /* Expression: pInitialization.L
   * Referenced by: '<S7>/KalmanGainL'
   */
  { 0.020328159925692955, -0.0044769133696416436, -0.0045779617315662826,
    0.0021093711942085903 },

  /* Expression: pInitialization.A
   * Referenced by: '<S3>/A'
   */
  { 1.0, 0.0, 0.047904495046753308, 1.0 },

  /* Expression: pInitialization.L
   * Referenced by: '<S61>/KalmanGainL'
   */
  { 0.020328159925692955, 0.0044769133696416436, 0.0045779617315662826,
    0.0021093711942085903 },

  /* Expression: pInitialization.A
   * Referenced by: '<S4>/A'
   */
  { 1.0, 0.0, 0.00488821378028095, 1.0 },

  /* Expression: 1
   * Referenced by: '<S1>/Constant3'
   */
  1.0,

  /* Expression: pInitialization.X0
   * Referenced by: '<S3>/X0'
   */
  { 0.0, 0.0 },

  /* Expression: pInitialization.B
   * Referenced by: '<S3>/B'
   */
  { 0.00011976123761688326, 0.005 },

  /* Expression: pInitialization.D
   * Referenced by: '<S3>/D'
   */
  { 0.0, 0.0 },

  /* Expression: pInitialization.X0
   * Referenced by: '<S2>/X0'
   */
  { 0.0, 0.0 },

  /* Expression: pInitialization.B
   * Referenced by: '<S2>/B'
   */
  { -0.00011976123761688326, 0.005 },

  /* Expression: pInitialization.D
   * Referenced by: '<S2>/D'
   */
  { 0.0, 0.0 },

  /* Expression: pInitialization.X0
   * Referenced by: '<S4>/X0'
   */
  { 0.0, 0.0 },

  /* Expression: pInitialization.B
   * Referenced by: '<S4>/B'
   */
  { 1.2220534450702375E-5, 0.005 },

  /* Expression: pInitialization.D
   * Referenced by: '<S4>/D'
   */
  0.0,

  /* Expression: pInitialization.C
   * Referenced by: '<S4>/C'
   */
  { 1.0, 0.0 },

  /* Expression: pInitialization.L
   * Referenced by: '<S115>/KalmanGainL'
   */
  { 0.012662769650270243, 0.016298232430642653 },

  /* Expression: pInitialization.M
   * Referenced by: '<S115>/KalmanGainM'
   */
  { 0.012583100405908548, 0.016298232430642632 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S7>/CovarianceZ'
   */
  { 0.020113695651352223, -0.0044769133696415976, -0.0044769133696415967,
    0.0021093711942085881 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S61>/CovarianceZ'
   */
  { 0.020113695651352223, 0.0044769133696415976, 0.0044769133696415967,
    0.0021093711942085881 },

  /* Expression: pInitialization.Z
   * Referenced by: '<S115>/CovarianceZ'
   */
  { 0.0011693572497724581, 0.0015146073413114804, 0.0015146073413114802,
    0.003936043916390161 },

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
   * Referenced by: '<S56>/isSqrtUsed'
   */
  false,

  /* Expression: pInitialization.isSqrtUsed
   * Referenced by: '<S110>/isSqrtUsed'
   */
  false,

  /* Expression: pInitialization.isSqrtUsed
   * Referenced by: '<S164>/isSqrtUsed'
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

  /* Start of '<S88>/Enabled Subsystem' */
  {
    /* Expression: 0
     * Referenced by: '<S114>/deltax'
     */
    0.0
  }
  ,

  /* End of '<S88>/Enabled Subsystem' */

  /* Start of '<S81>/MeasurementUpdate' */
  {
    /* Expression: 0
     * Referenced by: '<S112>/L*(y[k]-yhat[k|k-1])'
     */
    0.0
  }
  ,

  /* End of '<S81>/MeasurementUpdate' */

  /* Start of '<S34>/Enabled Subsystem' */
  {
    /* Expression: 0
     * Referenced by: '<S60>/deltax'
     */
    0.0
  }
  ,

  /* End of '<S34>/Enabled Subsystem' */

  /* Start of '<S27>/MeasurementUpdate' */
  {
    /* Expression: 0
     * Referenced by: '<S58>/L*(y[k]-yhat[k|k-1])'
     */
    0.0
  }
  /* End of '<S27>/MeasurementUpdate' */
};
