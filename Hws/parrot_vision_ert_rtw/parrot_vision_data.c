/*
 * parrot_vision_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "parrot_vision".
 *
 * Model version              : 3.0
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Tue Dec  7 19:12:08 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "parrot_vision.h"
#include "parrot_vision_private.h"

/* Block parameters (default storage) */
P_parrot_vision_T parrot_vision_P = {
  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S4>/Constant'
   */
  50U,

  /* Expression: 200
   * Referenced by: '<S2>/Motor run'
   */
  200.0,

  /* Expression: 0
   * Referenced by: '<S2>/Motor stop'
   */
  0.0,

  /* Expression: 2
   * Referenced by: '<S2>/Constant1'
   */
  2.0,

  /* Expression: 100
   * Referenced by: '<S2>/Threshold'
   */
  100.0,

  /* Expression: 0
   * Referenced by: '<Root>/Rate Transition'
   */
  0.0,

  /* Start of '<Root>/Flight Control System' */
  {
    /* Expression: 0
     * Referenced by: '<S1>/Constant'
     */
    0.0,

    /* Expression: 200
     * Referenced by: '<S1>/Constant3'
     */
    200.0,

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
  }
  /* End of '<Root>/Flight Control System' */
};
