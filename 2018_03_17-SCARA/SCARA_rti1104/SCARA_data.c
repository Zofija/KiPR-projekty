/*
 * SCARA_data.c
 *
 * Classroom License -- for classroom instructional use only.  Not for
 * government, commercial, academic research, or other organizational use.
 *
 * Code generation for model "SCARA".
 *
 * Model version              : 1.10
 * Simulink Coder version : 8.11 (R2016b) 25-Aug-2016
 * C source code generated on : Mon Mar 12 09:20:22 2018
 *
 * Target selection: rti1104.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Custom Processor->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SCARA.h"
#include "SCARA_private.h"

/* Block parameters (auto storage) */
P_SCARA_T SCARA_P = {
  -0.005625,                           /* Expression: (-2*180)/(500*128)
                                        * Referenced by: '<Root>/Gain1'
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
  -0.005625,                           /* Expression: (-2*180)/(500*128)
                                        * Referenced by: '<Root>/Gain3'
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
  0.0                                  /* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory1'
                                        */
};
