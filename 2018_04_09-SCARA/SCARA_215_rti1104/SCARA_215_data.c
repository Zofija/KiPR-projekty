/*
 * SCARA_215_data.c
 *
 * Code generation for model "SCARA_215".
 *
 * Model version              : 1.19
 * Simulink Coder version : 8.8 (R2015a) 09-Feb-2015
 * C source code generated on : Mon Apr 09 09:15:37 2018
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
  -0.3,                                /* Expression: -0.3
                                        * Referenced by: '<S8>/Constant1'
                                        */
  -0.3,                                /* Expression: -0.3
                                        * Referenced by: '<S7>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S7>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Constant3'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S17>/Saturation4'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S17>/Saturation4'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S17>/Constant1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S17>/Saturation3'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S17>/Saturation3'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S17>/Constant'
                                        */
  -0.005625,                           /* Expression: (-2*180)/(500*128)
                                        * Referenced by: '<Root>/Gain1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S13>/Memory1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S15>/Memory3'
                                        */
  180.0,                               /* Expression: 180
                                        * Referenced by: '<S13>/Switch'
                                        */
  -180.0,                              /* Expression: -180
                                        * Referenced by: '<S13>/Switch1'
                                        */
  -0.005625,                           /* Expression: (-2*180)/(500*128)
                                        * Referenced by: '<Root>/Gain3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S14>/Memory1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S16>/Memory3'
                                        */
  180.0,                               /* Expression: 180
                                        * Referenced by: '<S14>/Switch'
                                        */
  -180.0,                              /* Expression: -180
                                        * Referenced by: '<S14>/Switch1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S33>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S34>/Constant'
                                        */
  0.01,                                /* Expression: 0.01
                                        * Referenced by: '<S11>/reg P3'
                                        */
  1.0,                                 /* Expression: const
                                        * Referenced by: '<S29>/Constant'
                                        */
  0.05,                                /* Expression: const
                                        * Referenced by: '<S30>/Constant'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S11>/Memory3'
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
  0.01,                                /* Expression: 0.01
                                        * Referenced by: '<S12>/reg P3'
                                        */
  1.0,                                 /* Expression: const
                                        * Referenced by: '<S31>/Constant'
                                        */
  0.05,                                /* Expression: const
                                        * Referenced by: '<S32>/Constant'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S12>/Memory3'
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
  100.0,                               /* Expression: 100
                                        * Referenced by: '<Root>/Data Store Memory5'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory8'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory9'
                                        */
  0,                                   /* Computed Parameter: Memory_X0
                                        * Referenced by: '<S24>/Memory'
                                        */

  /*  Computed Parameter: Logic_table
   * Referenced by: '<S24>/Logic'
   */
  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },
  0,                                   /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S25>/Constant'
                                        */
  1,                                   /* Computed Parameter: DelayInput1_InitialCondition
                                        * Referenced by: '<S23>/Delay Input1'
                                        */
  0,                                   /* Computed Parameter: Memory_X0_m
                                        * Referenced by: '<S28>/Memory'
                                        */

  /*  Computed Parameter: Logic_table_o
   * Referenced by: '<S28>/Logic'
   */
  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },
  0,                                   /* Expression: false
                                        * Referenced by: '<Root>/Data Store Memory10'
                                        */
  0,                                   /* Expression: false
                                        * Referenced by: '<Root>/Data Store Memory2'
                                        */
  0,                                   /* Expression: false
                                        * Referenced by: '<Root>/Data Store Memory3'
                                        */
  0,                                   /* Expression: false
                                        * Referenced by: '<Root>/Data Store Memory4'
                                        */
  0,                                   /* Expression: false
                                        * Referenced by: '<Root>/Data Store Memory6'
                                        */
  0                                    /* Expression: false
                                        * Referenced by: '<Root>/Data Store Memory7'
                                        */
};
