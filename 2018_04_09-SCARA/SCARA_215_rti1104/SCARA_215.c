/*
 * SCARA_215.c
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

#include "SCARA_215_trc_ptr.h"
#include "SCARA_215.h"
#include "SCARA_215_private.h"

/* Block signals (auto storage) */
B_SCARA_215_T SCARA_215_B;

/* Block states (auto storage) */
DW_SCARA_215_T SCARA_215_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_SCARA_215_T SCARA_215_PrevZCX;

/* Real-time model */
RT_MODEL_SCARA_215_T SCARA_215_M_;
RT_MODEL_SCARA_215_T *const SCARA_215_M = &SCARA_215_M_;

/* Model output function */
static void SCARA_215_output(void)
{
  int32_T rowIdx;
  boolean_T zcEvent;
  real_T u0;
  real_T u1;
  real_T u2;

  /* S-Function (rti_commonblock): '<S6>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* Gain: '<Root>/Gain1' */
  SCARA_215_B.Gain1 = SCARA_215_P.Gain1_Gain * SCARA_215_B.SFunction1;

  /* Memory: '<S13>/Memory1' */
  SCARA_215_B.Memory1 = SCARA_215_DW.Memory1_PreviousInput;

  /* DataStoreRead: '<Root>/Data Store Read' */
  SCARA_215_B.DataStoreRead = SCARA_215_DW.WZ1;

  /* Memory: '<S15>/Memory3' */
  SCARA_215_B.Memory3 = SCARA_215_DW.Memory3_PreviousInput;

  /* DataStoreRead: '<S15>/Data Store Read2' */
  SCARA_215_B.DataStoreRead2 = SCARA_215_DW.wyzwalanie_ON;

  /* Switch: '<Root>/Switch8' */
  if (SCARA_215_B.DataStoreRead2) {
    /* DataStoreRead: '<S15>/Data Store Read3' */
    SCARA_215_B.DataStoreRead3_m = SCARA_215_DW.wyzwolenie;

    /* Switch: '<S15>/Switch9' */
    if (SCARA_215_B.DataStoreRead3_m) {
      SCARA_215_B.Switch9_i = SCARA_215_B.DataStoreRead;
    } else {
      SCARA_215_B.Switch9_i = SCARA_215_B.Memory3;
    }

    /* End of Switch: '<S15>/Switch9' */
    SCARA_215_B.Switch8 = SCARA_215_B.Switch9_i;
  } else {
    SCARA_215_B.Switch8 = SCARA_215_B.DataStoreRead;
  }

  /* End of Switch: '<Root>/Switch8' */

  /* Switch: '<S13>/Switch' */
  if (SCARA_215_B.Switch8 > SCARA_215_P.Switch_Threshold) {
    SCARA_215_B.Switch = SCARA_215_B.Memory1;
  } else {
    SCARA_215_B.Switch = SCARA_215_B.Switch8;
  }

  /* End of Switch: '<S13>/Switch' */

  /* Switch: '<S13>/Switch1' */
  if (SCARA_215_B.Switch >= SCARA_215_P.Switch1_Threshold) {
    SCARA_215_B.Switch1 = SCARA_215_B.Switch;
  } else {
    SCARA_215_B.Switch1 = SCARA_215_B.Memory1;
  }

  /* End of Switch: '<S13>/Switch1' */

  /* Sum: '<Root>/Sum' */
  SCARA_215_B.Sum = SCARA_215_B.Switch1 - SCARA_215_B.Gain1;

  /* Abs: '<S17>/Abs' */
  SCARA_215_B.Abs = fabs(SCARA_215_B.Sum);

  /* S-Function (rti_commonblock): '<S3>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* Gain: '<Root>/Gain3' */
  SCARA_215_B.Gain3 = SCARA_215_P.Gain3_Gain * SCARA_215_B.SFunction1_h;

  /* Memory: '<S14>/Memory1' */
  SCARA_215_B.Memory1_k = SCARA_215_DW.Memory1_PreviousInput_j;

  /* DataStoreRead: '<Root>/Data Store Read1' */
  SCARA_215_B.DataStoreRead1 = SCARA_215_DW.WZ2;

  /* Memory: '<S16>/Memory3' */
  SCARA_215_B.Memory3_n = SCARA_215_DW.Memory3_PreviousInput_l;

  /* DataStoreRead: '<S16>/Data Store Read2' */
  SCARA_215_B.DataStoreRead2_f = SCARA_215_DW.wyzwalanie_ON;

  /* Switch: '<Root>/Switch1' */
  if (SCARA_215_B.DataStoreRead2_f) {
    /* DataStoreRead: '<S16>/Data Store Read3' */
    SCARA_215_B.DataStoreRead3_k = SCARA_215_DW.wyzwolenie;

    /* Switch: '<S16>/Switch9' */
    if (SCARA_215_B.DataStoreRead3_k) {
      SCARA_215_B.Switch9 = SCARA_215_B.DataStoreRead1;
    } else {
      SCARA_215_B.Switch9 = SCARA_215_B.Memory3_n;
    }

    /* End of Switch: '<S16>/Switch9' */
    SCARA_215_B.Switch1_i = SCARA_215_B.Switch9;
  } else {
    SCARA_215_B.Switch1_i = SCARA_215_B.DataStoreRead1;
  }

  /* End of Switch: '<Root>/Switch1' */

  /* Switch: '<S14>/Switch' */
  if (SCARA_215_B.Switch1_i > SCARA_215_P.Switch_Threshold_b) {
    SCARA_215_B.Switch_i = SCARA_215_B.Memory1_k;
  } else {
    SCARA_215_B.Switch_i = SCARA_215_B.Switch1_i;
  }

  /* End of Switch: '<S14>/Switch' */

  /* Switch: '<S14>/Switch1' */
  if (SCARA_215_B.Switch_i >= SCARA_215_P.Switch1_Threshold_d) {
    SCARA_215_B.Switch1_g = SCARA_215_B.Switch_i;
  } else {
    SCARA_215_B.Switch1_g = SCARA_215_B.Memory1_k;
  }

  /* End of Switch: '<S14>/Switch1' */

  /* Sum: '<Root>/Sum1' */
  SCARA_215_B.Sum1 = SCARA_215_B.Switch1_g - SCARA_215_B.Gain3;

  /* Abs: '<S17>/Abs1' */
  SCARA_215_B.Abs1 = fabs(SCARA_215_B.Sum1);

  /* MinMax: '<S17>/MinMax' */
  u0 = SCARA_215_B.Abs;
  u1 = SCARA_215_B.Abs1;
  if ((u0 >= u1) || rtIsNaN(u1)) {
    u1 = u0;
  }

  SCARA_215_B.MinMax = u1;

  /* End of MinMax: '<S17>/MinMax' */

  /* RelationalOperator: '<S33>/Compare' incorporates:
   *  Constant: '<S33>/Constant'
   */
  SCARA_215_B.Compare = (SCARA_215_B.MinMax == SCARA_215_P.Constant_Value_n);

  /* Switch: '<S17>/Switch2' incorporates:
   *  Constant: '<S17>/Constant'
   */
  if (SCARA_215_B.Compare) {
    SCARA_215_B.Switch2 = SCARA_215_P.Constant_Value_a;
  } else {
    /* Product: '<S17>/Divide' */
    SCARA_215_B.Divide = SCARA_215_B.Abs / SCARA_215_B.MinMax;

    /* Saturate: '<S17>/Saturation3' */
    u0 = SCARA_215_B.Divide;
    u1 = SCARA_215_P.Saturation3_LowerSat;
    u2 = SCARA_215_P.Saturation3_UpperSat;
    if (u0 > u2) {
      SCARA_215_B.Saturation3 = u2;
    } else if (u0 < u1) {
      SCARA_215_B.Saturation3 = u1;
    } else {
      SCARA_215_B.Saturation3 = u0;
    }

    /* End of Saturate: '<S17>/Saturation3' */
    SCARA_215_B.Switch2 = SCARA_215_B.Saturation3;
  }

  /* End of Switch: '<S17>/Switch2' */

  /* DataStoreWrite: '<S17>/Data Store Write' */
  SCARA_215_DW.wspolczynnik_1 = SCARA_215_B.Switch2;

  /* RelationalOperator: '<S34>/Compare' incorporates:
   *  Constant: '<S34>/Constant'
   */
  SCARA_215_B.Compare_m = (SCARA_215_B.MinMax == SCARA_215_P.Constant_Value_h);

  /* Switch: '<S17>/Switch3' incorporates:
   *  Constant: '<S17>/Constant1'
   */
  if (SCARA_215_B.Compare_m) {
    SCARA_215_B.Switch3 = SCARA_215_P.Constant1_Value_p;
  } else {
    /* Product: '<S17>/Divide1' */
    SCARA_215_B.Divide1 = SCARA_215_B.Abs1 / SCARA_215_B.MinMax;

    /* Saturate: '<S17>/Saturation4' */
    u0 = SCARA_215_B.Divide1;
    u1 = SCARA_215_P.Saturation4_LowerSat;
    u2 = SCARA_215_P.Saturation4_UpperSat;
    if (u0 > u2) {
      SCARA_215_B.Saturation4 = u2;
    } else if (u0 < u1) {
      SCARA_215_B.Saturation4 = u1;
    } else {
      SCARA_215_B.Saturation4 = u0;
    }

    /* End of Saturate: '<S17>/Saturation4' */
    SCARA_215_B.Switch3 = SCARA_215_B.Saturation4;
  }

  /* End of Switch: '<S17>/Switch3' */

  /* DataStoreWrite: '<S17>/Data Store Write1' */
  SCARA_215_DW.wspolczynnik_2 = SCARA_215_B.Switch3;

  /* DataStoreRead: '<S7>/Data Store Read2' */
  SCARA_215_B.DataStoreRead2_i = SCARA_215_DW.bazowanie1;

  /* S-Function (rti_commonblock): '<S21>/S-Function' */
  /* This comment workarounds a code generation problem */

  /* Logic: '<S7>/Logical Operator1' */
  SCARA_215_B.LogicalOperator1 = !SCARA_215_B.SFunction;

  /* Memory: '<S24>/Memory' */
  SCARA_215_B.Memory = SCARA_215_DW.Memory_PreviousInput;

  /* CombinatorialLogic: '<S24>/Logic' */
  zcEvent = SCARA_215_B.DataStoreRead2_i;
  rowIdx = zcEvent;
  zcEvent = SCARA_215_B.LogicalOperator1;
  rowIdx = (int32_T)(((uint32_T)rowIdx << 1) + zcEvent);
  zcEvent = SCARA_215_B.Memory;
  rowIdx = (int32_T)(((uint32_T)rowIdx << 1) + zcEvent);
  SCARA_215_B.Logic[0U] = SCARA_215_P.Logic_table[(uint32_T)rowIdx];
  SCARA_215_B.Logic[1U] = SCARA_215_P.Logic_table[rowIdx + 8U];

  /* Switch: '<S7>/Switch6' incorporates:
   *  Constant: '<S7>/Constant2'
   */
  if (SCARA_215_B.Logic[0]) {
    SCARA_215_B.Switch6 = SCARA_215_P.Constant2_Value;
  } else {
    /* DataStoreRead: '<S7>/Data Store Read4' */
    SCARA_215_B.DataStoreRead4 = SCARA_215_DW.WZ1;
    SCARA_215_B.Switch6 = SCARA_215_B.DataStoreRead4;
  }

  /* End of Switch: '<S7>/Switch6' */

  /* DataStoreWrite: '<S7>/Data Store Write' */
  SCARA_215_DW.WZ1 = SCARA_215_B.Switch6;

  /* RelationalOperator: '<S25>/Compare' incorporates:
   *  Constant: '<S25>/Constant'
   */
  SCARA_215_B.Compare_e = ((int32_T)SCARA_215_B.Logic[0] <= (int32_T)
    SCARA_215_P.Constant_Value_m);

  /* UnitDelay: '<S23>/Delay Input1' */
  SCARA_215_B.Uk1 = SCARA_215_DW.DelayInput1_DSTATE;

  /* RelationalOperator: '<S23>/FixPt Relational Operator' */
  SCARA_215_B.FixPtRelationalOperator = ((int32_T)SCARA_215_B.Compare_e >
    (int32_T)SCARA_215_B.Uk1);

  /* DataStoreWrite: '<S7>/Data Store Write2' */
  SCARA_215_DW.bazowanie2 = SCARA_215_B.FixPtRelationalOperator;

  /* Outputs for Triggered SubSystem: '<S7>/DS1104ENC_SET_POS_C1' incorporates:
   *  TriggerPort: '<S22>/Trigger'
   */
  zcEvent = (SCARA_215_B.Logic[1] &&
             (SCARA_215_PrevZCX.DS1104ENC_SET_POS_C1_Trig_ZCE != POS_ZCSIG));
  if (zcEvent) {
    /* S-Function (rti_commonblock): '<S22>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE I/O Board DS1104 Unit:ENC_SET */
    ds1104_inc_position_write(1, 0, DS1104_INC_LINE_SUBDIV_4);
  }

  SCARA_215_PrevZCX.DS1104ENC_SET_POS_C1_Trig_ZCE = SCARA_215_B.Logic[1];

  /* End of Outputs for SubSystem: '<S7>/DS1104ENC_SET_POS_C1' */

  /* DataStoreRead: '<S8>/Data Store Read3' */
  SCARA_215_B.DataStoreRead3_p = SCARA_215_DW.bazowanie2;

  /* S-Function (rti_commonblock): '<S26>/S-Function' */
  /* This comment workarounds a code generation problem */

  /* Logic: '<S8>/Logical Operator3' */
  SCARA_215_B.LogicalOperator3 = !SCARA_215_B.SFunction_p;

  /* Memory: '<S28>/Memory' */
  SCARA_215_B.Memory_e = SCARA_215_DW.Memory_PreviousInput_d;

  /* CombinatorialLogic: '<S28>/Logic' */
  zcEvent = SCARA_215_B.DataStoreRead3_p;
  rowIdx = zcEvent;
  zcEvent = SCARA_215_B.LogicalOperator3;
  rowIdx = (int32_T)(((uint32_T)rowIdx << 1) + zcEvent);
  zcEvent = SCARA_215_B.Memory_e;
  rowIdx = (int32_T)(((uint32_T)rowIdx << 1) + zcEvent);
  SCARA_215_B.Logic_g[0U] = SCARA_215_P.Logic_table_o[(uint32_T)rowIdx];
  SCARA_215_B.Logic_g[1U] = SCARA_215_P.Logic_table_o[rowIdx + 8U];

  /* Switch: '<S8>/Switch7' incorporates:
   *  Constant: '<S8>/Constant3'
   */
  if (SCARA_215_B.Logic_g[0]) {
    SCARA_215_B.Switch7 = SCARA_215_P.Constant3_Value;
  } else {
    /* DataStoreRead: '<S8>/Data Store Read5' */
    SCARA_215_B.DataStoreRead5 = SCARA_215_DW.WZ2;
    SCARA_215_B.Switch7 = SCARA_215_B.DataStoreRead5;
  }

  /* End of Switch: '<S8>/Switch7' */

  /* DataStoreWrite: '<S8>/Data Store Write3' */
  SCARA_215_DW.WZ2 = SCARA_215_B.Switch7;

  /* Outputs for Triggered SubSystem: '<S8>/DS1104ENC_SET_POS_C2' incorporates:
   *  TriggerPort: '<S27>/Trigger'
   */
  zcEvent = (SCARA_215_B.Logic_g[1] &&
             (SCARA_215_PrevZCX.DS1104ENC_SET_POS_C2_Trig_ZCE != POS_ZCSIG));
  if (zcEvent) {
    /* S-Function (rti_commonblock): '<S27>/S-Function1' */
    /* This comment workarounds a code generation problem */

    /* dSPACE I/O Board DS1104 Unit:ENC_SET */
    ds1104_inc_position_write(2, 0, DS1104_INC_LINE_SUBDIV_4);
  }

  SCARA_215_PrevZCX.DS1104ENC_SET_POS_C2_Trig_ZCE = SCARA_215_B.Logic_g[1];

  /* End of Outputs for SubSystem: '<S8>/DS1104ENC_SET_POS_C2' */

  /* DataStoreRead: '<S11>/Data Store Read3' */
  SCARA_215_B.DataStoreRead3 = SCARA_215_DW.V_zadana_wartosc;

  /* Gain: '<S11>/reg P3' */
  SCARA_215_B.regP3 = SCARA_215_P.regP3_Gain * SCARA_215_B.DataStoreRead3;

  /* RelationalOperator: '<S29>/Compare' incorporates:
   *  Constant: '<S29>/Constant'
   */
  SCARA_215_B.Compare_g = (SCARA_215_B.regP3 <= SCARA_215_P.Constant_Value_j);

  /* RelationalOperator: '<S30>/Compare' incorporates:
   *  Constant: '<S30>/Constant'
   */
  SCARA_215_B.Compare_d = (SCARA_215_B.regP3 >= SCARA_215_P.Constant_Value_f);

  /* Logic: '<S11>/Logical Operator1' */
  SCARA_215_B.LogicalOperator1_f = (SCARA_215_B.Compare_g &&
    SCARA_215_B.Compare_d);

  /* Memory: '<S11>/Memory3' */
  SCARA_215_B.Memory3_m = SCARA_215_DW.Memory3_PreviousInput_f;

  /* Switch: '<S11>/Switch7' */
  if (SCARA_215_B.LogicalOperator1_f) {
    SCARA_215_B.Switch7_j = SCARA_215_B.regP3;
  } else {
    SCARA_215_B.Switch7_j = SCARA_215_B.Memory3_m;
  }

  /* End of Switch: '<S11>/Switch7' */

  /* Gain: '<Root>/reg P1' */
  SCARA_215_B.regP1 = SCARA_215_P.regP1_Gain * SCARA_215_B.Sum;

  /* Saturate: '<Root>/Saturation1' */
  u0 = SCARA_215_B.regP1;
  u1 = SCARA_215_P.Saturation1_LowerSat;
  u2 = SCARA_215_P.Saturation1_UpperSat;
  if (u0 > u2) {
    SCARA_215_B.v1 = u2;
  } else if (u0 < u1) {
    SCARA_215_B.v1 = u1;
  } else {
    SCARA_215_B.v1 = u0;
  }

  /* End of Saturate: '<Root>/Saturation1' */

  /* DataStoreRead: '<S11>/Data Store Read2' */
  SCARA_215_B.DataStoreRead2_b = SCARA_215_DW.V_zadana_ON;

  /* Switch: '<Root>/Switch6' */
  if (SCARA_215_B.DataStoreRead2_b) {
    /* Product: '<S11>/Product' */
    SCARA_215_B.Product_d = SCARA_215_B.Switch7_j * SCARA_215_B.v1;
    SCARA_215_B.Switch6_i = SCARA_215_B.Product_d;
  } else {
    SCARA_215_B.Switch6_i = SCARA_215_B.v1;
  }

  /* End of Switch: '<Root>/Switch6' */

  /* Switch: '<Root>/Switch4' incorporates:
   *  Constant: '<S7>/Constant'
   */
  if (SCARA_215_B.Logic[0]) {
    SCARA_215_B.Switch4 = SCARA_215_P.Constant_Value;
  } else {
    /* DataStoreRead: '<S9>/Data Store Read2' */
    SCARA_215_B.DataStoreRead2_m = SCARA_215_DW.V_koordynacja_ON;

    /* Switch: '<Root>/Switch3' */
    if (SCARA_215_B.DataStoreRead2_m) {
      /* DataStoreRead: '<S9>/Data Store Read3' */
      SCARA_215_B.DataStoreRead3_h3 = SCARA_215_DW.wspolczynnik_1;

      /* Product: '<S9>/Product' */
      SCARA_215_B.Product = SCARA_215_B.DataStoreRead3_h3 *
        SCARA_215_B.Switch6_i;
      SCARA_215_B.Switch3_g = SCARA_215_B.Product;
    } else {
      SCARA_215_B.Switch3_g = SCARA_215_B.Switch6_i;
    }

    /* End of Switch: '<Root>/Switch3' */
    SCARA_215_B.Switch4 = SCARA_215_B.Switch3_g;
  }

  /* End of Switch: '<Root>/Switch4' */

  /* RateLimiter: '<Root>/Rate Limiter1' */
  u1 = SCARA_215_B.Switch4 - SCARA_215_DW.PrevY;
  if (u1 > SCARA_215_P.RateLimiter1_RisingLim) {
    SCARA_215_B.RateLimiter1 = SCARA_215_DW.PrevY +
      SCARA_215_P.RateLimiter1_RisingLim;
  } else if (u1 < SCARA_215_P.RateLimiter1_FallingLim) {
    SCARA_215_B.RateLimiter1 = SCARA_215_DW.PrevY +
      SCARA_215_P.RateLimiter1_FallingLim;
  } else {
    SCARA_215_B.RateLimiter1 = SCARA_215_B.Switch4;
  }

  SCARA_215_DW.PrevY = SCARA_215_B.RateLimiter1;

  /* End of RateLimiter: '<Root>/Rate Limiter1' */

  /* Gain: '<Root>/Gain2' */
  SCARA_215_B.Gain2 = SCARA_215_P.Gain2_Gain * SCARA_215_B.RateLimiter1;

  /* S-Function (rti_commonblock): '<S1>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE I/O Board DS1104 #1 Unit:DAC */
  ds1104_dac_write(1, SCARA_215_B.Gain2);

  /* DataStoreRead: '<S12>/Data Store Read3' */
  SCARA_215_B.DataStoreRead3_h = SCARA_215_DW.V_zadana_wartosc;

  /* Gain: '<S12>/reg P3' */
  SCARA_215_B.regP3_g = SCARA_215_P.regP3_Gain_n * SCARA_215_B.DataStoreRead3_h;

  /* RelationalOperator: '<S31>/Compare' incorporates:
   *  Constant: '<S31>/Constant'
   */
  SCARA_215_B.Compare_n = (SCARA_215_B.regP3_g <= SCARA_215_P.Constant_Value_fi);

  /* RelationalOperator: '<S32>/Compare' incorporates:
   *  Constant: '<S32>/Constant'
   */
  SCARA_215_B.Compare_p = (SCARA_215_B.regP3_g >= SCARA_215_P.Constant_Value_hr);

  /* Logic: '<S12>/Logical Operator1' */
  SCARA_215_B.LogicalOperator1_e = (SCARA_215_B.Compare_n &&
    SCARA_215_B.Compare_p);

  /* Memory: '<S12>/Memory3' */
  SCARA_215_B.Memory3_mw = SCARA_215_DW.Memory3_PreviousInput_b;

  /* Switch: '<S12>/Switch7' */
  if (SCARA_215_B.LogicalOperator1_e) {
    SCARA_215_B.Switch7_f = SCARA_215_B.regP3_g;
  } else {
    SCARA_215_B.Switch7_f = SCARA_215_B.Memory3_mw;
  }

  /* End of Switch: '<S12>/Switch7' */

  /* Gain: '<Root>/reg P2' */
  SCARA_215_B.regP2 = SCARA_215_P.regP2_Gain * SCARA_215_B.Sum1;

  /* Saturate: '<Root>/Saturation2' */
  u0 = SCARA_215_B.regP2;
  u1 = SCARA_215_P.Saturation2_LowerSat;
  u2 = SCARA_215_P.Saturation2_UpperSat;
  if (u0 > u2) {
    SCARA_215_B.v1_g = u2;
  } else if (u0 < u1) {
    SCARA_215_B.v1_g = u1;
  } else {
    SCARA_215_B.v1_g = u0;
  }

  /* End of Saturate: '<Root>/Saturation2' */

  /* DataStoreRead: '<S12>/Data Store Read2' */
  SCARA_215_B.DataStoreRead2_n = SCARA_215_DW.V_zadana_ON;

  /* Switch: '<Root>/Switch7' */
  if (SCARA_215_B.DataStoreRead2_n) {
    /* Product: '<S12>/Product' */
    SCARA_215_B.Product_i = SCARA_215_B.Switch7_f * SCARA_215_B.v1_g;
    SCARA_215_B.Switch7_l = SCARA_215_B.Product_i;
  } else {
    SCARA_215_B.Switch7_l = SCARA_215_B.v1_g;
  }

  /* End of Switch: '<Root>/Switch7' */

  /* Switch: '<Root>/Switch5' incorporates:
   *  Constant: '<S8>/Constant1'
   */
  if (SCARA_215_B.Logic_g[0]) {
    SCARA_215_B.Switch5 = SCARA_215_P.Constant1_Value;
  } else {
    /* DataStoreRead: '<S10>/Data Store Read2' */
    SCARA_215_B.DataStoreRead2_mw = SCARA_215_DW.V_koordynacja_ON;

    /* Switch: '<Root>/Switch2' */
    if (SCARA_215_B.DataStoreRead2_mw) {
      /* DataStoreRead: '<S10>/Data Store Read3' */
      SCARA_215_B.DataStoreRead3_b = SCARA_215_DW.wspolczynnik_2;

      /* Product: '<S10>/Product' */
      SCARA_215_B.Product_l = SCARA_215_B.DataStoreRead3_b *
        SCARA_215_B.Switch7_l;
      SCARA_215_B.Switch2_a = SCARA_215_B.Product_l;
    } else {
      SCARA_215_B.Switch2_a = SCARA_215_B.Switch7_l;
    }

    /* End of Switch: '<Root>/Switch2' */
    SCARA_215_B.Switch5 = SCARA_215_B.Switch2_a;
  }

  /* End of Switch: '<Root>/Switch5' */

  /* RateLimiter: '<Root>/Rate Limiter2' */
  u1 = SCARA_215_B.Switch5 - SCARA_215_DW.PrevY_j;
  if (u1 > SCARA_215_P.RateLimiter2_RisingLim) {
    SCARA_215_B.RateLimiter2 = SCARA_215_DW.PrevY_j +
      SCARA_215_P.RateLimiter2_RisingLim;
  } else if (u1 < SCARA_215_P.RateLimiter2_FallingLim) {
    SCARA_215_B.RateLimiter2 = SCARA_215_DW.PrevY_j +
      SCARA_215_P.RateLimiter2_FallingLim;
  } else {
    SCARA_215_B.RateLimiter2 = SCARA_215_B.Switch5;
  }

  SCARA_215_DW.PrevY_j = SCARA_215_B.RateLimiter2;

  /* End of RateLimiter: '<Root>/Rate Limiter2' */

  /* Gain: '<Root>/Gain4' */
  SCARA_215_B.Gain4 = SCARA_215_P.Gain4_Gain * SCARA_215_B.RateLimiter2;

  /* S-Function (rti_commonblock): '<S2>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* dSPACE I/O Board DS1104 #1 Unit:DAC */
  ds1104_dac_write(2, SCARA_215_B.Gain4);

  /* S-Function (rti_commonblock): '<S3>/S-Function2' */
  /* This comment workarounds a code generation problem */

  /* S-Function (rti_commonblock): '<S6>/S-Function2' */
  /* This comment workarounds a code generation problem */

  /* S-Function (rti_commonblock): '<S4>/S-Function1' */
  /* This comment workarounds a code generation problem */

  /* S-Function (rti_commonblock): '<S4>/S-Function2' */
  /* This comment workarounds a code generation problem */
}

