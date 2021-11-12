/*
 * parrot_main_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "parrot_main".
 *
 * Model version              : 1.3
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Thu Nov 11 20:28:48 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "parrot_main.h"
#include "parrot_main_private.h"

/* Block parameters (default storage) */
P_parrot_main_T parrot_main_P = {
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

  /* Computed Parameter: Saturation1_UpperSat
   * Referenced by: '<S1>/Saturation1'
   */
  500.0F,

  /* Computed Parameter: Saturation1_LowerSat
   * Referenced by: '<S1>/Saturation1'
   */
  0.0F,

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
