/*
 * SCARA_215_data.c
 *
 * Code generation for model "SCARA_215".
 *
 * Model version              : 1.9
 * Simulink Coder version : 8.8 (R2015a) 09-Feb-2015
 * C source code generated on : Mon Mar 26 09:20:08 2018
 *
 * Target selection: rti1104.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SCARA_215.h"
#include "SCARA_215_private.h"

/* Block parameters (auto storage) */
P_SCARA_215_T SCARA_215_P = {
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Constant2'
                                        */
  -0.005625,                           /* Expression: (-2*180)/(500*128)
                                        * Referenced by: '<Root>/Gain3'
                                        */
  0.2,                                 /* Expression: 0.2
                                        * Referenced by: '<Root>/reg P2'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<Root>/Saturation2'
                                        */
  -3.0,                                /* Expression: -3
                                        * Referenced by: '<Root>/Saturation2'
                                        */
  -0.3,                                /* Expression: -0.3
                                        * Referenced by: '<Root>/Constant1'
                                        */
  -0.005625,                           /* Expression: (-2*180)/(500*128)
                                        * Referenced by: '<Root>/Gain1'
                                        */
  0.2,                                 /* Expression: 0.2
                                        * Referenced by: '<Root>/reg P1'
                                        */
  3.0,                                 /* Expression: 3
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  -3.0,                                /* Expression: -3
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  -0.3,                                /* Expression: -0.3
                                        * Referenced by: '<Root>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Memory1'
                                        */
  180.0,                               /* Expression: 180
                                        * Referenced by: '<Root>/Switch'
                                        */
  -180.0,                              /* Expression: -180
                                        * Referenced by: '<Root>/Switch1'
                                        */
  0.05,                                /* Computed Parameter: RateLimiter1_RisingLim
                                        * Referenced by: '<Root>/Rate Limiter1'
                                        */
  -0.05,                               /* Computed Parameter: RateLimiter1_FallingLim
                                        * Referenced by: '<Root>/Rate Limiter1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Rate Limiter1'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<Root>/Gain2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Memory2'
                                        */
  180.0,                               /* Expression: 180
                                        * Referenced by: '<Root>/Switch2'
                                        */
  -180.0,                              /* Expression: -180
                                        * Referenced by: '<Root>/Switch3'
                                        */
  0.05,                                /* Computed Parameter: RateLimiter2_RisingLim
                                        * Referenced by: '<Root>/Rate Limiter2'
                                        */
  -0.05,                               /* Computed Parameter: RateLimiter2_FallingLim
                                        * Referenced by: '<Root>/Rate Limiter2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Rate Limiter2'
                                        */
  0.1,                                 /* Expression: 0.1
                                        * Referenced by: '<Root>/Gain4'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory1'
                                        */
  0,                                   /* Computed Parameter: Memory_X0
                                        * Referenced by: '<S11>/Memory'
                                        */

  /*  Computed Parameter: Logic_table
   * Referenced by: '<S11>/Logic'
   */
  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },
  0,                                   /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S14>/Constant'
                                        */
  0,                                   /* Computed Parameter: DelayInput1_InitialCondition
                                        * Referenced by: '<S9>/Delay Input1'
                                        */
  0,                                   /* Computed Parameter: Memory_X0_m
                                        * Referenced by: '<S12>/Memory'
                                        */

  /*  Computed Parameter: Logic_table_o
   * Referenced by: '<S12>/Logic'
   */
  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },
  0,                                   /* Computed Parameter: DataStoreMemory2_InitialValue
                                        * Referenced by: '<Root>/Data Store Memory2'
                                        */
  0                                    /* Computed Parameter: DataStoreMemory3_InitialValue
                                        * Referenced by: '<Root>/Data Store Memory3'
                                        */
};