/* Model update function */
static void SCARA_215_update(void)
{
  /* Update for Memory: '<S13>/Memory1' */
  SCARA_215_DW.Memory1_PreviousInput = SCARA_215_B.Switch1;

  /* Update for Memory: '<S15>/Memory3' */
  SCARA_215_DW.Memory3_PreviousInput = SCARA_215_B.Switch1;

  /* Update for Memory: '<S14>/Memory1' */
  SCARA_215_DW.Memory1_PreviousInput_j = SCARA_215_B.Switch1_g;

  /* Update for Memory: '<S16>/Memory3' */
  SCARA_215_DW.Memory3_PreviousInput_l = SCARA_215_B.Switch1_g;

  /* Update for Memory: '<S24>/Memory' */
  SCARA_215_DW.Memory_PreviousInput = SCARA_215_B.Logic[0];

  /* Update for UnitDelay: '<S23>/Delay Input1' */
  SCARA_215_DW.DelayInput1_DSTATE = SCARA_215_B.Compare_e;

  /* Update for Memory: '<S28>/Memory' */
  SCARA_215_DW.Memory_PreviousInput_d = SCARA_215_B.Logic_g[0];

  /* Update for Memory: '<S11>/Memory3' */
  SCARA_215_DW.Memory3_PreviousInput_f = SCARA_215_B.Switch7_j;

  /* Update for Memory: '<S12>/Memory3' */
  SCARA_215_DW.Memory3_PreviousInput_b = SCARA_215_B.Switch7_f;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++SCARA_215_M->Timing.clockTick0)) {
    ++SCARA_215_M->Timing.clockTickH0;
  }

  SCARA_215_M->Timing.t[0] = SCARA_215_M->Timing.clockTick0 *
    SCARA_215_M->Timing.stepSize0 + SCARA_215_M->Timing.clockTickH0 *
    SCARA_215_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void SCARA_215_initialize(void)
{
  /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
  SCARA_215_DW.WZ1 = SCARA_215_P.DataStoreMemory_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory1' */
  SCARA_215_DW.WZ2 = SCARA_215_P.DataStoreMemory1_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory10' */
  SCARA_215_DW.V_koordynacja_ON = SCARA_215_P.DataStoreMemory10_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory2' */
  SCARA_215_DW.bazowanie1 = SCARA_215_P.DataStoreMemory2_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory3' */
  SCARA_215_DW.bazowanie2 = SCARA_215_P.DataStoreMemory3_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory4' */
  SCARA_215_DW.V_zadana_ON = SCARA_215_P.DataStoreMemory4_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory5' */
  SCARA_215_DW.V_zadana_wartosc = SCARA_215_P.DataStoreMemory5_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory6' */
  SCARA_215_DW.wyzwolenie = SCARA_215_P.DataStoreMemory6_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory7' */
  SCARA_215_DW.wyzwalanie_ON = SCARA_215_P.DataStoreMemory7_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory8' */
  SCARA_215_DW.wspolczynnik_1 = SCARA_215_P.DataStoreMemory8_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory9' */
  SCARA_215_DW.wspolczynnik_2 = SCARA_215_P.DataStoreMemory9_InitialValue;
  SCARA_215_PrevZCX.DS1104ENC_SET_POS_C1_Trig_ZCE = POS_ZCSIG;
  SCARA_215_PrevZCX.DS1104ENC_SET_POS_C2_Trig_ZCE = POS_ZCSIG;

  /* InitializeConditions for Memory: '<S13>/Memory1' */
  SCARA_215_DW.Memory1_PreviousInput = SCARA_215_P.Memory1_X0;

  /* InitializeConditions for Memory: '<S15>/Memory3' */
  SCARA_215_DW.Memory3_PreviousInput = SCARA_215_P.Memory3_X0;

  /* InitializeConditions for Memory: '<S14>/Memory1' */
  SCARA_215_DW.Memory1_PreviousInput_j = SCARA_215_P.Memory1_X0_h;

  /* InitializeConditions for Memory: '<S16>/Memory3' */
  SCARA_215_DW.Memory3_PreviousInput_l = SCARA_215_P.Memory3_X0_b;

  /* InitializeConditions for Memory: '<S24>/Memory' */
  SCARA_215_DW.Memory_PreviousInput = SCARA_215_P.Memory_X0;

  /* InitializeConditions for UnitDelay: '<S23>/Delay Input1' */
  SCARA_215_DW.DelayInput1_DSTATE = SCARA_215_P.DelayInput1_InitialCondition;

  /* InitializeConditions for Memory: '<S28>/Memory' */
  SCARA_215_DW.Memory_PreviousInput_d = SCARA_215_P.Memory_X0_m;

  /* InitializeConditions for Memory: '<S11>/Memory3' */
  SCARA_215_DW.Memory3_PreviousInput_f = SCARA_215_P.Memory3_X0_j;

  /* InitializeConditions for RateLimiter: '<Root>/Rate Limiter1' */
  SCARA_215_DW.PrevY = SCARA_215_P.RateLimiter1_IC;

  /* InitializeConditions for Memory: '<S12>/Memory3' */
  SCARA_215_DW.Memory3_PreviousInput_b = SCARA_215_P.Memory3_X0_e;

  /* InitializeConditions for RateLimiter: '<Root>/Rate Limiter2' */
  SCARA_215_DW.PrevY_j = SCARA_215_P.RateLimiter2_IC;
}

