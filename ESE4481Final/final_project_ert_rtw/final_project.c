/*
 * final_project.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "final_project".
 *
 * Model version              : 1.38
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Sat Dec 18 11:09:16 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "final_project.h"
#include "final_project_private.h"

/* Exported block signals */
CommandBus cmd_inport;                 /* '<Root>/AC cmd' */
SensorsBus sensor_inport;              /* '<Root>/Sensors' */
real32_T motors_outport[4];            /* '<S1>/Saturation1' */
uint8_T flag_outport;                  /* '<S1>/Manual Switch' */

/* Block signals (default storage) */
B_final_project_T final_project_B;

/* Block states (default storage) */
DW_final_project_T final_project_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_final_project_T final_project_Y;

/* Real-time model */
static RT_MODEL_final_project_T final_project_M_;
RT_MODEL_final_project_T *const final_project_M = &final_project_M_;

/*
 * System initialize for enable system:
 *    '<S35>/MeasurementUpdate'
 *    '<S89>/MeasurementUpdate'
 */
void final_pr_MeasurementUpdate_Init(B_MeasurementUpdate_final_pro_T *localB,
  P_MeasurementUpdate_final_pro_T *localP)
{
  /* SystemInitialize for Product: '<S66>/Product3' incorporates:
   *  Outport: '<S66>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3[0] = localP->Lykyhatkk1_Y0;
  localB->Product3[1] = localP->Lykyhatkk1_Y0;
}

/*
 * Disable for enable system:
 *    '<S35>/MeasurementUpdate'
 *    '<S89>/MeasurementUpdate'
 */
void final_MeasurementUpdate_Disable(B_MeasurementUpdate_final_pro_T *localB,
  DW_MeasurementUpdate_final_pr_T *localDW, P_MeasurementUpdate_final_pro_T
  *localP)
{
  /* Disable for Product: '<S66>/Product3' incorporates:
   *  Outport: '<S66>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3[0] = localP->Lykyhatkk1_Y0;
  localB->Product3[1] = localP->Lykyhatkk1_Y0;
  localDW->MeasurementUpdate_MODE = false;
}

/*
 * Start for enable system:
 *    '<S35>/MeasurementUpdate'
 *    '<S89>/MeasurementUpdate'
 */
void final_p_MeasurementUpdate_Start(DW_MeasurementUpdate_final_pr_T *localDW)
{
  localDW->MeasurementUpdate_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S35>/MeasurementUpdate'
 *    '<S89>/MeasurementUpdate'
 */
void final_project_MeasurementUpdate(boolean_T rtu_Enable, const real_T rtu_Lk[4],
  const real_T rtu_yk[2], const real_T rtu_Ck[4], const real_T rtu_xhatkk1[2],
  const real_T rtu_Dk[2], real_T rtu_uk, B_MeasurementUpdate_final_pro_T *localB,
  DW_MeasurementUpdate_final_pr_T *localDW, P_MeasurementUpdate_final_pro_T
  *localP)
{
  real_T rtu_yk_idx_0;
  real_T rtu_yk_idx_1;

  /* Outputs for Enabled SubSystem: '<S35>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S66>/Enable'
   */
  if (rtu_Enable) {
    localDW->MeasurementUpdate_MODE = true;

    /* Sum: '<S66>/Sum' incorporates:
     *  Product: '<S66>/C[k]*xhat[k|k-1]'
     *  Product: '<S66>/D[k]*u[k]'
     *  Sum: '<S66>/Add1'
     */
    rtu_yk_idx_0 = rtu_yk[0] - ((rtu_Ck[0] * rtu_xhatkk1[0] + rtu_xhatkk1[1] *
      rtu_Ck[2]) + rtu_Dk[0] * rtu_uk);
    rtu_yk_idx_1 = rtu_yk[1] - ((rtu_xhatkk1[0] * rtu_Ck[1] + rtu_xhatkk1[1] *
      rtu_Ck[3]) + rtu_Dk[1] * rtu_uk);

    /* Product: '<S66>/Product3' */
    localB->Product3[0] = 0.0;
    localB->Product3[0] += rtu_Lk[0] * rtu_yk_idx_0;
    localB->Product3[0] += rtu_Lk[2] * rtu_yk_idx_1;
    localB->Product3[1] = 0.0;
    localB->Product3[1] += rtu_Lk[1] * rtu_yk_idx_0;
    localB->Product3[1] += rtu_Lk[3] * rtu_yk_idx_1;
  } else if (localDW->MeasurementUpdate_MODE) {
    final_MeasurementUpdate_Disable(localB, localDW, localP);
  }

  /* End of Outputs for SubSystem: '<S35>/MeasurementUpdate' */
}

/*
 * System initialize for enable system:
 *    '<S42>/Enabled Subsystem'
 *    '<S96>/Enabled Subsystem'
 */
void final_pro_EnabledSubsystem_Init(B_EnabledSubsystem_final_proj_T *localB,
  P_EnabledSubsystem_final_proj_T *localP)
{
  /* SystemInitialize for Product: '<S68>/Product2' incorporates:
   *  Outport: '<S68>/deltax'
   */
  localB->Product2[0] = localP->deltax_Y0;
  localB->Product2[1] = localP->deltax_Y0;
}

/*
 * Disable for enable system:
 *    '<S42>/Enabled Subsystem'
 *    '<S96>/Enabled Subsystem'
 */
void final__EnabledSubsystem_Disable(B_EnabledSubsystem_final_proj_T *localB,
  DW_EnabledSubsystem_final_pro_T *localDW, P_EnabledSubsystem_final_proj_T
  *localP)
{
  /* Disable for Product: '<S68>/Product2' incorporates:
   *  Outport: '<S68>/deltax'
   */
  localB->Product2[0] = localP->deltax_Y0;
  localB->Product2[1] = localP->deltax_Y0;
  localDW->EnabledSubsystem_MODE = false;
}

/*
 * Start for enable system:
 *    '<S42>/Enabled Subsystem'
 *    '<S96>/Enabled Subsystem'
 */
void final_pr_EnabledSubsystem_Start(DW_EnabledSubsystem_final_pro_T *localDW)
{
  localDW->EnabledSubsystem_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S42>/Enabled Subsystem'
 *    '<S96>/Enabled Subsystem'
 */
void final_project_EnabledSubsystem(boolean_T rtu_Enable, const real_T rtu_Mk[4],
  const real_T rtu_Ck[4], const real_T rtu_yk[2], const real_T rtu_xhatkk1[2],
  B_EnabledSubsystem_final_proj_T *localB, DW_EnabledSubsystem_final_pro_T
  *localDW, P_EnabledSubsystem_final_proj_T *localP)
{
  real_T rtu_yk_idx_0;
  real_T rtu_yk_idx_1;

  /* Outputs for Enabled SubSystem: '<S42>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S68>/Enable'
   */
  if (rtu_Enable) {
    localDW->EnabledSubsystem_MODE = true;

    /* Sum: '<S68>/Add1' incorporates:
     *  Product: '<S68>/Product'
     */
    rtu_yk_idx_0 = rtu_yk[0] - (rtu_Ck[0] * rtu_xhatkk1[0] + rtu_xhatkk1[1] *
      rtu_Ck[2]);
    rtu_yk_idx_1 = rtu_yk[1] - (rtu_xhatkk1[0] * rtu_Ck[1] + rtu_xhatkk1[1] *
      rtu_Ck[3]);

    /* Product: '<S68>/Product2' */
    localB->Product2[0] = 0.0;
    localB->Product2[0] += rtu_Mk[0] * rtu_yk_idx_0;
    localB->Product2[0] += rtu_Mk[2] * rtu_yk_idx_1;
    localB->Product2[1] = 0.0;
    localB->Product2[1] += rtu_Mk[1] * rtu_yk_idx_0;
    localB->Product2[1] += rtu_Mk[3] * rtu_yk_idx_1;
  } else if (localDW->EnabledSubsystem_MODE) {
    final__EnabledSubsystem_Disable(localB, localDW, localP);
  }

  /* End of Outputs for SubSystem: '<S42>/Enabled Subsystem' */
}

/* Model step function */
void final_project_step(void)
{
  /* local block i/o variables */
  real_T rtb_UnitDelay2;
  real_T rtb_UnitDelay;
  int32_T c_tmp;
  int32_T i;
  int32_T i_0;
  real32_T rtb_TmpSignalConversionAtGain_0;
  real32_T rtb_TmpSignalConversionAtGain_1;
  real32_T rtb_TmpSignalConversionAtGain_2;
  real32_T rtb_TmpSignalConversionAtGain_3;
  static const int8_T b[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  /* Delay: '<S4>/MemoryX' incorporates:
   *  Constant: '<S4>/X0'
   */
  if (final_project_DW.icLoad) {
    final_project_DW.MemoryX_DSTATE[0] = final_project_P.X0_Value[0];
    final_project_DW.MemoryX_DSTATE[1] = final_project_P.X0_Value[1];
  }

  /* Delay: '<S4>/MemoryX' */
  final_project_B.MemoryX[0] = final_project_DW.MemoryX_DSTATE[0];

  /* UnitDelay: '<S1>/Unit Delay3' */
  final_project_B.UnitDelay3[0] = final_project_DW.UnitDelay3_DSTATE[0];

  /* Delay: '<S4>/MemoryX' */
  final_project_B.MemoryX[1] = final_project_DW.MemoryX_DSTATE[1];

  /* UnitDelay: '<S1>/Unit Delay3' */
  final_project_B.UnitDelay3[1] = final_project_DW.UnitDelay3_DSTATE[1];

  /* Outputs for Enabled SubSystem: '<S96>/Enabled Subsystem' */
  /* Constant: '<S4>/Enable' incorporates:
   *  Constant: '<S4>/C'
   *  Constant: '<S69>/KalmanGainM'
   */
  final_project_EnabledSubsystem(final_project_P.Enable_Value,
    final_project_P.KalmanGainM_Value, final_project_P.C_Value,
    final_project_B.UnitDelay3, final_project_B.MemoryX,
    &final_project_B.EnabledSubsystem_g, &final_project_DW.EnabledSubsystem_g,
    &final_project_P.EnabledSubsystem_g);

  /* End of Outputs for SubSystem: '<S96>/Enabled Subsystem' */

  /* DataTypeConversion: '<S1>/Cast To Single1' incorporates:
   *  Sum: '<S96>/Add'
   */
  final_project_B.CastToSingle1[0] = (real32_T)
    (final_project_B.EnabledSubsystem_g.Product2[0] + final_project_B.MemoryX[0]);
  final_project_B.CastToSingle1[1] = (real32_T)
    (final_project_B.EnabledSubsystem_g.Product2[1] + final_project_B.MemoryX[1]);

  /* Delay: '<S3>/MemoryX' incorporates:
   *  Constant: '<S3>/X0'
   */
  if (final_project_DW.icLoad_k) {
    final_project_DW.MemoryX_DSTATE_n[0] = final_project_P.X0_Value_b[0];
    final_project_DW.MemoryX_DSTATE_n[1] = final_project_P.X0_Value_b[1];
  }

  /* Delay: '<S3>/MemoryX' */
  final_project_B.MemoryX_j[0] = final_project_DW.MemoryX_DSTATE_n[0];

  /* UnitDelay: '<S1>/Unit Delay1' */
  final_project_B.UnitDelay1[0] = final_project_DW.UnitDelay1_DSTATE[0];

  /* Delay: '<S3>/MemoryX' */
  final_project_B.MemoryX_j[1] = final_project_DW.MemoryX_DSTATE_n[1];

  /* UnitDelay: '<S1>/Unit Delay1' */
  final_project_B.UnitDelay1[1] = final_project_DW.UnitDelay1_DSTATE[1];

  /* Outputs for Enabled SubSystem: '<S42>/Enabled Subsystem' */
  /* Constant: '<S3>/Enable' incorporates:
   *  Constant: '<S15>/KalmanGainM'
   *  Constant: '<S3>/C'
   */
  final_project_EnabledSubsystem(final_project_P.Enable_Value_h,
    final_project_P.KalmanGainM_Value_d, final_project_P.C_Value_e,
    final_project_B.UnitDelay1, final_project_B.MemoryX_j,
    &final_project_B.EnabledSubsystem, &final_project_DW.EnabledSubsystem,
    &final_project_P.EnabledSubsystem);

  /* End of Outputs for SubSystem: '<S42>/Enabled Subsystem' */

  /* DataTypeConversion: '<S1>/Cast To Single' incorporates:
   *  Sum: '<S42>/Add'
   */
  final_project_B.CastToSingle[0] = (real32_T)
    (final_project_B.EnabledSubsystem.Product2[0] + final_project_B.MemoryX_j[0]);
  final_project_B.CastToSingle[1] = (real32_T)
    (final_project_B.EnabledSubsystem.Product2[1] + final_project_B.MemoryX_j[1]);

  /* ManualSwitch: '<S1>/Manual Switch3' incorporates:
   *  Constant: '<S1>/Constant12'
   *  Constant: '<S1>/Constant13'
   *  Constant: '<S1>/Constant15'
   *  Constant: '<S1>/Constant16'
   *  DataTypeConversion: '<S1>/Cast To Double8'
   *  MATLAB Function: '<S1>/MATLAB Function3'
   */
  if (final_project_P.ManualSwitch3_CurrentSetting == 1) {
    /* MATLAB Function: '<S1>/MATLAB Function3' */
    rtb_TmpSignalConversionAtGain_0 = (real32_T)sin
      (final_project_B.CastToSingle[1]);
    rtb_TmpSignalConversionAtGain_1 = (real32_T)cos
      (final_project_B.CastToSingle[1]);
    rtb_TmpSignalConversionAtGain_2 = (real32_T)sin
      (final_project_B.CastToSingle1[1]);
    rtb_TmpSignalConversionAtGain_3 = (real32_T)cos
      (final_project_B.CastToSingle1[1]);

    /* Clock: '<S12>/Clock' incorporates:
     *  Clock: '<S13>/Clock'
     */
    final_project_B.rtb_TmpSignalConversionAtGain_b = final_project_M->Timing.t
      [0];

    /* MATLAB Function: '<S1>/MATLAB Function3' */
    final_project_B.c[1] = 0.0F;
    final_project_B.c[4] = rtb_TmpSignalConversionAtGain_1;
    final_project_B.c[7] = rtb_TmpSignalConversionAtGain_0;
    final_project_B.c[2] = 0.0F;
    final_project_B.c[5] = -rtb_TmpSignalConversionAtGain_0;
    final_project_B.c[8] = rtb_TmpSignalConversionAtGain_1;
    final_project_B.rtb_TmpSignalConversionAtGain_m[0] =
      rtb_TmpSignalConversionAtGain_3;
    final_project_B.rtb_TmpSignalConversionAtGain_m[3] = 0.0F;
    final_project_B.rtb_TmpSignalConversionAtGain_m[6] =
      -rtb_TmpSignalConversionAtGain_2;
    final_project_B.c[0] = 1.0F;
    final_project_B.rtb_TmpSignalConversionAtGain_m[1] = 0.0F;
    final_project_B.c[3] = 0.0F;
    final_project_B.rtb_TmpSignalConversionAtGain_m[4] = 1.0F;
    final_project_B.c[6] = 0.0F;
    final_project_B.rtb_TmpSignalConversionAtGain_m[7] = 0.0F;
    final_project_B.rtb_TmpSignalConversionAtGain_m[2] =
      rtb_TmpSignalConversionAtGain_2;
    final_project_B.rtb_TmpSignalConversionAtGain_m[5] = 0.0F;
    final_project_B.rtb_TmpSignalConversionAtGain_m[8] =
      rtb_TmpSignalConversionAtGain_3;
    final_project_B.fv[0] = 0.0F;
    final_project_B.fv[1] = 0.0F;

    /* Step: '<S12>/Step' incorporates:
     *  Step: '<S13>/Step'
     */
    final_project_B.Ckxhatkk1 = final_project_M->Timing.t[0];

    /* MATLAB Function: '<S1>/MATLAB Function3' incorporates:
     *  Clock: '<S12>/Clock'
     *  Constant: '<S12>/Constant'
     *  Constant: '<S12>/Constant1'
     *  Constant: '<S13>/Constant'
     *  Constant: '<S13>/Constant1'
     *  Product: '<S12>/Product'
     *  Product: '<S13>/Product'
     *  Step: '<S12>/Step'
     *  Step: '<S13>/Step'
     *  Sum: '<S12>/Output'
     *  Sum: '<S12>/Sum'
     *  Sum: '<S13>/Output'
     *  Sum: '<S13>/Sum'
     *  Sum: '<S1>/Sum20'
     */
    if (final_project_B.Ckxhatkk1 < final_project_P.Ramp3_start) {
      final_project_B.d = final_project_P.Step_Y0;
    } else {
      final_project_B.d = final_project_P.Ramp3_slope;
    }

    if (final_project_B.Ckxhatkk1 < final_project_P.Ramp4_start) {
      final_project_B.Ckxhatkk1 = final_project_P.Step_Y0_j;
    } else {
      final_project_B.Ckxhatkk1 = final_project_P.Ramp4_slope;
    }

    final_project_B.fv[2] = (real32_T)
      (((final_project_B.rtb_TmpSignalConversionAtGain_b -
         final_project_P.Ramp3_start) * final_project_B.d +
        final_project_P.Ramp3_InitialOutput) +
       ((final_project_B.rtb_TmpSignalConversionAtGain_b -
         final_project_P.Ramp4_start) * final_project_B.Ckxhatkk1 +
        final_project_P.Ramp4_InitialOutput));
    for (i_0 = 0; i_0 < 3; i_0++) {
      for (i = 0; i < 3; i++) {
        c_tmp = i_0 + 3 * i;
        final_project_B.c_c[c_tmp] = 0.0F;
        final_project_B.c_c[c_tmp] +=
          final_project_B.rtb_TmpSignalConversionAtGain_m[3 * i] *
          final_project_B.c[i_0];
        final_project_B.c_c[c_tmp] +=
          final_project_B.rtb_TmpSignalConversionAtGain_m[3 * i + 1] *
          final_project_B.c[i_0 + 3];
        final_project_B.c_c[c_tmp] +=
          final_project_B.rtb_TmpSignalConversionAtGain_m[3 * i + 2] *
          final_project_B.c[i_0 + 6];
      }

      final_project_B.c_cx[i_0] = 0.0F;
      for (i = 0; i < 3; i++) {
        c_tmp = i_0 + 3 * i;
        final_project_B.c_k[c_tmp] = 0.0F;
        final_project_B.c_k[c_tmp] += (real32_T)b[3 * i] *
          final_project_B.c_c[i_0];
        final_project_B.c_k[c_tmp] += (real32_T)b[3 * i + 1] *
          final_project_B.c_c[i_0 + 3];
        final_project_B.c_k[c_tmp] += (real32_T)b[3 * i + 2] *
          final_project_B.c_c[i_0 + 6];
        final_project_B.c_cx[i_0] += final_project_B.c_k[c_tmp] *
          final_project_B.fv[i];
      }
    }

    final_project_B.rtb_TmpSignalConversionAtGain_b = final_project_B.c_cx[2];
    final_project_B.rtb_TmpSignalConversionAtGain_p =
      final_project_P.Constant12_Value;
    final_project_B.rtb_TmpSignalConversionAtGain_c =
      final_project_P.Constant13_Value;
    final_project_B.rtb_TmpSignalConversionAtGain_f =
      final_project_P.Constant15_Value;
  } else {
    final_project_B.rtb_TmpSignalConversionAtGain_b =
      final_project_P.Constant16_Value[0];
    final_project_B.rtb_TmpSignalConversionAtGain_p =
      final_project_P.Constant16_Value[1];
    final_project_B.rtb_TmpSignalConversionAtGain_c =
      final_project_P.Constant16_Value[2];
    final_project_B.rtb_TmpSignalConversionAtGain_f =
      final_project_P.Constant16_Value[3];
  }

  /* End of ManualSwitch: '<S1>/Manual Switch3' */

  /* Clock: '<S10>/Clock' incorporates:
   *  Clock: '<S11>/Clock'
   */
  final_project_B.rtb_Product1_tmp = final_project_M->Timing.t[0];

  /* Step: '<S10>/Step' incorporates:
   *  Step: '<S11>/Step'
   */
  final_project_B.Ckxhatkk1 = final_project_M->Timing.t[0];
  if (final_project_B.Ckxhatkk1 < final_project_P.Ramp1_start) {
    final_project_B.d = final_project_P.Step_Y0_d;
  } else {
    final_project_B.d = final_project_P.Ramp1_slope;
  }

  /* End of Step: '<S10>/Step' */

  /* Step: '<S11>/Step' */
  if (final_project_B.Ckxhatkk1 < final_project_P.Ramp2_start) {
    final_project_B.Ckxhatkk1 = final_project_P.Step_Y0_g;
  } else {
    final_project_B.Ckxhatkk1 = final_project_P.Ramp2_slope;
  }

  /* Sum: '<S1>/Sum14' incorporates:
   *  Clock: '<S10>/Clock'
   *  Constant: '<S10>/Constant'
   *  Constant: '<S10>/Constant1'
   *  Constant: '<S11>/Constant'
   *  Constant: '<S11>/Constant1'
   *  Constant: '<S1>/Constant4'
   *  Constant: '<S1>/Constant6'
   *  Constant: '<S1>/Constant7'
   *  Product: '<S10>/Product'
   *  Product: '<S11>/Product'
   *  Sum: '<S10>/Output'
   *  Sum: '<S10>/Sum'
   *  Sum: '<S11>/Output'
   *  Sum: '<S11>/Sum'
   *  Sum: '<S1>/Sum15'
   */
  final_project_B.Command[0] = (((final_project_B.rtb_Product1_tmp -
    final_project_P.Ramp1_start) * final_project_B.d +
    final_project_P.Ramp1_InitialOutput) + ((final_project_B.rtb_Product1_tmp -
    final_project_P.Ramp2_start) * final_project_B.Ckxhatkk1 +
    final_project_P.Ramp2_InitialOutput)) +
    final_project_B.rtb_TmpSignalConversionAtGain_b;
  final_project_B.Command[1] = final_project_B.rtb_TmpSignalConversionAtGain_p +
    final_project_P.Constant4_Value;
  final_project_B.Command[2] = final_project_B.rtb_TmpSignalConversionAtGain_c +
    final_project_P.Constant6_Value;
  final_project_B.Command[3] = final_project_B.rtb_TmpSignalConversionAtGain_f +
    final_project_P.Constant7_Value;

  /* Scope: '<S1>/Scope23' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope23_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real_T up0[4];
      up0[0] = final_project_B.Command[0];
      up0[1] = final_project_B.Command[1];
      up0[2] = final_project_B.Command[2];
      up0[3] = final_project_B.Command[3];
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Delay: '<S5>/MemoryX' incorporates:
   *  Constant: '<S5>/X0'
   */
  if (final_project_DW.icLoad_i) {
    final_project_DW.MemoryX_DSTATE_p[0] = final_project_P.X0_Value_o[0];
    final_project_DW.MemoryX_DSTATE_p[1] = final_project_P.X0_Value_o[1];
  }

  /* Outputs for Enabled SubSystem: '<S150>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S176>/Enable'
   */
  /* Constant: '<S5>/Enable' */
  if (final_project_P.Enable_Value_o) {
    final_project_DW.EnabledSubsystem_MODE = true;

    /* Sum: '<S176>/Add1' incorporates:
     *  Constant: '<S5>/C'
     *  Delay: '<S5>/MemoryX'
     *  Product: '<S176>/Product'
     */
    final_project_B.Ckxhatkk1 = final_project_DW.UnitDelay5_DSTATE -
      (final_project_P.C_Value_n[0] * final_project_DW.MemoryX_DSTATE_p[0] +
       final_project_P.C_Value_n[1] * final_project_DW.MemoryX_DSTATE_p[1]);

    /* Product: '<S176>/Product2' incorporates:
     *  Constant: '<S123>/KalmanGainM'
     */
    final_project_B.Product2[0] = final_project_P.KalmanGainM_Value_do[0] *
      final_project_B.Ckxhatkk1;
    final_project_B.Product2[1] = final_project_P.KalmanGainM_Value_do[1] *
      final_project_B.Ckxhatkk1;
  } else if (final_project_DW.EnabledSubsystem_MODE) {
    /* Disable for Product: '<S176>/Product2' incorporates:
     *  Outport: '<S176>/deltax'
     */
    final_project_B.Product2[0] = final_project_P.deltax_Y0;
    final_project_B.Product2[1] = final_project_P.deltax_Y0;
    final_project_DW.EnabledSubsystem_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S150>/Enabled Subsystem' */

  /* DataTypeConversion: '<S1>/Cast To Single2' incorporates:
   *  Delay: '<S5>/MemoryX'
   *  Sum: '<S150>/Add'
   */
  final_project_B.CastToSingle2[0] = (real32_T)(final_project_B.Product2[0] +
    final_project_DW.MemoryX_DSTATE_p[0]);
  final_project_B.CastToSingle2[1] = (real32_T)(final_project_B.Product2[1] +
    final_project_DW.MemoryX_DSTATE_p[1]);

  /* Gain: '<S1>/Gain' */
  final_project_B.Gain = final_project_P.Gain_Gain *
    final_project_B.CastToSingle2[0];

  /* Gain: '<S1>/Gain1' */
  final_project_B.Gain1 = final_project_P.Gain1_Gain *
    final_project_B.CastToSingle2[1];

  /* Sum: '<S1>/Sum21' incorporates:
   *  Constant: '<S1>/Constant18'
   *  Delay: '<S1>/Delay'
   */
  final_project_B.t = final_project_P.Constant18_Value +
    final_project_DW.Delay_DSTATE;

  /* RelationalOperator: '<S2>/Compare' incorporates:
   *  Constant: '<S2>/Constant'
   */
  final_project_B.Compare = (final_project_B.t >=
    final_project_P.CompareToConstant2_const);

  /* Switch: '<S1>/Switch2' */
  if (final_project_B.Compare) {
    /* Switch: '<S1>/Switch2' incorporates:
     *  Constant: '<S1>/Constant5'
     *  Gain: '<S1>/Gain2'
     *  Sum: '<S1>/Sum'
     *  Sum: '<S1>/Sum1'
     *  Sum: '<S1>/Sum13'
     */
    final_project_B.Switch2 = ((final_project_P.F_throttle *
      final_project_B.Command[0] - final_project_B.Gain) - final_project_B.Gain1)
      + final_project_P.m * final_project_P.g;
  } else {
    /* Switch: '<S1>/Switch2' incorporates:
     *  Constant: '<S1>/Constant21'
     */
    final_project_B.Switch2 = 1.1 * final_project_P.m * final_project_P.g;
  }

  /* End of Switch: '<S1>/Switch2' */

  /* Gain: '<S1>/Gain3' */
  final_project_B.Gain3 = final_project_P.Gain3_Gain *
    final_project_B.CastToSingle[0];

  /* Gain: '<S1>/Gain4' */
  final_project_B.Gain4 = final_project_P.Gain4_Gain *
    final_project_B.CastToSingle[1];

  /* Sum: '<S1>/Sum12' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  final_project_B.Sum12 = sensor_inport.HALSensors.HAL_gyro_SI.x -
    sensor_inport.SensorCalibration[3];

  /* Sum: '<S1>/Sum6' incorporates:
   *  Gain: '<S1>/Gain5'
   *  Gain: '<S1>/Gain6'
   *  Sum: '<S1>/Sum4'
   *  Sum: '<S1>/Sum5'
   */
  final_project_B.aileron = ((final_project_P.F_aileron *
    final_project_B.Command[1] - final_project_B.Gain3) - final_project_B.Gain4)
    - final_project_P.Gain6_Gain * final_project_B.Sum12;

  /* Gain: '<S1>/Gain7' */
  final_project_B.Gain7 = final_project_P.Gain7_Gain *
    final_project_B.CastToSingle1[0];

  /* Gain: '<S1>/Gain8' */
  final_project_B.Gain8 = final_project_P.Gain8_Gain *
    final_project_B.CastToSingle1[1];

  /* Sum: '<S1>/Sum17' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  final_project_B.Sum17 = sensor_inport.HALSensors.HAL_gyro_SI.y -
    sensor_inport.SensorCalibration[4];

  /* Sum: '<S1>/Sum9' incorporates:
   *  Gain: '<S1>/Gain10'
   *  Gain: '<S1>/Gain9'
   *  Sum: '<S1>/Sum7'
   *  Sum: '<S1>/Sum8'
   */
  final_project_B.elevator = ((final_project_P.F_elevator *
    final_project_B.Command[2] - final_project_B.Gain7) - final_project_B.Gain8)
    - final_project_P.Gain10_Gain * final_project_B.Sum17;

  /* Sum: '<S1>/Sum18' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  final_project_B.Sum18 = sensor_inport.HALSensors.HAL_gyro_SI.z -
    sensor_inport.SensorCalibration[5];

  /* Sum: '<S1>/Sum11' incorporates:
   *  Gain: '<S1>/Gain13'
   *  Gain: '<S1>/Gain14'
   */
  final_project_B.rrudder = final_project_P.F_rudder * final_project_B.Command[3]
    - final_project_P.Gain13_Gain * final_project_B.Sum18;
  for (i_0 = 0; i_0 < 4; i_0++) {
    /* Sqrt: '<S1>/Sqrt1' incorporates:
     *  Gain: '<S1>/Gain11'
     *  SignalConversion generated from: '<S1>/Gain11'
     */
    final_project_B.Ckxhatkk1 = sqrt(final_project_P.M[i_0 + 12] * 0.25 *
      final_project_B.rrudder + (final_project_P.M[i_0 + 8] * 0.25 *
      final_project_B.elevator + (final_project_P.M[i_0 + 4] * 0.25 *
      final_project_B.aileron + 0.25 * final_project_P.M[i_0] *
      final_project_B.Switch2)));

    /* Saturate: '<S1>/Saturation1' */
    if (final_project_B.Ckxhatkk1 > final_project_P.Saturation1_UpperSat) {
      /* Saturate: '<S1>/Saturation1' incorporates:
       *  Sqrt: '<S1>/Sqrt1'
       */
      motors_outport[i_0] = final_project_P.Saturation1_UpperSat;
    } else if (final_project_B.Ckxhatkk1 < final_project_P.Saturation1_LowerSat)
    {
      /* Saturate: '<S1>/Saturation1' incorporates:
       *  Sqrt: '<S1>/Sqrt1'
       */
      motors_outport[i_0] = final_project_P.Saturation1_LowerSat;
    } else {
      /* Saturate: '<S1>/Saturation1' incorporates:
       *  Sqrt: '<S1>/Sqrt1'
       */
      motors_outport[i_0] = (real32_T)final_project_B.Ckxhatkk1;
    }

    /* End of Saturate: '<S1>/Saturation1' */

    /* Outport: '<Root>/Motors' incorporates:
     *  Saturate: '<S1>/Saturation1'
     */
    final_project_Y.Motors[i_0] = motors_outport[i_0];
  }

  /* Scope: '<S1>/Scope24' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope24_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[4];
      up0[0] = motors_outport[0];
      up0[1] = motors_outport[1];
      up0[2] = motors_outport[2];
      up0[3] = motors_outport[3];
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Scope: '<S1>/Scope15' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope15_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[2];
      up0[0] = final_project_B.CastToSingle2[0];
      up0[1] = final_project_B.CastToSingle2[1];
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Scope: '<S1>/Scope26' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope26_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = final_project_B.CastToSingle2[0];
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Outputs for Enabled SubSystem: '<S143>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S174>/Enable'
   */
  /* Constant: '<S5>/Enable' */
  if (final_project_P.Enable_Value_o) {
    final_project_DW.MeasurementUpdate_MODE = true;

    /* Sum: '<S174>/Sum' incorporates:
     *  Constant: '<S5>/C'
     *  Constant: '<S5>/D'
     *  Delay: '<S5>/MemoryX'
     *  Product: '<S174>/C[k]*xhat[k|k-1]'
     *  Product: '<S174>/D[k]*u[k]'
     *  Sum: '<S174>/Add1'
     */
    final_project_B.Ckxhatkk1 = final_project_DW.UnitDelay5_DSTATE -
      ((final_project_P.C_Value_n[0] * final_project_DW.MemoryX_DSTATE_p[0] +
        final_project_P.C_Value_n[1] * final_project_DW.MemoryX_DSTATE_p[1]) +
       final_project_P.D_Value * final_project_DW.UnitDelay4_DSTATE);

    /* Product: '<S174>/Product3' incorporates:
     *  Constant: '<S123>/KalmanGainL'
     */
    final_project_B.Product3[0] = final_project_P.KalmanGainL_Value_c[0] *
      final_project_B.Ckxhatkk1;
    final_project_B.Product3[1] = final_project_P.KalmanGainL_Value_c[1] *
      final_project_B.Ckxhatkk1;
  } else if (final_project_DW.MeasurementUpdate_MODE) {
    /* Disable for Product: '<S174>/Product3' incorporates:
     *  Outport: '<S174>/L*(y[k]-yhat[k|k-1])'
     */
    final_project_B.Product3[0] = final_project_P.Lykyhatkk1_Y0;
    final_project_B.Product3[1] = final_project_P.Lykyhatkk1_Y0;
    final_project_DW.MeasurementUpdate_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S143>/MeasurementUpdate' */

  /* Sum: '<S143>/Add' incorporates:
   *  Constant: '<S5>/A'
   *  Constant: '<S5>/B'
   *  Delay: '<S5>/MemoryX'
   *  Product: '<S143>/A[k]*xhat[k|k-1]'
   *  Product: '<S143>/B[k]*u[k]'
   *  Product: '<S174>/Product3'
   */
  final_project_B.Add[0] = ((final_project_P.A_Value_i[0] *
    final_project_DW.MemoryX_DSTATE_p[0] + final_project_DW.MemoryX_DSTATE_p[1] *
    final_project_P.A_Value_i[2]) + final_project_P.B_Value[0] *
    final_project_DW.UnitDelay4_DSTATE) + final_project_B.Product3[0];
  final_project_B.Add[1] = ((final_project_DW.MemoryX_DSTATE_p[0] *
    final_project_P.A_Value_i[1] + final_project_DW.MemoryX_DSTATE_p[1] *
    final_project_P.A_Value_i[3]) + final_project_P.B_Value[1] *
    final_project_DW.UnitDelay4_DSTATE) + final_project_B.Product3[1];

  /* UnitDelay: '<S1>/Unit Delay2' */
  rtb_UnitDelay2 = final_project_DW.UnitDelay2_DSTATE;

  /* Outputs for Enabled SubSystem: '<S89>/MeasurementUpdate' */
  /* Constant: '<S4>/Enable' incorporates:
   *  Constant: '<S4>/C'
   *  Constant: '<S4>/D'
   *  Constant: '<S69>/KalmanGainL'
   */
  final_project_MeasurementUpdate(final_project_P.Enable_Value,
    final_project_P.KalmanGainL_Value_b, final_project_B.UnitDelay3,
    final_project_P.C_Value, final_project_B.MemoryX, final_project_P.D_Value_n,
    rtb_UnitDelay2, &final_project_B.MeasurementUpdate_f,
    &final_project_DW.MeasurementUpdate_f, &final_project_P.MeasurementUpdate_f);

  /* End of Outputs for SubSystem: '<S89>/MeasurementUpdate' */

  /* Sum: '<S89>/Add' incorporates:
   *  Constant: '<S4>/A'
   *  Constant: '<S4>/B'
   *  Product: '<S120>/Product3'
   *  Product: '<S89>/A[k]*xhat[k|k-1]'
   *  Product: '<S89>/B[k]*u[k]'
   */
  final_project_B.Add_g[0] = ((final_project_P.A_Value_d[0] *
    final_project_B.MemoryX[0] + final_project_B.MemoryX[1] *
    final_project_P.A_Value_d[2]) + final_project_P.B_Value_g[0] *
    rtb_UnitDelay2) + final_project_B.MeasurementUpdate_f.Product3[0];
  final_project_B.Add_g[1] = ((final_project_B.MemoryX[0] *
    final_project_P.A_Value_d[1] + final_project_B.MemoryX[1] *
    final_project_P.A_Value_d[3]) + final_project_P.B_Value_g[1] *
    rtb_UnitDelay2) + final_project_B.MeasurementUpdate_f.Product3[1];

  /* UnitDelay: '<S1>/Unit Delay' */
  rtb_UnitDelay = final_project_DW.UnitDelay_DSTATE;

  /* Outputs for Enabled SubSystem: '<S35>/MeasurementUpdate' */
  /* Constant: '<S3>/Enable' incorporates:
   *  Constant: '<S15>/KalmanGainL'
   *  Constant: '<S3>/C'
   *  Constant: '<S3>/D'
   */
  final_project_MeasurementUpdate(final_project_P.Enable_Value_h,
    final_project_P.KalmanGainL_Value, final_project_B.UnitDelay1,
    final_project_P.C_Value_e, final_project_B.MemoryX_j,
    final_project_P.D_Value_e, rtb_UnitDelay, &final_project_B.MeasurementUpdate,
    &final_project_DW.MeasurementUpdate, &final_project_P.MeasurementUpdate);

  /* End of Outputs for SubSystem: '<S35>/MeasurementUpdate' */

  /* Sum: '<S35>/Add' incorporates:
   *  Constant: '<S3>/A'
   *  Constant: '<S3>/B'
   *  Product: '<S35>/A[k]*xhat[k|k-1]'
   *  Product: '<S35>/B[k]*u[k]'
   *  Product: '<S66>/Product3'
   */
  final_project_B.Add_l[0] = ((final_project_P.A_Value[0] *
    final_project_B.MemoryX_j[0] + final_project_B.MemoryX_j[1] *
    final_project_P.A_Value[2]) + final_project_P.B_Value_m[0] * rtb_UnitDelay)
    + final_project_B.MeasurementUpdate.Product3[0];
  final_project_B.Add_l[1] = ((final_project_B.MemoryX_j[0] *
    final_project_P.A_Value[1] + final_project_B.MemoryX_j[1] *
    final_project_P.A_Value[3]) + final_project_P.B_Value_m[1] * rtb_UnitDelay)
    + final_project_B.MeasurementUpdate.Product3[1];

  /* Scope: '<S1>/Scope' */
  {
    StructLogVar *svar = (StructLogVar *)final_project_DW.Scope_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = final_project_B.CastToSingle[0];
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Scope: '<S1>/Scope10' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope10_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = final_project_B.CastToSingle[1];
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Scope: '<S1>/Scope14' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope14_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[2];
      up0[0] = final_project_B.CastToSingle[0];
      up0[1] = final_project_B.CastToSingle[1];
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Scope: '<S1>/Scope11' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope11_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[2];
      up0[0] = final_project_B.CastToSingle1[0];
      up0[1] = final_project_B.CastToSingle1[1];
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Scope: '<S1>/Scope16' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope16_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = final_project_B.CastToSingle1[1];
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Scope: '<S1>/Scope17' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope17_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = final_project_B.CastToSingle1[0];
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Scope: '<S1>/Scope22' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope22_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real_T up0[4];
      up0[0] = final_project_B.Switch2;
      up0[1] = final_project_B.aileron;
      up0[2] = final_project_B.elevator;
      up0[3] = final_project_B.rrudder;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Scope: '<S1>/Scope9' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope9_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = final_project_B.Sum18;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Scope: '<S1>/Scope8' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope8_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = final_project_B.Sum17;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* DataTypeConversion: '<S1>/Cast To Double3' */
  final_project_B.CastToDouble3 = final_project_B.Sum17;

  /* ToWorkspace: '<S1>/To Workspace' */
  {
    double locTime = (((final_project_M->Timing.clockTick1+
                        final_project_M->Timing.clockTickH1* 4294967296.0)) *
                      0.005);
    ;
    rt_UpdateStructLogVar((StructLogVar *)
                          final_project_DW.ToWorkspace_PWORK.LoggedData,
                          &locTime, &final_project_B.CastToDouble3);
  }

  /* Scope: '<S1>/Scope7' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope7_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = final_project_B.Sum12;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* DataTypeConversion: '<S1>/Cast To Double2' */
  final_project_B.CastToDouble2 = final_project_B.Sum12;

  /* MATLAB Function: '<S1>/MATLAB Function7' incorporates:
   *  Constant: '<S1>/Constant8'
   */
  final_project_B.c[1] = 0.0F;
  final_project_B.c[4] = (real32_T)cos(final_project_B.CastToSingle[1]);
  final_project_B.c[7] = (real32_T)sin(final_project_B.CastToSingle[1]);
  final_project_B.c[2] = 0.0F;
  final_project_B.c[5] = -(real32_T)sin(final_project_B.CastToSingle[1]);
  final_project_B.c[8] = (real32_T)cos(final_project_B.CastToSingle[1]);
  final_project_B.rtb_TmpSignalConversionAtGain_m[0] = (real32_T)cos
    (final_project_B.CastToSingle1[1]);
  final_project_B.rtb_TmpSignalConversionAtGain_m[3] = 0.0F;
  final_project_B.rtb_TmpSignalConversionAtGain_m[6] = -(real32_T)sin
    (final_project_B.CastToSingle1[1]);
  final_project_B.c[0] = 1.0F;
  final_project_B.rtb_TmpSignalConversionAtGain_m[1] = 0.0F;
  final_project_B.c[3] = 0.0F;
  final_project_B.rtb_TmpSignalConversionAtGain_m[4] = 1.0F;
  final_project_B.c[6] = 0.0F;
  final_project_B.rtb_TmpSignalConversionAtGain_m[7] = 0.0F;
  final_project_B.rtb_TmpSignalConversionAtGain_m[2] = (real32_T)sin
    (final_project_B.CastToSingle1[1]);
  final_project_B.rtb_TmpSignalConversionAtGain_m[5] = 0.0F;
  final_project_B.rtb_TmpSignalConversionAtGain_m[8] = (real32_T)cos
    (final_project_B.CastToSingle1[1]);
  final_project_B.fv[0] = 0.0F;
  final_project_B.fv[1] = 0.0F;
  final_project_B.fv[2] = (real32_T)final_project_P.g;
  for (i_0 = 0; i_0 < 3; i_0++) {
    for (i = 0; i < 3; i++) {
      c_tmp = i_0 + 3 * i;
      final_project_B.c_c[c_tmp] = 0.0F;
      final_project_B.c_c[c_tmp] +=
        final_project_B.rtb_TmpSignalConversionAtGain_m[3 * i] *
        final_project_B.c[i_0];
      final_project_B.c_c[c_tmp] +=
        final_project_B.rtb_TmpSignalConversionAtGain_m[3 * i + 1] *
        final_project_B.c[i_0 + 3];
      final_project_B.c_c[c_tmp] +=
        final_project_B.rtb_TmpSignalConversionAtGain_m[3 * i + 2] *
        final_project_B.c[i_0 + 6];
    }

    final_project_B.c_cx[i_0] = 0.0F;
    for (i = 0; i < 3; i++) {
      c_tmp = i_0 + 3 * i;
      final_project_B.c_k[c_tmp] = 0.0F;
      final_project_B.c_k[c_tmp] += (real32_T)b[3 * i] * final_project_B.c_c[i_0];
      final_project_B.c_k[c_tmp] += (real32_T)b[3 * i + 1] *
        final_project_B.c_c[i_0 + 3];
      final_project_B.c_k[c_tmp] += (real32_T)b[3 * i + 2] *
        final_project_B.c_c[i_0 + 6];
      final_project_B.c_cx[i_0] += final_project_B.c_k[c_tmp] *
        final_project_B.fv[i];
    }
  }

  final_project_B.bias = final_project_B.c_cx[2];

  /* End of MATLAB Function: '<S1>/MATLAB Function7' */

  /* Sum: '<S1>/Sum10' incorporates:
   *  Constant: '<S1>/Constant'
   *  Inport: '<Root>/Sensors'
   *  Sum: '<S1>/Subtract'
   */
  final_project_B.Sum10 = (-final_project_P.g - sensor_inport.SensorCalibration
    [2]) + sensor_inport.HALSensors.HAL_acc_SI.z;

  /* Sum: '<S1>/Sum16' */
  final_project_B.Sum16 = final_project_B.Sum10 + final_project_B.bias;

  /* Sum: '<S1>/Sum2' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  final_project_B.Sum2 = sensor_inport.HALSensors.HAL_acc_SI.x -
    sensor_inport.SensorCalibration[0];

  /* Sum: '<S1>/Sum3' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  final_project_B.Sum3 = sensor_inport.HALSensors.HAL_acc_SI.y -
    sensor_inport.SensorCalibration[1];

  /* MATLAB Function: '<S1>/MATLAB Function' */
  final_project_B.theta_measured = -final_project_B.Sum2 / (real32_T)sqrt
    (final_project_B.Sum3 * final_project_B.Sum3 + (real32_T)
     (final_project_B.Sum10 * final_project_B.Sum10));
  final_project_B.phi_measured = final_project_B.Sum3 / (real32_T)
    final_project_B.Sum10;

  /* Scope: '<S1>/Scope19' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope19_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = final_project_B.phi_measured;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Scope: '<S1>/Scope21' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope21_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = final_project_B.theta_measured;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* DataTypeConversion: '<S1>/Cast To Double1' */
  final_project_B.CastToDouble1 = final_project_B.phi_measured;

  /* DataTypeConversion: '<S1>/Cast To Double5' */
  final_project_B.CastToDouble5 = final_project_B.theta_measured;

  /* Scope: '<S1>/Scope5' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope5_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = final_project_B.Sum3;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Scope: '<S1>/Scope4' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope4_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = final_project_B.Sum2;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Scope: '<S1>/Scope6' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope6_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real_T up0[1];
      up0[0] = final_project_B.Sum10;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* SignalConversion generated from: '<S14>/Bus Selector5' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  final_project_B.pressure = sensor_inport.HALSensors.HAL_pressure_SI.pressure;

  /* MATLAB Function: '<S1>/MATLAB Function1' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  final_project_B.z_p = ((real32_T)log(final_project_B.pressure / 101325.0F) *
    -8440.23926F - (real32_T)log(sensor_inport.SensorCalibration[6] / 101325.0F)
    * -8440.23926F) / (real32_T)cos(final_project_B.CastToSingle1[1]);

  /* Scope: '<S1>/Scope25' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope25_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = final_project_B.z_p;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* DataTypeConversion: '<S1>/Cast To Double7' */
  final_project_B.CastToDouble7 = final_project_B.z_p;

  /* Scope: '<S1>/Scope12' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope12_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = final_project_B.pressure;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* SignalConversion generated from: '<S14>/Bus Selector1' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  final_project_B.opticalFlow_data[0] =
    sensor_inport.VisionSensors.opticalFlow_data[0];
  final_project_B.opticalFlow_data[1] =
    sensor_inport.VisionSensors.opticalFlow_data[1];
  final_project_B.opticalFlow_data[2] =
    sensor_inport.VisionSensors.opticalFlow_data[2];

  /* Scope: '<S1>/Scope1' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope1_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = final_project_B.opticalFlow_data[0];
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Scope: '<S1>/Scope2' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope2_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = final_project_B.opticalFlow_data[1];
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Scope: '<S1>/Scope3' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope3_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = final_project_B.opticalFlow_data[2];
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Gain: '<S1>/Gain12' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  final_project_B.Gain12 = final_project_P.Gain12_Gain *
    sensor_inport.HALSensors.HAL_ultrasound_SI.altitude;

  /* Product: '<S1>/Product1' incorporates:
   *  Constant: '<S1>/Constant3'
   */
  final_project_B.Ckxhatkk1 = final_project_B.Gain12 * final_project_P.Kappa;

  /* Product: '<S1>/MatrixMultiply1' */
  final_project_B.MatrixMultiply1[0] = final_project_B.Ckxhatkk1 *
    final_project_B.opticalFlow_data[0];
  final_project_B.MatrixMultiply1[1] = final_project_B.Ckxhatkk1 *
    final_project_B.opticalFlow_data[1];

  /* Scope: '<S1>/Scope18' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope18_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real_T up0[1];
      up0[0] = final_project_B.MatrixMultiply1[1];
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Scope: '<S1>/Scope20' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope20_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real_T up0[1];
      up0[0] = final_project_B.MatrixMultiply1[0];
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Scope: '<S1>/Scope13' */
  {
    StructLogVar *svar = (StructLogVar *)
      final_project_DW.Scope13_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = (((final_project_M->Timing.clockTick1+
                          final_project_M->Timing.clockTickH1* 4294967296.0)) *
                        0.005);
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = final_project_B.Gain12;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* ManualSwitch: '<S1>/Manual Switch' */
  if (final_project_P.ManualSwitch_CurrentSetting == 1) {
    /* ManualSwitch: '<S1>/Manual Switch' incorporates:
     *  Constant: '<S1>/Constant2'
     */
    flag_outport = final_project_P.Constant2_Value;
  } else {
    /* ManualSwitch: '<S1>/Manual Switch' incorporates:
     *  Constant: '<S1>/Constant1'
     */
    flag_outport = final_project_P.Constant1_Value;
  }

  /* End of ManualSwitch: '<S1>/Manual Switch' */

  /* Outport: '<Root>/Flag' */
  final_project_Y.Flag = flag_outport;

  /* Matfile logging */
  rt_UpdateTXYLogVars(final_project_M->rtwLogInfo, (final_project_M->Timing.t));

  /* Update for Delay: '<S4>/MemoryX' */
  final_project_DW.icLoad = false;

  /* Update for UnitDelay: '<S1>/Unit Delay3' */
  final_project_DW.UnitDelay3_DSTATE[0] = final_project_B.MatrixMultiply1[0];
  final_project_DW.UnitDelay3_DSTATE[1] = final_project_B.CastToDouble5;

  /* Update for Delay: '<S3>/MemoryX' */
  final_project_DW.icLoad_k = false;

  /* Update for UnitDelay: '<S1>/Unit Delay1' */
  final_project_DW.UnitDelay1_DSTATE[0] = final_project_B.MatrixMultiply1[1];
  final_project_DW.UnitDelay1_DSTATE[1] = final_project_B.CastToDouble1;

  /* Update for Delay: '<S5>/MemoryX' */
  final_project_DW.icLoad_i = false;

  /* Update for Delay: '<S4>/MemoryX' */
  final_project_DW.MemoryX_DSTATE[0] = final_project_B.Add_g[0];

  /* Update for Delay: '<S3>/MemoryX' */
  final_project_DW.MemoryX_DSTATE_n[0] = final_project_B.Add_l[0];

  /* Update for Delay: '<S5>/MemoryX' */
  final_project_DW.MemoryX_DSTATE_p[0] = final_project_B.Add[0];

  /* Update for Delay: '<S4>/MemoryX' */
  final_project_DW.MemoryX_DSTATE[1] = final_project_B.Add_g[1];

  /* Update for Delay: '<S3>/MemoryX' */
  final_project_DW.MemoryX_DSTATE_n[1] = final_project_B.Add_l[1];

  /* Update for Delay: '<S5>/MemoryX' */
  final_project_DW.MemoryX_DSTATE_p[1] = final_project_B.Add[1];

  /* Update for UnitDelay: '<S1>/Unit Delay5' */
  final_project_DW.UnitDelay5_DSTATE = final_project_B.CastToDouble7;

  /* Update for Delay: '<S1>/Delay' */
  final_project_DW.Delay_DSTATE = final_project_B.t;

  /* Update for UnitDelay: '<S1>/Unit Delay4' */
  final_project_DW.UnitDelay4_DSTATE = final_project_B.Sum16;

  /* Update for UnitDelay: '<S1>/Unit Delay2' */
  final_project_DW.UnitDelay2_DSTATE = final_project_B.CastToDouble3;

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  final_project_DW.UnitDelay_DSTATE = final_project_B.CastToDouble2;

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.0s, 0.0s] */
    if ((rtmGetTFinal(final_project_M)!=-1) &&
        !((rtmGetTFinal(final_project_M)-final_project_M->Timing.t[0]) >
          final_project_M->Timing.t[0] * (DBL_EPSILON))) {
      rtmSetErrorStatus(final_project_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++final_project_M->Timing.clockTick0)) {
    ++final_project_M->Timing.clockTickH0;
  }

  final_project_M->Timing.t[0] = final_project_M->Timing.clockTick0 *
    final_project_M->Timing.stepSize0 + final_project_M->Timing.clockTickH0 *
    final_project_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.005s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.005, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    final_project_M->Timing.clockTick1++;
    if (!final_project_M->Timing.clockTick1) {
      final_project_M->Timing.clockTickH1++;
    }
  }
}

/* Model initialize function */
void final_project_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)final_project_M, 0,
                sizeof(RT_MODEL_final_project_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&final_project_M->solverInfo,
                          &final_project_M->Timing.simTimeStep);
    rtsiSetTPtr(&final_project_M->solverInfo, &rtmGetTPtr(final_project_M));
    rtsiSetStepSizePtr(&final_project_M->solverInfo,
                       &final_project_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&final_project_M->solverInfo, (&rtmGetErrorStatus
      (final_project_M)));
    rtsiSetRTModelPtr(&final_project_M->solverInfo, final_project_M);
  }

  rtsiSetSimTimeStep(&final_project_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&final_project_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(final_project_M, &final_project_M->Timing.tArray[0]);
  rtmSetTFinal(final_project_M, 30.0);
  final_project_M->Timing.stepSize0 = 0.005;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    final_project_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(final_project_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(final_project_M->rtwLogInfo, (NULL));
    rtliSetLogT(final_project_M->rtwLogInfo, "tout");
    rtliSetLogX(final_project_M->rtwLogInfo, "");
    rtliSetLogXFinal(final_project_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(final_project_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(final_project_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(final_project_M->rtwLogInfo, 0);
    rtliSetLogDecimation(final_project_M->rtwLogInfo, 1);
    rtliSetLogY(final_project_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(final_project_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(final_project_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &final_project_B), 0,
                sizeof(B_final_project_T));

  /* exported global signals */
  motors_outport[0] = 0.0F;
  motors_outport[1] = 0.0F;
  motors_outport[2] = 0.0F;
  motors_outport[3] = 0.0F;
  flag_outport = 0U;

  /* states (dwork) */
  (void) memset((void *)&final_project_DW, 0,
                sizeof(DW_final_project_T));

  /* external inputs */
  (void)memset(&cmd_inport, 0, sizeof(CommandBus));
  (void)memset(&sensor_inport, 0, sizeof(SensorsBus));

  /* external outputs */
  (void) memset((void *)&final_project_Y, 0,
                sizeof(ExtY_final_project_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(final_project_M->rtwLogInfo, 0.0,
    rtmGetTFinal(final_project_M), final_project_M->Timing.stepSize0,
    (&rtmGetErrorStatus(final_project_M)));

  /* SetupRuntimeResources for Scope: '<S1>/Scope23' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 4 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 4 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "Command" };

    static char_T rt_ScopeSignalTitles[] = "Command";
    static int_T rt_ScopeSignalTitleLengths[] = { 7 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 0, 0, 0, 0 };

    BuiltInDTypeId dTypes[1] = { SS_DOUBLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope23";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope23_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "Commands",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope23_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope24' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 4 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 4 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 0, 0, 0, 0 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope24";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope24_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "motor_speeds_2",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope24_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope15' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 2 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 2 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 1, 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope15";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope15_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "ScopeData3",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope15_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope26' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "Pbz_kf" };

    static char_T rt_ScopeSignalTitles[] = "Pbz_kf";
    static int_T rt_ScopeSignalTitleLengths[] = { 6 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope26";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope26_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "Pbz_kf",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope26_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "v_kf" };

    static char_T rt_ScopeSignalTitles[] = "v_kf";
    static int_T rt_ScopeSignalTitleLengths[] = { 4 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "v_drone",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope10' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "phi_kf" };

    static char_T rt_ScopeSignalTitles[] = "phi_kf";
    static int_T rt_ScopeSignalTitleLengths[] = { 6 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope10";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope10_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "phi_drone",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope10_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope14' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 2 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 2 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 1, 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope14";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope14_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "ScopeData2",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope14_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope11' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 2 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 2 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 1, 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope11";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope11_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "ScopeData1",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope11_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope16' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "theta_kf" };

    static char_T rt_ScopeSignalTitles[] = "theta_kf";
    static int_T rt_ScopeSignalTitleLengths[] = { 8 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope16";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope16_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "theta_drone",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope16_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope17' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "u_kf" };

    static char_T rt_ScopeSignalTitles[] = "u_kf";
    static int_T rt_ScopeSignalTitleLengths[] = { 4 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope17";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope17_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "u_drone",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope17_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope22' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 4 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 4 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 0, 0, 0, 0 };

    BuiltInDTypeId dTypes[1] = { SS_DOUBLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope22";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope22_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "Wrench",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope22_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope9' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 0 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope9";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope9_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "r",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope9_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope8' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 0 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope8";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope8_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "q",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope8_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for ToWorkspace: '<S1>/To Workspace' */
  {
    static int_T rt_ToWksWidths[] = { 1 };

    static int_T rt_ToWksNumDimensions[] = { 1 };

    static int_T rt_ToWksDimensions[] = { 1 };

    static boolean_T rt_ToWksIsVarDims[] = { 0 };

    static void *rt_ToWksCurrSigDims[] = { (NULL) };

    static int_T rt_ToWksCurrSigDimsSize[] = { 4 };

    static BuiltInDTypeId rt_ToWksDataTypeIds[] = { SS_DOUBLE };

    static int_T rt_ToWksComplexSignals[] = { 0 };

    static int_T rt_ToWksFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs[] = {
      (NULL)
    };

    static const char_T *rt_ToWksLabels[] = { "" };

    static RTWLogSignalInfo rt_ToWksSignalInfo = {
      1,
      rt_ToWksWidths,
      rt_ToWksNumDimensions,
      rt_ToWksDimensions,
      rt_ToWksIsVarDims,
      rt_ToWksCurrSigDims,
      rt_ToWksCurrSigDimsSize,
      rt_ToWksDataTypeIds,
      rt_ToWksComplexSignals,
      rt_ToWksFrameData,
      rt_ToWksLoggingPreprocessingFcnPtrs,

      { rt_ToWksLabels },
      (NULL),
      (NULL),
      (NULL),

      { (NULL) },

      { (NULL) },
      (NULL),
      (NULL)
    };

    static const char_T rt_ToWksBlockName[] =
      "final_project/Flight Control System/To Workspace";
    final_project_DW.ToWorkspace_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "noisy_q",
      1,
      0,
      1,
      0.005,
      &rt_ToWksSignalInfo,
      rt_ToWksBlockName);
    if (final_project_DW.ToWorkspace_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope7' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 0 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope7";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope7_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "p",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope7_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope19' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 0 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope19";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope19_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "phi_drone_est",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope19_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope21' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 0 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope21";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope21_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "theta_drone_est",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope21_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope5' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 0 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope5";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope5_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "a_y",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope5_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope4' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 0 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope4";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope4_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "a_x",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope4_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope6' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 0 };

    BuiltInDTypeId dTypes[1] = { SS_DOUBLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope6";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope6_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "a_z",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope6_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope25' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 0 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope25";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope25_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "z_p",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope25_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope12' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 0 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope12";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope12_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "pressure",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope12_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope1' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 0 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope1";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope1_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "u",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope1_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope2' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 0 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope2";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope2_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "v",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope2_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope3' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 0 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope3";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope3_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "w",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope3_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope18' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "v_est" };

    static char_T rt_ScopeSignalTitles[] = "v_est";
    static int_T rt_ScopeSignalTitleLengths[] = { 5 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 0 };

    BuiltInDTypeId dTypes[1] = { SS_DOUBLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope18";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope18_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "v_drone_est",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope18_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope20' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 0 };

    BuiltInDTypeId dTypes[1] = { SS_DOUBLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope20";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope20_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "u_drone_est",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope20_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope13' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 1 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 1 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "" };

    static char_T rt_ScopeSignalTitles[] = "";
    static int_T rt_ScopeSignalTitleLengths[] = { 0 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 0 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] =
      "final_project/Flight Control System/Scope13";
    static int_T rt_ScopeFrameData[] = { 0 };

    static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs[] =
      {
      (NULL)
    };

    rt_ScopeSignalInfo.numSignals = 1;
    rt_ScopeSignalInfo.numCols = rt_ScopeSignalWidths;
    rt_ScopeSignalInfo.numDims = rt_ScopeSignalNumDimensions;
    rt_ScopeSignalInfo.dims = rt_ScopeSignalDimensions;
    rt_ScopeSignalInfo.isVarDims = rt_ScopeSignalIsVarDims;
    rt_ScopeSignalInfo.currSigDims = rt_ScopeCurrSigDims;
    rt_ScopeSignalInfo.currSigDimsSize = rt_ScopeCurrSigDimsSize;
    rt_ScopeSignalInfo.dataTypes = dTypes;
    rt_ScopeSignalInfo.complexSignals = (NULL);
    rt_ScopeSignalInfo.frameData = rt_ScopeFrameData;
    rt_ScopeSignalInfo.preprocessingPtrs =
      rt_ScopeSignalLoggingPreprocessingFcnPtrs;
    rt_ScopeSignalInfo.labels.cptr = rt_ScopeSignalLabels;
    rt_ScopeSignalInfo.titles = rt_ScopeSignalTitles;
    rt_ScopeSignalInfo.titleLengths = rt_ScopeSignalTitleLengths;
    rt_ScopeSignalInfo.plotStyles = rt_ScopeSignalPlotStyles;
    rt_ScopeSignalInfo.blockNames.cptr = (NULL);
    rt_ScopeSignalInfo.stateNames.cptr = (NULL);
    rt_ScopeSignalInfo.crossMdlRef = (NULL);
    rt_ScopeSignalInfo.dataTypeConvert = (NULL);
    final_project_DW.Scope13_PWORK.LoggedData = rt_CreateStructLogVar(
      final_project_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(final_project_M),
      final_project_M->Timing.stepSize0,
      (&rtmGetErrorStatus(final_project_M)),
      "z_ultrasonic",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (final_project_DW.Scope13_PWORK.LoggedData == (NULL))
      return;
  }

  /* Start for Enabled SubSystem: '<S96>/Enabled Subsystem' */
  final_pr_EnabledSubsystem_Start(&final_project_DW.EnabledSubsystem_g);

  /* End of Start for SubSystem: '<S96>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S42>/Enabled Subsystem' */
  final_pr_EnabledSubsystem_Start(&final_project_DW.EnabledSubsystem);

  /* End of Start for SubSystem: '<S42>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S150>/Enabled Subsystem' */
  final_project_DW.EnabledSubsystem_MODE = false;

  /* End of Start for SubSystem: '<S150>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S143>/MeasurementUpdate' */
  final_project_DW.MeasurementUpdate_MODE = false;

  /* End of Start for SubSystem: '<S143>/MeasurementUpdate' */

  /* Start for Enabled SubSystem: '<S89>/MeasurementUpdate' */
  final_p_MeasurementUpdate_Start(&final_project_DW.MeasurementUpdate_f);

  /* End of Start for SubSystem: '<S89>/MeasurementUpdate' */

  /* Start for Enabled SubSystem: '<S35>/MeasurementUpdate' */
  final_p_MeasurementUpdate_Start(&final_project_DW.MeasurementUpdate);

  /* End of Start for SubSystem: '<S35>/MeasurementUpdate' */

  /* InitializeConditions for Delay: '<S4>/MemoryX' */
  final_project_DW.icLoad = true;

  /* InitializeConditions for Delay: '<S3>/MemoryX' */
  final_project_DW.icLoad_k = true;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay3' */
  final_project_DW.UnitDelay3_DSTATE[0] =
    final_project_P.UnitDelay3_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay1' */
  final_project_DW.UnitDelay1_DSTATE[0] =
    final_project_P.UnitDelay1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay3' */
  final_project_DW.UnitDelay3_DSTATE[1] =
    final_project_P.UnitDelay3_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay1' */
  final_project_DW.UnitDelay1_DSTATE[1] =
    final_project_P.UnitDelay1_InitialCondition;

  /* InitializeConditions for Delay: '<S5>/MemoryX' */
  final_project_DW.icLoad_i = true;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay5' */
  final_project_DW.UnitDelay5_DSTATE =
    final_project_P.UnitDelay5_InitialCondition;

  /* InitializeConditions for Delay: '<S1>/Delay' */
  final_project_DW.Delay_DSTATE = final_project_P.Delay_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay4' */
  final_project_DW.UnitDelay4_DSTATE =
    final_project_P.UnitDelay4_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay2' */
  final_project_DW.UnitDelay2_DSTATE =
    final_project_P.UnitDelay2_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  final_project_DW.UnitDelay_DSTATE = final_project_P.UnitDelay_InitialCondition;

  /* SystemInitialize for Enabled SubSystem: '<S96>/Enabled Subsystem' */
  final_pro_EnabledSubsystem_Init(&final_project_B.EnabledSubsystem_g,
    &final_project_P.EnabledSubsystem_g);

  /* End of SystemInitialize for SubSystem: '<S96>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S42>/Enabled Subsystem' */
  final_pro_EnabledSubsystem_Init(&final_project_B.EnabledSubsystem,
    &final_project_P.EnabledSubsystem);

  /* End of SystemInitialize for SubSystem: '<S42>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S150>/Enabled Subsystem' */
  /* SystemInitialize for Product: '<S176>/Product2' incorporates:
   *  Outport: '<S176>/deltax'
   */
  final_project_B.Product2[0] = final_project_P.deltax_Y0;

  /* End of SystemInitialize for SubSystem: '<S150>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S143>/MeasurementUpdate' */
  /* SystemInitialize for Product: '<S174>/Product3' incorporates:
   *  Outport: '<S174>/L*(y[k]-yhat[k|k-1])'
   */
  final_project_B.Product3[0] = final_project_P.Lykyhatkk1_Y0;

  /* End of SystemInitialize for SubSystem: '<S143>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S150>/Enabled Subsystem' */
  /* SystemInitialize for Product: '<S176>/Product2' incorporates:
   *  Outport: '<S176>/deltax'
   */
  final_project_B.Product2[1] = final_project_P.deltax_Y0;

  /* End of SystemInitialize for SubSystem: '<S150>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S143>/MeasurementUpdate' */
  /* SystemInitialize for Product: '<S174>/Product3' incorporates:
   *  Outport: '<S174>/L*(y[k]-yhat[k|k-1])'
   */
  final_project_B.Product3[1] = final_project_P.Lykyhatkk1_Y0;

  /* End of SystemInitialize for SubSystem: '<S143>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S89>/MeasurementUpdate' */
  final_pr_MeasurementUpdate_Init(&final_project_B.MeasurementUpdate_f,
    &final_project_P.MeasurementUpdate_f);

  /* End of SystemInitialize for SubSystem: '<S89>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S35>/MeasurementUpdate' */
  final_pr_MeasurementUpdate_Init(&final_project_B.MeasurementUpdate,
    &final_project_P.MeasurementUpdate);

  /* End of SystemInitialize for SubSystem: '<S35>/MeasurementUpdate' */
}

/* Model terminate function */
void final_project_terminate(void)
{
  /* (no terminate code required) */
}
