/*
 * SCARA.c
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

#include "SCARA_trc_ptr.h"
#include "SCARA.h"
#include "SCARA_private.h"

/* Block signals (auto storage) */
B_SCARA_T SCARA_B;

/* Block states (auto storage) */
DW_SCARA_T SCARA_DW;

/* Real-time model */
RT_MODEL_SCARA_T SCARA_M_;
RT_MODEL_SCARA_T *const SCARA_M = &SCARA_M_;

/* Model output function */
void SCARA_output(void)
{
  real_T u0;
  real_T u1;
  real_T u2;

  /* S-Function (rti_commonblock): '<S3>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* Gain: '<Root>/Gain1' */
  SCARA_B.Gain1 = SCARA_P.Gain1_Gain * SCARA_B.SFunction1;

  /* Memory: '<Root>/Memory1' */
  SCARA_B.Memory1 = SCARA_DW.Memory1_PreviousInput;

  /* DataStoreRead: '<Root>/czytaj ost poz 1' */
  SCARA_B.czytajostpoz1 = SCARA_DW.WZ1;

  /* Switch: '<Root>/Switch' */
  if (SCARA_B.czytajostpoz1 > SCARA_P.Switch_Threshold) {
    SCARA_B.Switch = SCARA_B.Memory1;
  } else {
    SCARA_B.Switch = SCARA_B.czytajostpoz1;
  }

  /* End of Switch: '<Root>/Switch' */

  /* Switch: '<Root>/Switch1' */
  if (SCARA_B.Switch >= SCARA_P.Switch1_Threshold) {
    SCARA_B.Switch1 = SCARA_B.Switch;
  } else {
    SCARA_B.Switch1 = SCARA_B.Memory1;
  }

  /* End of Switch: '<Root>/Switch1' */

  /* Sum: '<Root>/Sum' */
  SCARA_B.Sum = SCARA_B.Switch1 - SCARA_B.Gain1;

  /* Gain: '<Root>/reg P1' */
  SCARA_B.regP1 = SCARA_P.regP1_Gain * SCARA_B.Sum;

  /* Saturate: '<Root>/Saturation1' */
  u0 = SCARA_B.regP1;
  u1 = SCARA_P.Saturation1_LowerSat;
  u2 = SCARA_P.Saturation1_UpperSat;
  if (u0 > u2) {
    SCARA_B.v1 = u2;
  } else if (u0 < u1) {
    SCARA_B.v1 = u1;
  } else {
    SCARA_B.v1 = u0;
  }

  /* End of Saturate: '<Root>/Saturation1' */

  /* RateLimiter: '<Root>/Rate Limiter1' */
  u0 = SCARA_B.v1 - SCARA_DW.PrevY;
  if (u0 > SCARA_P.RateLimiter1_RisingLim) {
    SCARA_B.RateLimiter1 = SCARA_DW.PrevY + SCARA_P.RateLimiter1_RisingLim;
  } else if (u0 < SCARA_P.RateLimiter1_FallingLim) {
    SCARA_B.RateLimiter1 = SCARA_DW.PrevY + SCARA_P.RateLimiter1_FallingLim;
  } else {
    SCARA_B.RateLimiter1 = SCARA_B.v1;
  }

  SCARA_DW.PrevY = SCARA_B.RateLimiter1;

  /* End of RateLimiter: '<Root>/Rate Limiter1' */

  /* Gain: '<Root>/Gain2' */
  SCARA_B.Gain2 = SCARA_P.Gain2_Gain * SCARA_B.RateLimiter1;

  /* S-Function (rti_commonblock): '<S1>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE I/O Board DS1104 #1 Unit:DAC */
  ds1104_dac_write(1, SCARA_B.Gain2);

  /* S-Function (rti_commonblock): '<S3>/S-Function2' */
  /* This comment workarounds a code generation problem */

  /* S-Function (rti_commonblock): '<S4>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* Gain: '<Root>/Gain3' */
  SCARA_B.Gain3 = SCARA_P.Gain3_Gain * SCARA_B.SFunction1_h;

  /* Memory: '<Root>/Memory2' */
  SCARA_B.Memory2 = SCARA_DW.Memory2_PreviousInput;

  /* DataStoreRead: '<Root>/czytaj ost poz 2' */
  SCARA_B.czytajostpoz2 = SCARA_DW.WZ2;

  /* Switch: '<Root>/Switch2' */
  if (SCARA_B.czytajostpoz2 > SCARA_P.Switch2_Threshold) {
    SCARA_B.Switch2 = SCARA_B.Memory2;
  } else {
    SCARA_B.Switch2 = SCARA_B.czytajostpoz2;
  }

  /* End of Switch: '<Root>/Switch2' */

  /* Switch: '<Root>/Switch3' */
  if (SCARA_B.Switch2 >= SCARA_P.Switch3_Threshold) {
    SCARA_B.Switch3 = SCARA_B.Switch2;
  } else {
    SCARA_B.Switch3 = SCARA_B.Memory2;
  }

  /* End of Switch: '<Root>/Switch3' */

  /* Sum: '<Root>/Sum1' */
  SCARA_B.Sum1 = SCARA_B.Switch3 - SCARA_B.Gain3;

  /* Gain: '<Root>/reg P2' */
  SCARA_B.regP2 = SCARA_P.regP2_Gain * SCARA_B.Sum1;

  /* Saturate: '<Root>/Saturation2' */
  u0 = SCARA_B.regP2;
  u1 = SCARA_P.Saturation2_LowerSat;
  u2 = SCARA_P.Saturation2_UpperSat;
  if (u0 > u2) {
    SCARA_B.v2 = u2;
  } else if (u0 < u1) {
    SCARA_B.v2 = u1;
  } else {
    SCARA_B.v2 = u0;
  }

  /* End of Saturate: '<Root>/Saturation2' */

  /* RateLimiter: '<Root>/Rate Limiter2' */
  u0 = SCARA_B.v2 - SCARA_DW.PrevY_f;
  if (u0 > SCARA_P.RateLimiter2_RisingLim) {
    SCARA_B.RateLimiter2 = SCARA_DW.PrevY_f + SCARA_P.RateLimiter2_RisingLim;
  } else if (u0 < SCARA_P.RateLimiter2_FallingLim) {
    SCARA_B.RateLimiter2 = SCARA_DW.PrevY_f + SCARA_P.RateLimiter2_FallingLim;
  } else {
    SCARA_B.RateLimiter2 = SCARA_B.v2;
  }

  SCARA_DW.PrevY_f = SCARA_B.RateLimiter2;

  /* End of RateLimiter: '<Root>/Rate Limiter2' */

  /* Gain: '<Root>/Gain4' */
  SCARA_B.Gain4 = SCARA_P.Gain4_Gain * SCARA_B.RateLimiter2;

  /* S-Function (rti_commonblock): '<S2>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE I/O Board DS1104 #1 Unit:DAC */
  ds1104_dac_write(2, SCARA_B.Gain4);

  /* S-Function (rti_commonblock): '<S4>/S-Function2' */
  /* This comment workarounds a code generation problem */

  /* S-Function (rti_commonblock): '<S5>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* S-Function (rti_commonblock): '<S5>/S-Function2' */
  /* This comment workarounds a code generation problem */
}