/* Model terminate function */
static void SCARA_215_terminate(void)
{
  /* (no terminate code required) */
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  SCARA_215_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  SCARA_215_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  SCARA_215_initialize();
}

void MdlTerminate(void)
{
  SCARA_215_terminate();
}

/* Registration function */
RT_MODEL_SCARA_215_T *SCARA_215(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)SCARA_215_M, 0,
                sizeof(RT_MODEL_SCARA_215_T));

  /* Initialize timing info */
  {
    int_T *mdlTsMap = SCARA_215_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    SCARA_215_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    SCARA_215_M->Timing.sampleTimes = (&SCARA_215_M->Timing.sampleTimesArray[0]);
    SCARA_215_M->Timing.offsetTimes = (&SCARA_215_M->Timing.offsetTimesArray[0]);

    /* task periods */
    SCARA_215_M->Timing.sampleTimes[0] = (0.001);

    /* task offsets */
    SCARA_215_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(SCARA_215_M, &SCARA_215_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = SCARA_215_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    SCARA_215_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(SCARA_215_M, -1);
  SCARA_215_M->Timing.stepSize0 = 0.001;
  SCARA_215_M->solverInfoPtr = (&SCARA_215_M->solverInfo);
  SCARA_215_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&SCARA_215_M->solverInfo, 0.001);
  rtsiSetSolverMode(&SCARA_215_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  SCARA_215_M->ModelData.blockIO = ((void *) &SCARA_215_B);
  (void) memset(((void *) &SCARA_215_B), 0,
                sizeof(B_SCARA_215_T));

  /* parameters */
  SCARA_215_M->ModelData.defaultParam = ((real_T *)&SCARA_215_P);

  /* states (dwork) */
  SCARA_215_M->ModelData.dwork = ((void *) &SCARA_215_DW);
  (void) memset((void *)&SCARA_215_DW, 0,
                sizeof(DW_SCARA_215_T));

  {
    /* user code (registration function declaration) */
    /*Initialize global TRC pointers. */
    SCARA_215_rti_init_trc_pointers();
  }

  /* Initialize Sizes */
  SCARA_215_M->Sizes.numContStates = (0);/* Number of continuous states */
  SCARA_215_M->Sizes.numY = (0);       /* Number of model outputs */
  SCARA_215_M->Sizes.numU = (0);       /* Number of model inputs */
  SCARA_215_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  SCARA_215_M->Sizes.numSampTimes = (1);/* Number of sample times */
  SCARA_215_M->Sizes.numBlocks = (147);/* Number of blocks */
  SCARA_215_M->Sizes.numBlockIO = (92);/* Number of block outputs */
  SCARA_215_M->Sizes.numBlockPrms = (91);/* Sum of parameter "widths" */
  return SCARA_215_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
