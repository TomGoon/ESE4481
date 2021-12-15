/*
 * final_project_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "final_project".
 *
 * Model version              : 1.16
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Tue Dec 14 18:20:11 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 9
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(void*),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(CommandBus),
  sizeof(extraSensorData_t),
  sizeof(HAL_acc_SI_t),
  sizeof(HAL_gyro_SI_t),
  sizeof(HAL_fifo_gyro_SI_t),
  sizeof(HAL_magn_mG_t),
  sizeof(HAL_pressure_SI_t),
  sizeof(HAL_echo_t),
  sizeof(HAL_list_echo_t),
  sizeof(HAL_ultrasound_SI_t),
  sizeof(HAL_vbat_SI_t),
  sizeof(HAL_acquisition_t),
  sizeof(SensorsBus)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "CommandBus",
  "extraSensorData_t",
  "HAL_acc_SI_t",
  "HAL_gyro_SI_t",
  "HAL_fifo_gyro_SI_t",
  "HAL_magn_mG_t",
  "HAL_pressure_SI_t",
  "HAL_echo_t",
  "HAL_list_echo_t",
  "HAL_ultrasound_SI_t",
  "HAL_vbat_SI_t",
  "HAL_acquisition_t",
  "SensorsBus"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&final_project_B.Divide3), 0, 0, 13 },

  { (char_T *)(&final_project_B.CastToSingle1[0]), 1, 0, 32 },

  { (char_T *)(&final_project_B.EnabledSubsystem_g.Product2[0]), 0, 0, 2 },

  { (char_T *)(&final_project_B.MeasurementUpdate_f.Product3[0]), 0, 0, 2 },

  { (char_T *)(&final_project_B.EnabledSubsystem.Product2[0]), 0, 0, 2 },

  { (char_T *)(&final_project_B.MeasurementUpdate.Product3[0]), 0, 0, 2 }
  ,

  { (char_T *)(&motors_outport[0]), 1, 0, 4 }
  ,

  { (char_T *)(&flag_outport), 3, 0, 1 }
  ,

  { (char_T *)(&final_project_DW.MemoryX_DSTATE[0]), 0, 0, 14 },

  { (char_T *)(&final_project_DW.Scope15_PWORK.LoggedData), 11, 0, 16 },

  { (char_T *)(&final_project_DW.EnabledSubsystem_SubsysRanBC), 2, 0, 2 },

  { (char_T *)(&final_project_DW.icLoad), 8, 0, 5 },

  { (char_T *)(&final_project_DW.EnabledSubsystem_g.EnabledSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&final_project_DW.EnabledSubsystem_g.EnabledSubsystem_MODE), 8, 0,
    1 },

  { (char_T *)
    (&final_project_DW.MeasurementUpdate_f.MeasurementUpdate_SubsysRanBC), 2, 0,
    1 },

  { (char_T *)(&final_project_DW.MeasurementUpdate_f.MeasurementUpdate_MODE), 8,
    0, 1 },

  { (char_T *)(&final_project_DW.EnabledSubsystem.EnabledSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&final_project_DW.EnabledSubsystem.EnabledSubsystem_MODE), 8, 0,
    1 },

  { (char_T *)(&final_project_DW.MeasurementUpdate.MeasurementUpdate_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&final_project_DW.MeasurementUpdate.MeasurementUpdate_MODE), 8, 0,
    1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  20U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&final_project_P.F_aileron), 0, 0, 132 },

  { (char_T *)(&final_project_P.Multiply2_Gain), 1, 0, 12 },

  { (char_T *)(&final_project_P.Enable_Value), 8, 0, 6 },

  { (char_T *)(&final_project_P.Constant2_Value), 3, 0, 3 },

  { (char_T *)(&final_project_P.EnabledSubsystem_g.deltax_Y0), 0, 0, 1 },

  { (char_T *)(&final_project_P.MeasurementUpdate_f.Lykyhatkk1_Y0), 0, 0, 1 },

  { (char_T *)(&final_project_P.EnabledSubsystem.deltax_Y0), 0, 0, 1 },

  { (char_T *)(&final_project_P.MeasurementUpdate.Lykyhatkk1_Y0), 0, 0, 1 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  8U,
  rtPTransitions
};

/* [EOF] final_project_dt.h */
