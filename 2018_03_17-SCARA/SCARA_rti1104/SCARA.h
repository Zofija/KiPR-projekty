/*
 * SCARA.h
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

#ifndef RTW_HEADER_SCARA_h_
#define RTW_HEADER_SCARA_h_
#include <string.h>
#ifndef SCARA_COMMON_INCLUDES_
# define SCARA_COMMON_INCLUDES_
#include <brtenv.h>
#include <rtkernel.h>
#include <rti_assert.h>
#include <rtidefineddatatypes.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* SCARA_COMMON_INCLUDES_ */

#include "SCARA_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T SFunction1;                   /* '<S3>/S-Function1' */
  real_T Gain1;                        /* '<Root>/Gain1' */
  real_T Memory1;                      /* '<Root>/Memory1' */
  real_T czytajostpoz1;                /* '<Root>/czytaj ost poz 1' */
  real_T Switch;                       /* '<Root>/Switch' */
  real_T Switch1;                      /* '<Root>/Switch1' */
  real_T Sum;                          /* '<Root>/Sum' */
  real_T regP1;                        /* '<Root>/reg P1' */
  real_T v1;                           /* '<Root>/Saturation1' */
  real_T RateLimiter1;                 /* '<Root>/Rate Limiter1' */
  real_T Gain2;                        /* '<Root>/Gain2' */
  real_T SFunction2;                   /* '<S3>/S-Function2' */
  real_T SFunction1_h;                 /* '<S4>/S-Function1' */
  real_T Gain3;                        /* '<Root>/Gain3' */
  real_T Memory2;                      /* '<Root>/Memory2' */
  real_T czytajostpoz2;                /* '<Root>/czytaj ost poz 2' */
  real_T Switch2;                      /* '<Root>/Switch2' */
  real_T Switch3;                      /* '<Root>/Switch3' */
  real_T Sum1;                         /* '<Root>/Sum1' */
  real_T regP2;                        /* '<Root>/reg P2' */
  real_T v2;                           /* '<Root>/Saturation2' */
  real_T RateLimiter2;                 /* '<Root>/Rate Limiter2' */
  real_T Gain4;                        /* '<Root>/Gain4' */
  real_T SFunction2_f;                 /* '<S4>/S-Function2' */
} B_SCARA_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T Memory1_PreviousInput;        /* '<Root>/Memory1' */
  real_T PrevY;                        /* '<Root>/Rate Limiter1' */
  real_T Memory2_PreviousInput;        /* '<Root>/Memory2' */
  real_T PrevY_f;                      /* '<Root>/Rate Limiter2' */
  real_T WZ1;                          /* '<Root>/Data Store Memory' */
  real_T WZ2;                          /* '<Root>/Data Store Memory1' */
} DW_SCARA_T;

/* Parameters (auto storage) */
struct P_SCARA_T_ {
  real_T Gain1_Gain;                   /* Expression: (-2*180)/(500*128)
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T Memory1_X0;                   /* Expression: 0
                                        * Referenced by: '<Root>/Memory1'
                                        */
  real_T Switch_Threshold;             /* Expression: 180
                                        * Referenced by: '<Root>/Switch'
                                        */
  real_T Switch1_Threshold;            /* Expression: -180
                                        * Referenced by: '<Root>/Switch1'
                                        */
  real_T regP1_Gain;                   /* Expression: 0.2
                                        * Referenced by: '<Root>/reg P1'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 3
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -3
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T RateLimiter1_RisingLim;       /* Computed Parameter: RateLimiter1_RisingLim
                                        * Referenced by: '<Root>/Rate Limiter1'
                                        */
  real_T RateLimiter1_FallingLim;      /* Computed Parameter: RateLimiter1_FallingLim
                                        * Referenced by: '<Root>/Rate Limiter1'
                                        */
  real_T RateLimiter1_IC;              /* Expression: 0
                                        * Referenced by: '<Root>/Rate Limiter1'
                                        */
  real_T Gain2_Gain;                   /* Expression: 0.1
                                        * Referenced by: '<Root>/Gain2'
                                        */
  real_T Gain3_Gain;                   /* Expression: (-2*180)/(500*128)
                                        * Referenced by: '<Root>/Gain3'
                                        */
  real_T Memory2_X0;                   /* Expression: 0
                                        * Referenced by: '<Root>/Memory2'
                                        */
  real_T Switch2_Threshold;            /* Expression: 180
                                        * Referenced by: '<Root>/Switch2'
                                        */
  real_T Switch3_Threshold;            /* Expression: -180
                                        * Referenced by: '<Root>/Switch3'
                                        */
  real_T regP2_Gain;                   /* Expression: 0.2
                                        * Referenced by: '<Root>/reg P2'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 3
                                        * Referenced by: '<Root>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: -3
                                        * Referenced by: '<Root>/Saturation2'
                                        */
  real_T RateLimiter2_RisingLim;       /* Computed Parameter: RateLimiter2_RisingLim
                                        * Referenced by: '<Root>/Rate Limiter2'
                                        */
  real_T RateLimiter2_FallingLim;      /* Computed Parameter: RateLimiter2_FallingLim
                                        * Referenced by: '<Root>/Rate Limiter2'
                                        */
  real_T RateLimiter2_IC;              /* Expression: 0
                                        * Referenced by: '<Root>/Rate Limiter2'
                                        */
  real_T Gain4_Gain;                   /* Expression: 0.1
                                        * Referenced by: '<Root>/Gain4'
                                        */
  real_T DataStoreMemory_InitialValue; /* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory'
                                        */
  real_T DataStoreMemory1_InitialValue;/* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_SCARA_T {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (auto storage) */
extern P_SCARA_T SCARA_P;

/* Block signals (auto storage) */
extern B_SCARA_T SCARA_B;

/* Block states (auto storage) */
extern DW_SCARA_T SCARA_DW;

/* Model entry point functions */
extern void SCARA_initialize(void);
extern void SCARA_output(void);
extern void SCARA_update(void);
extern void SCARA_terminate(void);

/* Real-time Model object */
extern RT_MODEL_SCARA_T *const SCARA_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'SCARA'
 * '<S1>'   : 'SCARA/DS1104DAC_C1'
 * '<S2>'   : 'SCARA/DS1104DAC_C2'
 * '<S3>'   : 'SCARA/DS1104ENC_POS_C1'
 * '<S4>'   : 'SCARA/DS1104ENC_POS_C2'
 * '<S5>'   : 'SCARA/DS1104ENC_SETUP'
 * '<S6>'   : 'SCARA/RTI Data'
 * '<S7>'   : 'SCARA/RTI Data/RTI Data Store'
 * '<S8>'   : 'SCARA/RTI Data/RTI Data Store/RTI Data Store'
 * '<S9>'   : 'SCARA/RTI Data/RTI Data Store/RTI Data Store/RTI Data Store'
 */
#endif                                 /* RTW_HEADER_SCARA_h_ */
