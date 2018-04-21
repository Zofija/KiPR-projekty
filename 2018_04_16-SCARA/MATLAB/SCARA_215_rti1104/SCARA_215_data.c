/*
 * SCARA_215_data.c
 *
 * Code generation for model "SCARA_215".
 *
 * Model version              : 1.36
 * Simulink Coder version : 8.8 (R2015a) 09-Feb-2015
 * C source code generated on : Mon Apr 16 15:23:30 2018
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
  57.295779513082323,                  /* Expression: 180/pi
                                        * Referenced by: '<S5>/Gain3'
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
                                        * Referenced by: '<S9>/Constant1'
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
                                        * Referenced by: '<S8>/Constant'
                                        */
  57.295779513082323,                  /* Expression: 180/pi
                                        * Referenced by: '<S5>/Gain2'
                                        */
  -1.0,                                /* Expression: -1
                                        * Referenced by: '<S5>/Gain1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S8>/Constant2'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S9>/Constant3'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S18>/Saturation4'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S18>/Saturation4'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S18>/Constant1'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S18>/Saturation3'
                                        */
  0.05,                                /* Expression: 0.05
                                        * Referenced by: '<S18>/Saturation3'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S18>/Constant'
                                        */
  -0.005625,                           /* Expression: (-2*180)/(500*128)
                                        * Referenced by: '<Root>/Gain1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S14>/Memory1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S31>/Memory3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S30>/Memory3'
                                        */
  120.0,                               /* Expression: const
                                        * Referenced by: '<S19>/Constant'
                                        */
  1140.0,                              /* Expression: const
                                        * Referenced by: '<S20>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Memory4'
                                        */
  120.0,                               /* Expression: 120
                                        * Referenced by: '<S5>/poprzednia_x'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S5>/jeden'
                                        */
  630.0,                               /* Expression: 630
                                        * Referenced by: '<S5>/L1_mm'
                                        */
  510.0,                               /* Expression: 510
                                        * Referenced by: '<S5>/L2_mm '
                                        */
  2.0,                                 /* Expression: 2
                                        * Referenced by: '<S5>/dwa'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Switch2'
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
  -0.005625,                           /* Expression: (-2*180)/(500*128)
                                        * Referenced by: '<Root>/Gain3'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S15>/Memory1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S17>/Memory3'
                                        */
  180.0,                               /* Expression: 180
                                        * Referenced by: '<S15>/Switch'
                                        */
  -180.0,                              /* Expression: -180
                                        * Referenced by: '<S15>/Switch1'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S47>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S48>/Constant'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Memory1'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S5>/Gain5'
                                        */
  180.0,                               /* Expression: 180
                                        * Referenced by: '<S5>/kat '
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<S5>/Memory2'
                                        */
  0.017453292519943295,                /* Expression: pi/180
                                        * Referenced by: '<S5>/Gain4'
                                        */
  0.01,                                /* Expression: 0.01
                                        * Referenced by: '<S12>/reg P3'
                                        */
  1.0,                                 /* Expression: const
                                        * Referenced by: '<S43>/Constant'
                                        */
  0.05,                                /* Expression: const
                                        * Referenced by: '<S44>/Constant'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S12>/Memory3'
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
                                        * Referenced by: '<S13>/reg P3'
                                        */
  1.0,                                 /* Expression: const
                                        * Referenced by: '<S45>/Constant'
                                        */
  0.05,                                /* Expression: const
                                        * Referenced by: '<S46>/Constant'
                                        */
  1.0,                                 /* Expression: 1
                                        * Referenced by: '<S13>/Memory3'
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
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory13'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory14'
                                        */
  0.0,                                 /* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory15'
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
                                        * Referenced by: '<S38>/Memory'
                                        */

  /*  Computed Parameter: Logic_table
   * Referenced by: '<S38>/Logic'
   */
  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },
  0,                                   /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S39>/Constant'
                                        */
  1,                                   /* Computed Parameter: DelayInput1_InitialCondition
                                        * Referenced by: '<S37>/Delay Input1'
                                        */
  0,                                   /* Computed Parameter: Memory_X0_m
                                        * Referenced by: '<S42>/Memory'
                                        */

  /*  Computed Parameter: Logic_table_o
   * Referenced by: '<S42>/Logic'
   */
  { 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0 },
  0,                                   /* Expression: false
                                        * Referenced by: '<Root>/Data Store Memory11'
                                        */
  0,                                   /* Expression: false
                                        * Referenced by: '<Root>/Data Store Memory12'
                                        */
  0,                                   /* Expression: false
                                        * Referenced by: '<Root>/Data Store Memory16'
                                        */
  0,                                   /* Expression: false
                                        * Referenced by: '<Root>/Data Store Memory2'
                                        */
  0,                                   /* Expression: false
                                        * Referenced by: '<Root>/Data Store Memory3'
                                        */
  0,                                   /* Expression: false
                                        * Referenced by: '<Root>/Data Store Memory6'
                                        */
  0                                    /* Expression: false
                                        * Referenced by: '<Root>/Data Store Memory7'
                                        */
};
