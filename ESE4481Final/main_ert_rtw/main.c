/*
 * main.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "main".
 *
 * Model version              : 1.10
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Wed Dec  1 17:09:56 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "main.h"
#include "main_private.h"

/* Exported block signals */
CommandBus cmd_inport;                 /* '<Root>/AC cmd' */
SensorsBus sensor_inport;              /* '<Root>/Sensors' */
real32_T motors_outport[4];            /* '<S1>/Saturation1' */
uint8_T flag_outport;                  /* '<S1>/Manual Switch' */

/* Block signals (default storage) */
B_main_T main_B;

/* Block states (default storage) */
DW_main_T main_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_main_T main_Y;

/* Real-time model */
static RT_MODEL_main_T main_M_;
RT_MODEL_main_T *const main_M = &main_M_;

/*
 * System initialize for enable system:
 *    '<S27>/MeasurementUpdate'
 *    '<S81>/MeasurementUpdate'
 */
void main_MeasurementUpdate_Init(B_MeasurementUpdate_main_T *localB,
  P_MeasurementUpdate_main_T *localP)
{
  /* SystemInitialize for Product: '<S58>/Product3' incorporates:
   *  Outport: '<S58>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3[0] = localP->Lykyhatkk1_Y0;
  localB->Product3[1] = localP->Lykyhatkk1_Y0;
}

/*
 * Disable for enable system:
 *    '<S27>/MeasurementUpdate'
 *    '<S81>/MeasurementUpdate'
 */
void main_MeasurementUpdate_Disable(B_MeasurementUpdate_main_T *localB,
  DW_MeasurementUpdate_main_T *localDW, P_MeasurementUpdate_main_T *localP)
{
  /* Disable for Product: '<S58>/Product3' incorporates:
   *  Outport: '<S58>/L*(y[k]-yhat[k|k-1])'
   */
  localB->Product3[0] = localP->Lykyhatkk1_Y0;
  localB->Product3[1] = localP->Lykyhatkk1_Y0;
  localDW->MeasurementUpdate_MODE = false;
}

/*
 * Start for enable system:
 *    '<S27>/MeasurementUpdate'
 *    '<S81>/MeasurementUpdate'
 */
void main_MeasurementUpdate_Start(DW_MeasurementUpdate_main_T *localDW)
{
  localDW->MeasurementUpdate_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S27>/MeasurementUpdate'
 *    '<S81>/MeasurementUpdate'
 */
void main_MeasurementUpdate(boolean_T rtu_Enable, const real_T rtu_Lk[4], real_T
  rtu_yk, real_T rtu_yk_d, const real_T rtu_Ck[4], const real_T rtu_xhatkk1[2],
  const real_T rtu_Dk[2], real_T rtu_uk, B_MeasurementUpdate_main_T *localB,
  DW_MeasurementUpdate_main_T *localDW, P_MeasurementUpdate_main_T *localP)
{
  real_T rtu_yk_idx_0;
  real_T rtu_yk_idx_1;

  /* Outputs for Enabled SubSystem: '<S27>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S58>/Enable'
   */
  if (rtu_Enable) {
    localDW->MeasurementUpdate_MODE = true;

    /* Sum: '<S58>/Sum' incorporates:
     *  Product: '<S58>/C[k]*xhat[k|k-1]'
     *  Product: '<S58>/D[k]*u[k]'
     *  Sum: '<S58>/Add1'
     */
    rtu_yk_idx_0 = rtu_yk - ((rtu_Ck[0] * rtu_xhatkk1[0] + rtu_xhatkk1[1] *
      rtu_Ck[2]) + rtu_Dk[0] * rtu_uk);
    rtu_yk_idx_1 = rtu_yk_d - ((rtu_xhatkk1[0] * rtu_Ck[1] + rtu_xhatkk1[1] *
      rtu_Ck[3]) + rtu_Dk[1] * rtu_uk);

    /* Product: '<S58>/Product3' */
    localB->Product3[0] = 0.0;
    localB->Product3[0] += rtu_Lk[0] * rtu_yk_idx_0;
    localB->Product3[0] += rtu_Lk[2] * rtu_yk_idx_1;
    localB->Product3[1] = 0.0;
    localB->Product3[1] += rtu_Lk[1] * rtu_yk_idx_0;
    localB->Product3[1] += rtu_Lk[3] * rtu_yk_idx_1;
  } else if (localDW->MeasurementUpdate_MODE) {
    main_MeasurementUpdate_Disable(localB, localDW, localP);
  }

  /* End of Outputs for SubSystem: '<S27>/MeasurementUpdate' */
}

/*
 * System initialize for enable system:
 *    '<S34>/Enabled Subsystem'
 *    '<S88>/Enabled Subsystem'
 */
void main_EnabledSubsystem_Init(B_EnabledSubsystem_main_T *localB,
  P_EnabledSubsystem_main_T *localP)
{
  /* SystemInitialize for Product: '<S60>/Product2' incorporates:
   *  Outport: '<S60>/deltax'
   */
  localB->Product2[0] = localP->deltax_Y0;
  localB->Product2[1] = localP->deltax_Y0;
}

/*
 * Disable for enable system:
 *    '<S34>/Enabled Subsystem'
 *    '<S88>/Enabled Subsystem'
 */
void main_EnabledSubsystem_Disable(B_EnabledSubsystem_main_T *localB,
  DW_EnabledSubsystem_main_T *localDW, P_EnabledSubsystem_main_T *localP)
{
  /* Disable for Product: '<S60>/Product2' incorporates:
   *  Outport: '<S60>/deltax'
   */
  localB->Product2[0] = localP->deltax_Y0;
  localB->Product2[1] = localP->deltax_Y0;
  localDW->EnabledSubsystem_MODE = false;
}

/*
 * Start for enable system:
 *    '<S34>/Enabled Subsystem'
 *    '<S88>/Enabled Subsystem'
 */
void main_EnabledSubsystem_Start(DW_EnabledSubsystem_main_T *localDW)
{
  localDW->EnabledSubsystem_MODE = false;
}

/*
 * Output and update for enable system:
 *    '<S34>/Enabled Subsystem'
 *    '<S88>/Enabled Subsystem'
 */
void main_EnabledSubsystem(boolean_T rtu_Enable, const real_T rtu_Mk[4], const
  real_T rtu_Ck[4], real_T rtu_yk, real_T rtu_yk_b, const real_T rtu_xhatkk1[2],
  B_EnabledSubsystem_main_T *localB, DW_EnabledSubsystem_main_T *localDW,
  P_EnabledSubsystem_main_T *localP)
{
  real_T rtu_yk_idx_0;
  real_T rtu_yk_idx_1;

  /* Outputs for Enabled SubSystem: '<S34>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S60>/Enable'
   */
  if (rtu_Enable) {
    localDW->EnabledSubsystem_MODE = true;

    /* Sum: '<S60>/Add1' incorporates:
     *  Product: '<S60>/Product'
     */
    rtu_yk_idx_0 = rtu_yk - (rtu_Ck[0] * rtu_xhatkk1[0] + rtu_xhatkk1[1] *
      rtu_Ck[2]);
    rtu_yk_idx_1 = rtu_yk_b - (rtu_xhatkk1[0] * rtu_Ck[1] + rtu_xhatkk1[1] *
      rtu_Ck[3]);

    /* Product: '<S60>/Product2' */
    localB->Product2[0] = 0.0;
    localB->Product2[0] += rtu_Mk[0] * rtu_yk_idx_0;
    localB->Product2[0] += rtu_Mk[2] * rtu_yk_idx_1;
    localB->Product2[1] = 0.0;
    localB->Product2[1] += rtu_Mk[1] * rtu_yk_idx_0;
    localB->Product2[1] += rtu_Mk[3] * rtu_yk_idx_1;
  } else if (localDW->EnabledSubsystem_MODE) {
    main_EnabledSubsystem_Disable(localB, localDW, localP);
  }

  /* End of Outputs for SubSystem: '<S34>/Enabled Subsystem' */
}

/* Model step function */
void main_step(void)
{
  real_T rtb_VectorConcatenate1_idx_3;
  real_T u0;
  int32_T i;
  real32_T rtb_altitude;
  real32_T rtb_phi_measured;
  real32_T rtb_theta_measured;
  real32_T rtb_x;
  real32_T rtb_y;
  real32_T rtb_y_o;
  real32_T rtb_z;

  /* SignalConversion generated from: '<S1>/Bus Selector1' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  for (i = 0; i < 8; i++) {
    main_B.SensorCalibration[i] = sensor_inport.SensorCalibration[i];
  }

  /* End of SignalConversion generated from: '<S1>/Bus Selector1' */

  /* Scope: '<S1>/Scope10' */
  {
    StructLogVar *svar = (StructLogVar *)main_DW.Scope10_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[8];
      (void) memcpy(&up0[0], &main_B.SensorCalibration[0],
                    8*sizeof(real32_T));
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* DiscretePulseGenerator: '<S1>/Pulse Generator1' */
  main_B.rtb_VectorConcatenate1_idx_0 = (main_DW.clockTickCounter <
    main_P.PulseGenerator1_Duty) && (main_DW.clockTickCounter >= 0) ? main_P.W[0]
    : 0.0;
  if (main_DW.clockTickCounter >= main_P.PulseGenerator1_Period - 1.0) {
    main_DW.clockTickCounter = 0;
  } else {
    main_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator1' */

  /* DiscretePulseGenerator: '<S1>/Pulse Generator3' */
  main_B.rtb_VectorConcatenate1_idx_1 = (main_DW.clockTickCounter_h <
    main_P.PulseGenerator3_Duty) && (main_DW.clockTickCounter_h >= 0) ?
    main_P.W[1] : 0.0;
  if (main_DW.clockTickCounter_h >= main_P.PulseGenerator3_Period - 1.0) {
    main_DW.clockTickCounter_h = 0;
  } else {
    main_DW.clockTickCounter_h++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator3' */

  /* DiscretePulseGenerator: '<S1>/Pulse Generator4' */
  main_B.rtb_VectorConcatenate1_idx_2 = (main_DW.clockTickCounter_a <
    main_P.PulseGenerator4_Duty) && (main_DW.clockTickCounter_a >= 0) ?
    main_P.W[2] : 0.0;
  if (main_DW.clockTickCounter_a >= main_P.PulseGenerator4_Period - 1.0) {
    main_DW.clockTickCounter_a = 0;
  } else {
    main_DW.clockTickCounter_a++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator4' */

  /* DiscretePulseGenerator: '<S1>/Pulse Generator2' */
  rtb_VectorConcatenate1_idx_3 = (main_DW.clockTickCounter_n <
    main_P.PulseGenerator2_Duty) && (main_DW.clockTickCounter_n >= 0) ?
    main_P.W[3] : 0.0;
  if (main_DW.clockTickCounter_n >= main_P.PulseGenerator2_Period - 1.0) {
    main_DW.clockTickCounter_n = 0;
  } else {
    main_DW.clockTickCounter_n++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator2' */
  for (i = 0; i < 4; i++) {
    /* Sqrt: '<S1>/Sqrt' incorporates:
     *  Gain: '<S1>/Gain'
     */
    u0 = sqrt(main_P.M[i + 12] * 0.25 * rtb_VectorConcatenate1_idx_3 +
              (main_P.M[i + 8] * 0.25 * main_B.rtb_VectorConcatenate1_idx_2 +
               (main_P.M[i + 4] * 0.25 * main_B.rtb_VectorConcatenate1_idx_1 +
                0.25 * main_P.M[i] * main_B.rtb_VectorConcatenate1_idx_0)));

    /* Saturate: '<S1>/Saturation1' */
    if (u0 > main_P.Saturation1_UpperSat) {
      /* Saturate: '<S1>/Saturation1' incorporates:
       *  Sqrt: '<S1>/Sqrt'
       */
      motors_outport[i] = main_P.Saturation1_UpperSat;
    } else if (u0 < main_P.Saturation1_LowerSat) {
      /* Saturate: '<S1>/Saturation1' incorporates:
       *  Sqrt: '<S1>/Sqrt'
       */
      motors_outport[i] = main_P.Saturation1_LowerSat;
    } else {
      /* Saturate: '<S1>/Saturation1' incorporates:
       *  Sqrt: '<S1>/Sqrt'
       */
      motors_outport[i] = (real32_T)u0;
    }

    /* End of Saturate: '<S1>/Saturation1' */

    /* Outport: '<Root>/Motors' incorporates:
     *  Saturate: '<S1>/Saturation1'
     */
    main_Y.Motors[i] = motors_outport[i];
  }

  /* Scope: '<S1>/Scope' */
  {
    StructLogVar *svar = (StructLogVar *)main_DW.Scope_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main_M->Timing.taskTime0;
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

  /* SignalConversion generated from: '<S6>/Bus Selector1' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  main_B.opticalFlow_data[0] = sensor_inport.VisionSensors.opticalFlow_data[0];
  main_B.opticalFlow_data[1] = sensor_inport.VisionSensors.opticalFlow_data[1];
  main_B.opticalFlow_data[2] = sensor_inport.VisionSensors.opticalFlow_data[2];

  /* Scope: '<S1>/Scope1' */
  {
    StructLogVar *svar = (StructLogVar *)main_DW.Scope1_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = main_B.opticalFlow_data[0];
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Scope: '<S1>/Scope2' */
  {
    StructLogVar *svar = (StructLogVar *)main_DW.Scope2_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = main_B.opticalFlow_data[1];
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Scope: '<S1>/Scope3' */
  {
    StructLogVar *svar = (StructLogVar *)main_DW.Scope3_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = main_B.opticalFlow_data[2];
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* SignalConversion generated from: '<S6>/Bus Selector6' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_altitude = sensor_inport.HALSensors.HAL_ultrasound_SI.altitude;

  /* Product: '<S1>/Product1' incorporates:
   *  Constant: '<S1>/Constant3'
   */
  main_B.rtb_VectorConcatenate1_idx_1 = rtb_altitude * main_P.Constant3_Value;

  /* Product: '<S1>/MatrixMultiply1' */
  main_B.rtb_VectorConcatenate1_idx_0 = main_B.rtb_VectorConcatenate1_idx_1 *
    main_B.opticalFlow_data[0];
  main_B.rtb_VectorConcatenate1_idx_1 *= main_B.opticalFlow_data[1];

  /* SignalConversion generated from: '<S6>/Bus Selector3' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_x = sensor_inport.HALSensors.HAL_acc_SI.x;

  /* SignalConversion generated from: '<S6>/Bus Selector3' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_y = sensor_inport.HALSensors.HAL_acc_SI.y;

  /* SignalConversion generated from: '<S6>/Bus Selector3' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_z = sensor_inport.HALSensors.HAL_acc_SI.z;

  /* MATLAB Function: '<S1>/MATLAB Function' */
  rtb_theta_measured = -rtb_x / (real32_T)sqrt(rtb_y * rtb_y + rtb_z * rtb_z);
  rtb_phi_measured = rtb_y / rtb_z;

  /* Delay: '<S3>/MemoryX' incorporates:
   *  Constant: '<S3>/X0'
   */
  if (main_DW.icLoad) {
    main_DW.MemoryX_DSTATE[0] = main_P.X0_Value[0];
    main_DW.MemoryX_DSTATE[1] = main_P.X0_Value[1];
  }

  /* Outputs for Enabled SubSystem: '<S88>/Enabled Subsystem' */
  /* Constant: '<S3>/Enable' incorporates:
   *  Constant: '<S3>/C'
   *  Constant: '<S61>/KalmanGainM'
   *  DataTypeConversion: '<S1>/Cast To Double5'
   */
  main_EnabledSubsystem(main_P.Enable_Value, main_P.KalmanGainM_Value,
                        main_P.C_Value, main_B.rtb_VectorConcatenate1_idx_0,
                        (real_T)rtb_theta_measured, main_DW.MemoryX_DSTATE,
                        &main_B.EnabledSubsystem_p, &main_DW.EnabledSubsystem_p,
                        &main_P.EnabledSubsystem_p);

  /* End of Outputs for SubSystem: '<S88>/Enabled Subsystem' */

  /* DataTypeConversion: '<S1>/Cast To Single1' incorporates:
   *  Delay: '<S3>/MemoryX'
   *  Sum: '<S88>/Add'
   */
  main_B.CastToSingle2[0] = (real32_T)(main_B.EnabledSubsystem_p.Product2[0] +
    main_DW.MemoryX_DSTATE[0]);
  main_B.CastToSingle2[1] = (real32_T)(main_B.EnabledSubsystem_p.Product2[1] +
    main_DW.MemoryX_DSTATE[1]);

  /* Scope: '<S1>/Scope11' */
  {
    StructLogVar *svar = (StructLogVar *)main_DW.Scope11_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[2];
      up0[0] = main_B.CastToSingle2[0];
      up0[1] = main_B.CastToSingle2[1];
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* SignalConversion generated from: '<S6>/Bus Selector4' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_y_o = sensor_inport.HALSensors.HAL_gyro_SI.y;

  /* Outputs for Enabled SubSystem: '<S81>/MeasurementUpdate' */
  /* Constant: '<S3>/Enable' incorporates:
   *  Constant: '<S3>/C'
   *  Constant: '<S3>/D'
   *  Constant: '<S61>/KalmanGainL'
   *  DataTypeConversion: '<S1>/Cast To Double3'
   *  DataTypeConversion: '<S1>/Cast To Double5'
   */
  main_MeasurementUpdate(main_P.Enable_Value, main_P.KalmanGainL_Value_a,
    main_B.rtb_VectorConcatenate1_idx_0, (real_T)rtb_theta_measured,
    main_P.C_Value, main_DW.MemoryX_DSTATE, main_P.D_Value, (real_T)rtb_y_o,
    &main_B.MeasurementUpdate_h, &main_DW.MeasurementUpdate_h,
    &main_P.MeasurementUpdate_h);

  /* End of Outputs for SubSystem: '<S81>/MeasurementUpdate' */

  /* Delay: '<S2>/MemoryX' incorporates:
   *  Constant: '<S2>/X0'
   */
  if (main_DW.icLoad_g) {
    main_DW.MemoryX_DSTATE_n[0] = main_P.X0_Value_g[0];
    main_DW.MemoryX_DSTATE_n[1] = main_P.X0_Value_g[1];
  }

  /* Outputs for Enabled SubSystem: '<S34>/Enabled Subsystem' */
  /* Constant: '<S2>/Enable' incorporates:
   *  Constant: '<S2>/C'
   *  Constant: '<S7>/KalmanGainM'
   *  DataTypeConversion: '<S1>/Cast To Double1'
   */
  main_EnabledSubsystem(main_P.Enable_Value_n, main_P.KalmanGainM_Value_p,
                        main_P.C_Value_g, main_B.rtb_VectorConcatenate1_idx_1,
                        (real_T)rtb_phi_measured, main_DW.MemoryX_DSTATE_n,
                        &main_B.EnabledSubsystem, &main_DW.EnabledSubsystem,
                        &main_P.EnabledSubsystem);

  /* End of Outputs for SubSystem: '<S34>/Enabled Subsystem' */

  /* DataTypeConversion: '<S1>/Cast To Single' incorporates:
   *  Delay: '<S2>/MemoryX'
   *  Sum: '<S34>/Add'
   */
  main_B.CastToSingle2[0] = (real32_T)(main_B.EnabledSubsystem.Product2[0] +
    main_DW.MemoryX_DSTATE_n[0]);
  main_B.CastToSingle2[1] = (real32_T)(main_B.EnabledSubsystem.Product2[1] +
    main_DW.MemoryX_DSTATE_n[1]);

  /* Scope: '<S1>/Scope14' */
  {
    StructLogVar *svar = (StructLogVar *)main_DW.Scope14_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[2];
      up0[0] = main_B.CastToSingle2[0];
      up0[1] = main_B.CastToSingle2[1];
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* SignalConversion generated from: '<S6>/Bus Selector4' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_theta_measured = sensor_inport.HALSensors.HAL_gyro_SI.x;

  /* DataTypeConversion: '<S1>/Cast To Double2' */
  main_B.rtb_VectorConcatenate1_idx_0 = rtb_theta_measured;

  /* Outputs for Enabled SubSystem: '<S27>/MeasurementUpdate' */
  /* Constant: '<S2>/Enable' incorporates:
   *  Constant: '<S2>/C'
   *  Constant: '<S2>/D'
   *  Constant: '<S7>/KalmanGainL'
   *  DataTypeConversion: '<S1>/Cast To Double1'
   *  DataTypeConversion: '<S1>/Cast To Double2'
   */
  main_MeasurementUpdate(main_P.Enable_Value_n, main_P.KalmanGainL_Value,
    main_B.rtb_VectorConcatenate1_idx_1, (real_T)rtb_phi_measured,
    main_P.C_Value_g, main_DW.MemoryX_DSTATE_n, main_P.D_Value_o, (real_T)
    rtb_theta_measured, &main_B.MeasurementUpdate, &main_DW.MeasurementUpdate,
    &main_P.MeasurementUpdate);

  /* End of Outputs for SubSystem: '<S27>/MeasurementUpdate' */

  /* Delay: '<S4>/MemoryX' incorporates:
   *  Constant: '<S4>/X0'
   */
  if (main_DW.icLoad_b) {
    main_DW.MemoryX_DSTATE_j[0] = main_P.X0_Value_m[0];
    main_DW.MemoryX_DSTATE_j[1] = main_P.X0_Value_m[1];
  }

  /* Outputs for Enabled SubSystem: '<S142>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S168>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S135>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S166>/Enable'
   */
  /* Constant: '<S4>/Enable' */
  if (main_P.Enable_Value_p) {
    main_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S166>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S4>/C'
     *  Delay: '<S4>/MemoryX'
     *  Product: '<S168>/Product'
     */
    main_B.rtb_VectorConcatenate1_idx_1 = main_P.C_Value_j[0] *
      main_DW.MemoryX_DSTATE_j[0] + main_P.C_Value_j[1] *
      main_DW.MemoryX_DSTATE_j[1];

    /* Sum: '<S166>/Sum' incorporates:
     *  Constant: '<S4>/D'
     *  DataTypeConversion: '<S1>/Cast To Double6'
     *  DataTypeConversion: '<S1>/Cast To Double7'
     *  Product: '<S166>/C[k]*xhat[k|k-1]'
     *  Product: '<S166>/D[k]*u[k]'
     *  Sum: '<S166>/Add1'
     */
    main_B.rtb_VectorConcatenate1_idx_2 = rtb_altitude -
      (main_B.rtb_VectorConcatenate1_idx_1 + main_P.D_Value_n * rtb_z);
    main_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S166>/Product3' incorporates:
     *  Constant: '<S115>/KalmanGainL'
     */
    main_B.Product3[0] = main_P.KalmanGainL_Value_h[0] *
      main_B.rtb_VectorConcatenate1_idx_2;
    main_B.Product3[1] = main_P.KalmanGainL_Value_h[1] *
      main_B.rtb_VectorConcatenate1_idx_2;

    /* Sum: '<S168>/Add1' incorporates:
     *  DataTypeConversion: '<S1>/Cast To Double7'
     */
    main_B.rtb_VectorConcatenate1_idx_1 = rtb_altitude -
      main_B.rtb_VectorConcatenate1_idx_1;

    /* Product: '<S168>/Product2' incorporates:
     *  Constant: '<S115>/KalmanGainM'
     */
    main_B.Product2[0] = main_P.KalmanGainM_Value_b[0] *
      main_B.rtb_VectorConcatenate1_idx_1;
    main_B.Product2[1] = main_P.KalmanGainM_Value_b[1] *
      main_B.rtb_VectorConcatenate1_idx_1;
  } else {
    if (main_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S166>/Product3' incorporates:
       *  Outport: '<S166>/L*(y[k]-yhat[k|k-1])'
       */
      main_B.Product3[0] = main_P.Lykyhatkk1_Y0;
      main_B.Product3[1] = main_P.Lykyhatkk1_Y0;
      main_DW.MeasurementUpdate_MODE = false;
    }

    if (main_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S168>/Product2' incorporates:
       *  Outport: '<S168>/deltax'
       */
      main_B.Product2[0] = main_P.deltax_Y0;
      main_B.Product2[1] = main_P.deltax_Y0;
      main_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Constant: '<S4>/Enable' */
  /* End of Outputs for SubSystem: '<S135>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S142>/Enabled Subsystem' */

  /* DataTypeConversion: '<S1>/Cast To Single2' incorporates:
   *  Delay: '<S4>/MemoryX'
   *  Sum: '<S142>/Add'
   */
  main_B.CastToSingle2[0] = (real32_T)(main_B.Product2[0] +
    main_DW.MemoryX_DSTATE_j[0]);
  main_B.CastToSingle2[1] = (real32_T)(main_B.Product2[1] +
    main_DW.MemoryX_DSTATE_j[1]);

  /* Scope: '<S1>/Scope15' */
  {
    StructLogVar *svar = (StructLogVar *)main_DW.Scope15_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[2];
      up0[0] = main_B.CastToSingle2[0];
      up0[1] = main_B.CastToSingle2[1];
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Scope: '<S1>/Scope7' */
  {
    StructLogVar *svar = (StructLogVar *)main_DW.Scope7_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = rtb_theta_measured;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Scope: '<S1>/Scope8' */
  {
    StructLogVar *svar = (StructLogVar *)main_DW.Scope8_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = rtb_y_o;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Scope: '<S1>/Scope6' */
  {
    StructLogVar *svar = (StructLogVar *)main_DW.Scope6_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = rtb_z;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Scope: '<S1>/Scope5' */
  {
    StructLogVar *svar = (StructLogVar *)main_DW.Scope5_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = rtb_y;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Scope: '<S1>/Scope4' */
  {
    StructLogVar *svar = (StructLogVar *)main_DW.Scope4_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = rtb_x;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Scope: '<S1>/Scope13' */
  {
    StructLogVar *svar = (StructLogVar *)main_DW.Scope13_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = rtb_altitude;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* ManualSwitch: '<S1>/Manual Switch' */
  if (main_P.ManualSwitch_CurrentSetting == 1) {
    /* ManualSwitch: '<S1>/Manual Switch' incorporates:
     *  Constant: '<S1>/Constant2'
     */
    flag_outport = main_P.Constant2_Value;
  } else {
    /* ManualSwitch: '<S1>/Manual Switch' incorporates:
     *  Constant: '<S1>/Constant1'
     */
    flag_outport = main_P.Constant1_Value;
  }

  /* End of ManualSwitch: '<S1>/Manual Switch' */

  /* Outport: '<Root>/Flag' */
  main_Y.Flag = flag_outport;

  /* SignalConversion generated from: '<S6>/Bus Selector5' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_theta_measured = sensor_inport.HALSensors.HAL_pressure_SI.pressure;

  /* Scope: '<S1>/Scope12' */
  {
    StructLogVar *svar = (StructLogVar *)main_DW.Scope12_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = rtb_theta_measured;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* SignalConversion generated from: '<S6>/Bus Selector4' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_theta_measured = sensor_inport.HALSensors.HAL_gyro_SI.z;

  /* Scope: '<S1>/Scope9' */
  {
    StructLogVar *svar = (StructLogVar *)main_DW.Scope9_PWORK.LoggedData;
    LogVar *var = svar->signals.values;

    /* time */
    {
      double locTime = main_M->Timing.taskTime0;
      ;
      rt_UpdateLogVar((LogVar *)svar->time, &locTime, 0);
    }

    /* signals */
    {
      real32_T up0[1];
      up0[0] = rtb_theta_measured;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Update for Delay: '<S3>/MemoryX' */
  main_DW.icLoad = false;

  /* Product: '<S81>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S3>/A'
   *  Delay: '<S3>/MemoryX'
   */
  main_B.rtb_VectorConcatenate1_idx_1 = main_P.A_Value_j[0] *
    main_DW.MemoryX_DSTATE[0] + main_DW.MemoryX_DSTATE[1] * main_P.A_Value_j[2];
  main_B.rtb_VectorConcatenate1_idx_2 = main_DW.MemoryX_DSTATE[0] *
    main_P.A_Value_j[1] + main_DW.MemoryX_DSTATE[1] * main_P.A_Value_j[3];

  /* Update for Delay: '<S3>/MemoryX' incorporates:
   *  Constant: '<S3>/B'
   *  DataTypeConversion: '<S1>/Cast To Double3'
   *  Product: '<S112>/Product3'
   *  Product: '<S81>/B[k]*u[k]'
   *  Sum: '<S81>/Add'
   */
  main_DW.MemoryX_DSTATE[0] = (main_P.B_Value[0] * rtb_y_o +
    main_B.rtb_VectorConcatenate1_idx_1) + main_B.MeasurementUpdate_h.Product3[0];
  main_DW.MemoryX_DSTATE[1] = (main_P.B_Value[1] * rtb_y_o +
    main_B.rtb_VectorConcatenate1_idx_2) + main_B.MeasurementUpdate_h.Product3[1];

  /* Update for Delay: '<S2>/MemoryX' */
  main_DW.icLoad_g = false;

  /* Product: '<S27>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S2>/A'
   *  Delay: '<S2>/MemoryX'
   */
  main_B.rtb_VectorConcatenate1_idx_1 = main_P.A_Value[0] *
    main_DW.MemoryX_DSTATE_n[0] + main_DW.MemoryX_DSTATE_n[1] * main_P.A_Value[2];
  main_B.rtb_VectorConcatenate1_idx_2 = main_DW.MemoryX_DSTATE_n[0] *
    main_P.A_Value[1] + main_DW.MemoryX_DSTATE_n[1] * main_P.A_Value[3];

  /* Update for Delay: '<S2>/MemoryX' incorporates:
   *  Constant: '<S2>/B'
   *  Product: '<S27>/B[k]*u[k]'
   *  Product: '<S58>/Product3'
   *  Sum: '<S27>/Add'
   */
  main_DW.MemoryX_DSTATE_n[0] = (main_P.B_Value_c[0] *
    main_B.rtb_VectorConcatenate1_idx_0 + main_B.rtb_VectorConcatenate1_idx_1) +
    main_B.MeasurementUpdate.Product3[0];
  main_DW.MemoryX_DSTATE_n[1] = (main_P.B_Value_c[1] *
    main_B.rtb_VectorConcatenate1_idx_0 + main_B.rtb_VectorConcatenate1_idx_2) +
    main_B.MeasurementUpdate.Product3[1];

  /* Update for Delay: '<S4>/MemoryX' */
  main_DW.icLoad_b = false;

  /* Product: '<S135>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S4>/A'
   *  Delay: '<S4>/MemoryX'
   */
  main_B.rtb_VectorConcatenate1_idx_1 = main_P.A_Value_h[0] *
    main_DW.MemoryX_DSTATE_j[0] + main_DW.MemoryX_DSTATE_j[1] *
    main_P.A_Value_h[2];
  main_B.rtb_VectorConcatenate1_idx_2 = main_DW.MemoryX_DSTATE_j[0] *
    main_P.A_Value_h[1] + main_DW.MemoryX_DSTATE_j[1] * main_P.A_Value_h[3];

  /* Update for Delay: '<S4>/MemoryX' incorporates:
   *  Constant: '<S4>/B'
   *  DataTypeConversion: '<S1>/Cast To Double6'
   *  Product: '<S135>/B[k]*u[k]'
   *  Product: '<S166>/Product3'
   *  Sum: '<S135>/Add'
   */
  main_DW.MemoryX_DSTATE_j[0] = (main_P.B_Value_p[0] * rtb_z +
    main_B.rtb_VectorConcatenate1_idx_1) + main_B.Product3[0];
  main_DW.MemoryX_DSTATE_j[1] = (main_P.B_Value_p[1] * rtb_z +
    main_B.rtb_VectorConcatenate1_idx_2) + main_B.Product3[1];

  /* Matfile logging */
  rt_UpdateTXYLogVars(main_M->rtwLogInfo, (&main_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.005s, 0.0s] */
    if ((rtmGetTFinal(main_M)!=-1) &&
        !((rtmGetTFinal(main_M)-main_M->Timing.taskTime0) >
          main_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(main_M, "Simulation finished");
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
  if (!(++main_M->Timing.clockTick0)) {
    ++main_M->Timing.clockTickH0;
  }

  main_M->Timing.taskTime0 = main_M->Timing.clockTick0 *
    main_M->Timing.stepSize0 + main_M->Timing.clockTickH0 *
    main_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void main_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)main_M, 0,
                sizeof(RT_MODEL_main_T));
  rtmSetTFinal(main_M, 10.0);
  main_M->Timing.stepSize0 = 0.005;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    main_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(main_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(main_M->rtwLogInfo, (NULL));
    rtliSetLogT(main_M->rtwLogInfo, "tout");
    rtliSetLogX(main_M->rtwLogInfo, "");
    rtliSetLogXFinal(main_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(main_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(main_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(main_M->rtwLogInfo, 0);
    rtliSetLogDecimation(main_M->rtwLogInfo, 1);
    rtliSetLogY(main_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(main_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(main_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &main_B), 0,
                sizeof(B_main_T));

  /* exported global signals */
  motors_outport[0] = 0.0F;
  motors_outport[1] = 0.0F;
  motors_outport[2] = 0.0F;
  motors_outport[3] = 0.0F;
  flag_outport = 0U;

  /* states (dwork) */
  (void) memset((void *)&main_DW, 0,
                sizeof(DW_main_T));

  /* external inputs */
  (void)memset(&cmd_inport, 0, sizeof(CommandBus));
  (void)memset(&sensor_inport, 0, sizeof(SensorsBus));

  /* external outputs */
  (void) memset((void *)&main_Y, 0,
                sizeof(ExtY_main_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(main_M->rtwLogInfo, 0.0, rtmGetTFinal(main_M),
    main_M->Timing.stepSize0, (&rtmGetErrorStatus(main_M)));

  /* SetupRuntimeResources for Scope: '<S1>/Scope10' */
  {
    RTWLogSignalInfo rt_ScopeSignalInfo;
    static int_T rt_ScopeSignalWidths[] = { 8 };

    static int_T rt_ScopeSignalNumDimensions[] = { 1 };

    static int_T rt_ScopeSignalDimensions[] = { 8 };

    static void *rt_ScopeCurrSigDims[] = { (NULL) };

    static int_T rt_ScopeCurrSigDimsSize[] = { 4 };

    static const char_T *rt_ScopeSignalLabels[] = { "<SensorCalibration>" };

    static char_T rt_ScopeSignalTitles[] = "<SensorCalibration>";
    static int_T rt_ScopeSignalTitleLengths[] = { 19 };

    static boolean_T rt_ScopeSignalIsVarDims[] = { 0 };

    static int_T rt_ScopeSignalPlotStyles[] = { 1, 1, 1, 1, 1, 1, 1, 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] = "main/Flight Control System/Scope10";
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
    main_DW.Scope10_PWORK.LoggedData = rt_CreateStructLogVar(
      main_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main_M),
      main_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main_M)),
      "ScopeData4",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main_DW.Scope10_PWORK.LoggedData == (NULL))
      return;
  }

  /* SetupRuntimeResources for Scope: '<S1>/Scope' */
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

    static int_T rt_ScopeSignalPlotStyles[] = { 1, 1, 1, 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] = "main/Flight Control System/Scope";
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
    main_DW.Scope_PWORK.LoggedData = rt_CreateStructLogVar(
      main_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main_M),
      main_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main_M)),
      "motor_speeds",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main_DW.Scope_PWORK.LoggedData == (NULL))
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

    static int_T rt_ScopeSignalPlotStyles[] = { 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] = "main/Flight Control System/Scope1";
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
    main_DW.Scope1_PWORK.LoggedData = rt_CreateStructLogVar(
      main_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main_M),
      main_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main_M)),
      "u",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main_DW.Scope1_PWORK.LoggedData == (NULL))
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

    static int_T rt_ScopeSignalPlotStyles[] = { 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] = "main/Flight Control System/Scope2";
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
    main_DW.Scope2_PWORK.LoggedData = rt_CreateStructLogVar(
      main_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main_M),
      main_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main_M)),
      "v",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main_DW.Scope2_PWORK.LoggedData == (NULL))
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

    static int_T rt_ScopeSignalPlotStyles[] = { 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] = "main/Flight Control System/Scope3";
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
    main_DW.Scope3_PWORK.LoggedData = rt_CreateStructLogVar(
      main_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main_M),
      main_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main_M)),
      "w",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main_DW.Scope3_PWORK.LoggedData == (NULL))
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

    static char_T rt_ScopeBlockName[] = "main/Flight Control System/Scope11";
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
    main_DW.Scope11_PWORK.LoggedData = rt_CreateStructLogVar(
      main_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main_M),
      main_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main_M)),
      "xhat_elevator",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main_DW.Scope11_PWORK.LoggedData == (NULL))
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

    static char_T rt_ScopeBlockName[] = "main/Flight Control System/Scope14";
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
    main_DW.Scope14_PWORK.LoggedData = rt_CreateStructLogVar(
      main_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main_M),
      main_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main_M)),
      "xhat_aileron",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main_DW.Scope14_PWORK.LoggedData == (NULL))
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

    static char_T rt_ScopeBlockName[] = "main/Flight Control System/Scope15";
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
    main_DW.Scope15_PWORK.LoggedData = rt_CreateStructLogVar(
      main_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main_M),
      main_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main_M)),
      "xhat_throttle",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main_DW.Scope15_PWORK.LoggedData == (NULL))
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

    static int_T rt_ScopeSignalPlotStyles[] = { 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] = "main/Flight Control System/Scope7";
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
    main_DW.Scope7_PWORK.LoggedData = rt_CreateStructLogVar(
      main_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main_M),
      main_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main_M)),
      "p",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main_DW.Scope7_PWORK.LoggedData == (NULL))
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

    static int_T rt_ScopeSignalPlotStyles[] = { 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] = "main/Flight Control System/Scope8";
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
    main_DW.Scope8_PWORK.LoggedData = rt_CreateStructLogVar(
      main_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main_M),
      main_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main_M)),
      "q",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main_DW.Scope8_PWORK.LoggedData == (NULL))
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

    static int_T rt_ScopeSignalPlotStyles[] = { 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] = "main/Flight Control System/Scope6";
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
    main_DW.Scope6_PWORK.LoggedData = rt_CreateStructLogVar(
      main_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main_M),
      main_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main_M)),
      "a_z",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main_DW.Scope6_PWORK.LoggedData == (NULL))
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

    static int_T rt_ScopeSignalPlotStyles[] = { 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] = "main/Flight Control System/Scope5";
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
    main_DW.Scope5_PWORK.LoggedData = rt_CreateStructLogVar(
      main_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main_M),
      main_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main_M)),
      "a_y",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main_DW.Scope5_PWORK.LoggedData == (NULL))
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

    static int_T rt_ScopeSignalPlotStyles[] = { 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] = "main/Flight Control System/Scope4";
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
    main_DW.Scope4_PWORK.LoggedData = rt_CreateStructLogVar(
      main_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main_M),
      main_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main_M)),
      "a_x",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main_DW.Scope4_PWORK.LoggedData == (NULL))
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

    static int_T rt_ScopeSignalPlotStyles[] = { 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] = "main/Flight Control System/Scope13";
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
    main_DW.Scope13_PWORK.LoggedData = rt_CreateStructLogVar(
      main_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main_M),
      main_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main_M)),
      "z_ultrasonic",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main_DW.Scope13_PWORK.LoggedData == (NULL))
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

    static int_T rt_ScopeSignalPlotStyles[] = { 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] = "main/Flight Control System/Scope12";
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
    main_DW.Scope12_PWORK.LoggedData = rt_CreateStructLogVar(
      main_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main_M),
      main_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main_M)),
      "pressure",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main_DW.Scope12_PWORK.LoggedData == (NULL))
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

    static int_T rt_ScopeSignalPlotStyles[] = { 1 };

    BuiltInDTypeId dTypes[1] = { SS_SINGLE };

    static char_T rt_ScopeBlockName[] = "main/Flight Control System/Scope9";
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
    main_DW.Scope9_PWORK.LoggedData = rt_CreateStructLogVar(
      main_M->rtwLogInfo,
      0.0,
      rtmGetTFinal(main_M),
      main_M->Timing.stepSize0,
      (&rtmGetErrorStatus(main_M)),
      "r",
      1,
      0,
      1,
      0.005,
      &rt_ScopeSignalInfo,
      rt_ScopeBlockName);
    if (main_DW.Scope9_PWORK.LoggedData == (NULL))
      return;
  }

  /* Start for Enabled SubSystem: '<S88>/Enabled Subsystem' */
  main_EnabledSubsystem_Start(&main_DW.EnabledSubsystem_p);

  /* End of Start for SubSystem: '<S88>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S81>/MeasurementUpdate' */
  main_MeasurementUpdate_Start(&main_DW.MeasurementUpdate_h);

  /* End of Start for SubSystem: '<S81>/MeasurementUpdate' */

  /* Start for Enabled SubSystem: '<S34>/Enabled Subsystem' */
  main_EnabledSubsystem_Start(&main_DW.EnabledSubsystem);

  /* End of Start for SubSystem: '<S34>/Enabled Subsystem' */

  /* Start for Enabled SubSystem: '<S27>/MeasurementUpdate' */
  main_MeasurementUpdate_Start(&main_DW.MeasurementUpdate);

  /* End of Start for SubSystem: '<S27>/MeasurementUpdate' */

  /* Start for Enabled SubSystem: '<S135>/MeasurementUpdate' */
  main_DW.MeasurementUpdate_MODE = false;

  /* End of Start for SubSystem: '<S135>/MeasurementUpdate' */

  /* Start for Enabled SubSystem: '<S142>/Enabled Subsystem' */
  main_DW.EnabledSubsystem_MODE = false;

  /* End of Start for SubSystem: '<S142>/Enabled Subsystem' */

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator1' */
  main_DW.clockTickCounter = 0;

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator3' */
  main_DW.clockTickCounter_h = -400;

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator4' */
  main_DW.clockTickCounter_a = -800;

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator2' */
  main_DW.clockTickCounter_n = -1200;

  /* InitializeConditions for Delay: '<S3>/MemoryX' */
  main_DW.icLoad = true;

  /* InitializeConditions for Delay: '<S2>/MemoryX' */
  main_DW.icLoad_g = true;

  /* InitializeConditions for Delay: '<S4>/MemoryX' */
  main_DW.icLoad_b = true;

  /* SystemInitialize for Enabled SubSystem: '<S88>/Enabled Subsystem' */
  main_EnabledSubsystem_Init(&main_B.EnabledSubsystem_p,
    &main_P.EnabledSubsystem_p);

  /* End of SystemInitialize for SubSystem: '<S88>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S81>/MeasurementUpdate' */
  main_MeasurementUpdate_Init(&main_B.MeasurementUpdate_h,
    &main_P.MeasurementUpdate_h);

  /* End of SystemInitialize for SubSystem: '<S81>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S34>/Enabled Subsystem' */
  main_EnabledSubsystem_Init(&main_B.EnabledSubsystem, &main_P.EnabledSubsystem);

  /* End of SystemInitialize for SubSystem: '<S34>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S27>/MeasurementUpdate' */
  main_MeasurementUpdate_Init(&main_B.MeasurementUpdate,
    &main_P.MeasurementUpdate);

  /* End of SystemInitialize for SubSystem: '<S27>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S135>/MeasurementUpdate' */
  /* SystemInitialize for Product: '<S166>/Product3' incorporates:
   *  Outport: '<S166>/L*(y[k]-yhat[k|k-1])'
   */
  main_B.Product3[0] = main_P.Lykyhatkk1_Y0;

  /* End of SystemInitialize for SubSystem: '<S135>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S142>/Enabled Subsystem' */
  /* SystemInitialize for Product: '<S168>/Product2' incorporates:
   *  Outport: '<S168>/deltax'
   */
  main_B.Product2[0] = main_P.deltax_Y0;

  /* End of SystemInitialize for SubSystem: '<S142>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S135>/MeasurementUpdate' */
  /* SystemInitialize for Product: '<S166>/Product3' incorporates:
   *  Outport: '<S166>/L*(y[k]-yhat[k|k-1])'
   */
  main_B.Product3[1] = main_P.Lykyhatkk1_Y0;

  /* End of SystemInitialize for SubSystem: '<S135>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S142>/Enabled Subsystem' */
  /* SystemInitialize for Product: '<S168>/Product2' incorporates:
   *  Outport: '<S168>/deltax'
   */
  main_B.Product2[1] = main_P.deltax_Y0;

  /* End of SystemInitialize for SubSystem: '<S142>/Enabled Subsystem' */
}

/* Model terminate function */
void main_terminate(void)
{
  /* (no terminate code required) */
}
