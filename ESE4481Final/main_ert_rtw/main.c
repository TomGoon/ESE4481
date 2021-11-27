/*
 * main.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "main".
 *
 * Model version              : 1.2
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Sat Nov 27 13:16:06 2021
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

/* Real-time model */
static RT_MODEL_main_T main_M_;
RT_MODEL_main_T *const main_M = &main_M_;

/* Model step function */
void main_step(void)
{
  real_T rtb_VectorConcatenate1_idx_0;
  real_T rtb_VectorConcatenate1_idx_1;
  real_T rtb_VectorConcatenate1_idx_2;
  real_T rtb_VectorConcatenate1_idx_3;
  real_T u0;
  int32_T i;
  real32_T rtb_opticalFlow_data[3];
  real32_T rtb_altitude;

  /* SignalConversion generated from: '<S1>/Bus Selector1' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  for (i = 0; i < 8; i++) {
    main_B.SensorCalibration[i] = sensor_inport.SensorCalibration[i];
  }

  /* End of SignalConversion generated from: '<S1>/Bus Selector1' */
  /* DiscretePulseGenerator: '<S1>/Pulse Generator1' */
  rtb_VectorConcatenate1_idx_0 = (main_DW.clockTickCounter <
    main_P.PulseGenerator1_Duty) && (main_DW.clockTickCounter >= 0) ? main_P.W[0]
    : 0.0;
  if (main_DW.clockTickCounter >= main_P.PulseGenerator1_Period - 1.0) {
    main_DW.clockTickCounter = 0;
  } else {
    main_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator1' */

  /* DiscretePulseGenerator: '<S1>/Pulse Generator3' */
  rtb_VectorConcatenate1_idx_1 = (main_DW.clockTickCounter_h <
    main_P.PulseGenerator3_Duty) && (main_DW.clockTickCounter_h >= 0) ?
    main_P.W[1] : 0.0;
  if (main_DW.clockTickCounter_h >= main_P.PulseGenerator3_Period - 1.0) {
    main_DW.clockTickCounter_h = 0;
  } else {
    main_DW.clockTickCounter_h++;
  }

  /* End of DiscretePulseGenerator: '<S1>/Pulse Generator3' */

  /* DiscretePulseGenerator: '<S1>/Pulse Generator4' */
  rtb_VectorConcatenate1_idx_2 = (main_DW.clockTickCounter_a <
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
              (main_P.M[i + 8] * 0.25 * rtb_VectorConcatenate1_idx_2 +
               (main_P.M[i + 4] * 0.25 * rtb_VectorConcatenate1_idx_1 + 0.25 *
                main_P.M[i] * rtb_VectorConcatenate1_idx_0)));

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
  }

  /* SignalConversion generated from: '<S2>/Bus Selector1' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_opticalFlow_data[0] = sensor_inport.VisionSensors.opticalFlow_data[0];
  rtb_opticalFlow_data[1] = sensor_inport.VisionSensors.opticalFlow_data[1];
  rtb_opticalFlow_data[2] = sensor_inport.VisionSensors.opticalFlow_data[2];

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

  /* SignalConversion generated from: '<S2>/Bus Selector3' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_altitude = sensor_inport.HALSensors.HAL_acc_SI.x;

  /* SignalConversion generated from: '<S2>/Bus Selector3' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_altitude = sensor_inport.HALSensors.HAL_acc_SI.y;

  /* SignalConversion generated from: '<S2>/Bus Selector3' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_altitude = sensor_inport.HALSensors.HAL_acc_SI.z;

  /* SignalConversion generated from: '<S2>/Bus Selector4' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_altitude = sensor_inport.HALSensors.HAL_gyro_SI.x;

  /* SignalConversion generated from: '<S2>/Bus Selector4' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_altitude = sensor_inport.HALSensors.HAL_gyro_SI.y;

  /* SignalConversion generated from: '<S2>/Bus Selector4' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_altitude = sensor_inport.HALSensors.HAL_gyro_SI.z;

  /* SignalConversion generated from: '<S2>/Bus Selector5' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_altitude = sensor_inport.HALSensors.HAL_pressure_SI.pressure;

  /* SignalConversion generated from: '<S2>/Bus Selector6' incorporates:
   *  Inport: '<Root>/Sensors'
   */
  rtb_altitude = sensor_inport.HALSensors.HAL_ultrasound_SI.altitude;
}

/* Model initialize function */
void main_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(main_M, (NULL));

  /* block I/O */

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

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator1' */
  main_DW.clockTickCounter = 0;

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator3' */
  main_DW.clockTickCounter_h = -400;

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator4' */
  main_DW.clockTickCounter_a = -800;

  /* InitializeConditions for DiscretePulseGenerator: '<S1>/Pulse Generator2' */
  main_DW.clockTickCounter_n = -1200;
}

/* Model terminate function */
void main_terminate(void)
{
  /* (no terminate code required) */
}