/* Model update function */
void SCARA_update(void)
{
  /* Update for Memory: '<Root>/Memory1' */
  SCARA_DW.Memory1_PreviousInput = SCARA_B.Switch1;

  /* Update for Memory: '<Root>/Memory2' */
  SCARA_DW.Memory2_PreviousInput = SCARA_B.Switch3;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++SCARA_M->Timing.clockTick0)) {
    ++SCARA_M->Timing.clockTickH0;
  }

  SCARA_M->Timing.taskTime0 = SCARA_M->Timing.clockTick0 *
    SCARA_M->Timing.stepSize0 + SCARA_M->Timing.clockTickH0 *
    SCARA_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void SCARA_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)SCARA_M, 0,
                sizeof(RT_MODEL_SCARA_T));
  SCARA_M->Timing.stepSize0 = 0.001;

  /* block I/O */
  (void) memset(((void *) &SCARA_B), 0,
                sizeof(B_SCARA_T));

  /* states (dwork) */
  (void) memset((void *)&SCARA_DW, 0,
                sizeof(DW_SCARA_T));

  {
    /* user code (registration function declaration) */
    /*Initialize global TRC pointers. */
    SCARA_rti_init_trc_pointers();
  }

  /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
  SCARA_DW.WZ1 = SCARA_P.DataStoreMemory_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory1' */
  SCARA_DW.WZ2 = SCARA_P.DataStoreMemory1_InitialValue;

  /* InitializeConditions for Memory: '<Root>/Memory1' */
  SCARA_DW.Memory1_PreviousInput = SCARA_P.Memory1_X0;

  /* InitializeConditions for RateLimiter: '<Root>/Rate Limiter1' */
  SCARA_DW.PrevY = SCARA_P.RateLimiter1_IC;

  /* InitializeConditions for Memory: '<Root>/Memory2' */
  SCARA_DW.Memory2_PreviousInput = SCARA_P.Memory2_X0;

  /* InitializeConditions for RateLimiter: '<Root>/Rate Limiter2' */
  SCARA_DW.PrevY_f = SCARA_P.RateLimiter2_IC;
}

/* Model terminate function */
void SCARA_terminate(void)
{
  /* Terminate for S-Function (rti_commonblock): '<S1>/S-Function1' */

  /* dSPACE I/O Board DS1104 #1 Unit:DAC */
  ds1104_dac_write(1, 0);

  /* Terminate for S-Function (rti_commonblock): '<S2>/S-Function1' */

  /* dSPACE I/O Board DS1104 #1 Unit:DAC */
  ds1104_dac_write(2, 0);
}
