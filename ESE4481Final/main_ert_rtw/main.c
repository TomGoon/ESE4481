/*
 * main.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "main".
 *
 * Model version              : 1.4
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Mon Nov 29 16:16:52 2021
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

/* Model step function */
void main_step(void)
{
  real_T rtb_Sqrt_idx_0;
  real_T rtb_Sqrt_idx_1;
  real_T rtb_Sqrt_idx_2;
  real_T rtb_Sqrt_idx_3;
  int32_T i;
  real32_T rtb_Add_f[2];
  real32_T rtb_Add_idx_1;
  real32_T rtb_Sum;
  real32_T rtb_altitude;
  real32_T rtb_z;
  real32_T rtb_z_k;

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
  rtb_Sqrt_idx_0 = (main_DW.clockTickCounter < main_P.PulseGenerator1_Duty) &&
    (main_DW.clockTickCounter >= 0) ? main_P.W[0] : 0.0;
  if (main_DW.clockTickCounter >= main_P.PulseGenerator1_Period - 1.0) {
    main_DW.clockTickCounter = 0;
  } else {
    main_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator1' */

  /* DiscretePulseGenerator: '<S1>/Pulse Generator3' */
  rtb_Sqrt_idx_1 = (main_DW.clockTickCounter_h < main_P.PulseGenerator3_Duty) &&
    (main_DW.clockTickCounter_h >= 0) ? main_P.W[1] : 0.0;
  if (main_DW.clockTickCounter_h >= main_P.PulseGenerator3_Period - 1.0) {
    main_DW.clockTickCounter_h = 0;
  } else {
    main_DW.clockTickCounter_h++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator3' */

  /* DiscretePulseGenerator: '<S1>/Pulse Generator4' */
  rtb_Sqrt_idx_2 = (main_DW.clockTickCounter_a < main_P.PulseGenerator4_Duty) &&
    (main_DW.clockTickCounter_a >= 0) ? main_P.W[2] : 0.0;
  if (main_DW.clockTickCounter_a >= main_P.PulseGenerator4_Period - 1.0) {
    main_DW.clockTickCounter_a = 0;
  } else {
    main_DW.clockTickCounter_a++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator4' */

  /* DiscretePulseGenerator: '<S1>/Pulse Generator2' */
  rtb_Sqrt_idx_3 = (main_DW.clockTickCounter_n < main_P.PulseGenerator2_Duty) &&
    (main_DW.clockTickCounter_n >= 0) ? main_P.W[3] : 0.0;
  if (main_DW.clockTickCounter_n >= main_P.PulseGenerator2_Period - 1.0) {
    main_DW.clockTickCounter_n = 0;
  } else {
    main_DW.clockTickCounter_n++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator2' */

  /* Gain: '<S1>/Gain' */
  main_B.d = 0.25 * main_P.M;

  /* Sqrt: '<S1>/Sqrt' incorporates:
   *  Gain: '<S1>/Gain'
   */
  rtb_Sqrt_idx_0 = sqrt(main_B.d * rtb_Sqrt_idx_0);

  /* Saturate: '<S1>/Saturation1' */
  if (rtb_Sqrt_idx_0 > main_P.Saturation1_UpperSat) {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[0] = main_P.Saturation1_UpperSat;
  } else if (rtb_Sqrt_idx_0 < main_P.Saturation1_LowerSat) {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[0] = main_P.Saturation1_LowerSat;
  } else {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[0] = (real32_T)rtb_Sqrt_idx_0;
  }

  /* Outport: '<Root>/Motors' incorporates:
   *  Saturate: '<S1>/Saturation1'
   */
  main_Y.Motors[0] = motors_outport[0];

  /* Sqrt: '<S1>/Sqrt' incorporates:
   *  Gain: '<S1>/Gain'
   */
  rtb_Sqrt_idx_0 = sqrt(main_B.d * rtb_Sqrt_idx_1);

  /* Saturate: '<S1>/Saturation1' */
  if (rtb_Sqrt_idx_0 > main_P.Saturation1_UpperSat) {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[1] = main_P.Saturation1_UpperSat;
  } else if (rtb_Sqrt_idx_0 < main_P.Saturation1_LowerSat) {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[1] = main_P.Saturation1_LowerSat;
  } else {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[1] = (real32_T)rtb_Sqrt_idx_0;
  }

  /* Outport: '<Root>/Motors' incorporates:
   *  Saturate: '<S1>/Saturation1'
   */
  main_Y.Motors[1] = motors_outport[1];

  /* Sqrt: '<S1>/Sqrt' incorporates:
   *  Gain: '<S1>/Gain'
   */
  rtb_Sqrt_idx_0 = sqrt(main_B.d * rtb_Sqrt_idx_2);

  /* Saturate: '<S1>/Saturation1' */
  if (rtb_Sqrt_idx_0 > main_P.Saturation1_UpperSat) {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[2] = main_P.Saturation1_UpperSat;
  } else if (rtb_Sqrt_idx_0 < main_P.Saturation1_LowerSat) {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[2] = main_P.Saturation1_LowerSat;
  } else {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[2] = (real32_T)rtb_Sqrt_idx_0;
  }

  /* Outport: '<Root>/Motors' incorporates:
   *  Saturate: '<S1>/Saturation1'
   */
  main_Y.Motors[2] = motors_outport[2];

  /* Sqrt: '<S1>/Sqrt' incorporates:
   *  Gain: '<S1>/Gain'
   */
  rtb_Sqrt_idx_0 = sqrt(main_B.d * rtb_Sqrt_idx_3);

  /* Saturate: '<S1>/Saturation1' */
  if (rtb_Sqrt_idx_0 > main_P.Saturation1_UpperSat) {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[3] = main_P.Saturation1_UpperSat;
  } else if (rtb_Sqrt_idx_0 < main_P.Saturation1_LowerSat) {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[3] = main_P.Saturation1_LowerSat;
  } else {
    /* Saturate: '<S1>/Saturation1' */
    motors_outport[3] = (real32_T)rtb_Sqrt_idx_0;
  }

  /* Outport: '<Root>/Motors' incorporates:
   *  Saturate: '<S1>/Saturation1'
   */
  main_Y.Motors[3] = motors_outport[3];

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

  /* Delay: '<S2>/MemoryX' incorporates:
   *  Constant: '<S2>/X0'
   */
  if (main_DW.icLoad) {
    main_DW.MemoryX_DSTATE[0] = main_P.X0_Value[0];
    main_DW.MemoryX_DSTATE[1] = main_P.X0_Value[1];
  }

  /* SignalConversion generated from: '<S4>/Bus Selector3' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_z = sensor_inport.HALSensors.HAL_acc_SI.z;

  /* Product: '<S25>/B[k]*u[k]' incorporates:
   *  Constant: '<S2>/B'
   *  Sum: '<S32>/Add'
   */
  rtb_Add_f[0] = main_P.B_Value[0] * rtb_z;
  rtb_Add_f[1] = main_P.B_Value[1] * rtb_z;

  /* SignalConversion generated from: '<S4>/Bus Selector6' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_altitude = sensor_inport.HALSensors.HAL_ultrasound_SI.altitude;

  /* Outputs for Enabled SubSystem: '<S25>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S56>/Enable'
   */
  /* Constant: '<S2>/Enable' */
  if (main_P.Enable_Value) {
    main_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S56>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S2>/C'
     *  Delay: '<S2>/MemoryX'
     */
    rtb_z_k = main_P.C_Value[0] * main_DW.MemoryX_DSTATE[0] + main_P.C_Value[1] *
      main_DW.MemoryX_DSTATE[1];

    /* Sum: '<S56>/Sum' incorporates:
     *  Constant: '<S2>/D'
     *  Product: '<S56>/D[k]*u[k]'
     *  Sum: '<S56>/Add1'
     */
    rtb_Sum = rtb_altitude - (main_P.D_Value * rtb_z + rtb_z_k);

    /* Product: '<S56>/Product3' incorporates:
     *  Constant: '<S5>/KalmanGainL'
     */
    main_B.Product3[0] = main_P.KalmanGainL_Value[0] * rtb_Sum;
    main_B.Product3[1] = main_P.KalmanGainL_Value[1] * rtb_Sum;
  } else if (main_DW.MeasurementUpdate_MODE) {
    /* Disable for Product: '<S56>/Product3' incorporates:
     *  Outport: '<S56>/L*(y[k]-yhat[k|k-1])'
     */
    main_B.Product3[0] = main_P.Lykyhatkk1_Y0;
    main_B.Product3[1] = main_P.Lykyhatkk1_Y0;
    main_DW.MeasurementUpdate_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S25>/MeasurementUpdate' */

  /* Sum: '<S25>/Add' incorporates:
   *  Constant: '<S2>/A'
   *  Delay: '<S2>/MemoryX'
   *  Product: '<S25>/A[k]*xhat[k|k-1]'
   *  Product: '<S56>/Product3'
   *  Sum: '<S32>/Add'
   */
  rtb_Sum = ((main_P.A_Value[0] * main_DW.MemoryX_DSTATE[0] +
              main_DW.MemoryX_DSTATE[1] * main_P.A_Value[2]) + rtb_Add_f[0]) +
    main_B.Product3[0];
  rtb_Add_idx_1 = ((main_DW.MemoryX_DSTATE[0] * main_P.A_Value[1] +
                    main_DW.MemoryX_DSTATE[1] * main_P.A_Value[3]) + rtb_Add_f[1])
    + main_B.Product3[1];

  /* Outputs for Enabled SubSystem: '<S32>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S58>/Enable'
   */
  /* Constant: '<S2>/Enable' */
  if (main_P.Enable_Value) {
    main_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S58>/Product' incorporates:
     *  Constant: '<S2>/C'
     *  Delay: '<S2>/MemoryX'
     */
    rtb_z_k = main_P.C_Value[0] * main_DW.MemoryX_DSTATE[0] + main_P.C_Value[1] *
      main_DW.MemoryX_DSTATE[1];

    /* Sum: '<S58>/Add1' */
    rtb_z_k = rtb_altitude - rtb_z_k;

    /* Product: '<S58>/Product2' incorporates:
     *  Constant: '<S5>/KalmanGainM'
     */
    main_B.Product2[0] = main_P.KalmanGainM_Value[0] * rtb_z_k;
    main_B.Product2[1] = main_P.KalmanGainM_Value[1] * rtb_z_k;
  } else if (main_DW.EnabledSubsystem_MODE) {
    /* Disable for Product: '<S58>/Product2' incorporates:
     *  Outport: '<S58>/deltax'
     */
    main_B.Product2[0] = main_P.deltax_Y0;
    main_B.Product2[1] = main_P.deltax_Y0;
    main_DW.EnabledSubsystem_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S32>/Enabled Subsystem' */

  /* Sum: '<S32>/Add' incorporates:
   *  Delay: '<S2>/MemoryX'
   */
  rtb_Add_f[0] = main_B.Product2[0] + main_DW.MemoryX_DSTATE[0];
  rtb_Add_f[1] = main_B.Product2[1] + main_DW.MemoryX_DSTATE[1];

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

  /* SignalConversion generated from: '<S4>/Bus Selector3' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_z = sensor_inport.HALSensors.HAL_acc_SI.x;

  /* SignalConversion generated from: '<S4>/Bus Selector3' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_altitude = sensor_inport.HALSensors.HAL_acc_SI.y;

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
      up0[0] = rtb_altitude;
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
      up0[0] = rtb_z;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* SignalConversion generated from: '<S4>/Bus Selector1' incorporates:
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

  /* SignalConversion generated from: '<S4>/Bus Selector5' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_z_k = sensor_inport.HALSensors.HAL_pressure_SI.pressure;

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
      up0[0] = rtb_z_k;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* SignalConversion generated from: '<S4>/Bus Selector4' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_z_k = sensor_inport.HALSensors.HAL_gyro_SI.x;

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
      up0[0] = rtb_z_k;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* SignalConversion generated from: '<S4>/Bus Selector4' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_z_k = sensor_inport.HALSensors.HAL_gyro_SI.y;

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
      up0[0] = rtb_z_k;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* SignalConversion generated from: '<S4>/Bus Selector4' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_z_k = sensor_inport.HALSensors.HAL_gyro_SI.z;

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
      up0[0] = rtb_z_k;
      rt_UpdateLogVar((LogVar *)var, up0, 0);
    }
  }

  /* Update for Delay: '<S2>/MemoryX' */
  main_DW.icLoad = false;
  main_DW.MemoryX_DSTATE[0] = rtb_Sum;
  main_DW.MemoryX_DSTATE[1] = rtb_Add_idx_1;

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

  /* Start for Enabled SubSystem: '<S25>/MeasurementUpdate' */
  main_DW.MeasurementUpdate_MODE = false;

  /* End of Start for SubSystem: '<S25>/MeasurementUpdate' */

  /* Start for Enabled SubSystem: '<S32>/Enabled Subsystem' */
  main_DW.EnabledSubsystem_MODE = false;

  /* End of Start for SubSystem: '<S32>/Enabled Subsystem' */

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator1' */
  main_DW.clockTickCounter = 0;

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator3' */
  main_DW.clockTickCounter_h = -400;

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator4' */
  main_DW.clockTickCounter_a = -800;

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator2' */
  main_DW.clockTickCounter_n = -1200;

  /* InitializeConditions for Delay: '<S2>/MemoryX' */
  main_DW.icLoad = true;

  /* SystemInitialize for Enabled SubSystem: '<S25>/MeasurementUpdate' */
  /* SystemInitialize for Product: '<S56>/Product3' incorporates:
   *  Outport: '<S56>/L*(y[k]-yhat[k|k-1])'
   */
  main_B.Product3[0] = main_P.Lykyhatkk1_Y0;

  /* End of SystemInitialize for SubSystem: '<S25>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S32>/Enabled Subsystem' */
  /* SystemInitialize for Product: '<S58>/Product2' incorporates:
   *  Outport: '<S58>/deltax'
   */
  main_B.Product2[0] = main_P.deltax_Y0;

  /* End of SystemInitialize for SubSystem: '<S32>/Enabled Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<S25>/MeasurementUpdate' */
  /* SystemInitialize for Product: '<S56>/Product3' incorporates:
   *  Outport: '<S56>/L*(y[k]-yhat[k|k-1])'
   */
  main_B.Product3[1] = main_P.Lykyhatkk1_Y0;

  /* End of SystemInitialize for SubSystem: '<S25>/MeasurementUpdate' */

  /* SystemInitialize for Enabled SubSystem: '<S32>/Enabled Subsystem' */
  /* SystemInitialize for Product: '<S58>/Product2' incorporates:
   *  Outport: '<S58>/deltax'
   */
  main_B.Product2[1] = main_P.deltax_Y0;

  /* End of SystemInitialize for SubSystem: '<S32>/Enabled Subsystem' */
}

/* Model terminate function */
void main_terminate(void)
{
  /* (no terminate code required) */
}
