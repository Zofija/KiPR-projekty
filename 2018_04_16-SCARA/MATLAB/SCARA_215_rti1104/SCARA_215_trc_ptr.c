/***************************************************************************

   Source file SCARA_215_trc_ptr.c:

   Definition of function that initializes the global TRC pointers

   RTI1104 7.4 (02-May-2015)
   Mon Apr 16 15:23:30 2018

   (c) Copyright 2018, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

/* Include header file. */
#include "SCARA_215_trc_ptr.h"
#include "SCARA_215.h"
#include "SCARA_215_private.h"

/* Compiler options to turn off optimization. */
#if !defined(DS_OPTIMIZE_INIT_TRC_POINTERS)
#ifdef _MCCPPC

#pragma options -nOt -nOr -nOi -nOx

#endif

#ifdef __GNUC__

#pragma GCC optimize ("O0")

#endif

#ifdef _MSC_VER

#pragma optimize ("", off)

#endif
#endif

/* Definition of Global pointers to data type transitions (for TRC-file access) */
volatile real_T *p_0_SCARA_215_real_T_0 = NULL;
volatile boolean_T *p_0_SCARA_215_boolean_T_1 = NULL;
volatile real_T *p_1_SCARA_215_real_T_0 = NULL;
volatile boolean_T *p_1_SCARA_215_boolean_T_1 = NULL;
volatile real_T *p_2_SCARA_215_real_T_0 = NULL;
volatile boolean_T *p_2_SCARA_215_boolean_T_1 = NULL;

/*
 *  Declare the functions, that initially assign TRC pointers
 */
static void rti_init_trc_pointers_0(void);

/* Global pointers to data type transitions are separated in different functions to avoid overloading */
static void rti_init_trc_pointers_0(void)
{
  p_0_SCARA_215_real_T_0 = &SCARA_215_B.SFunction1;
  p_0_SCARA_215_boolean_T_1 = &SCARA_215_B.DataStoreRead2_i;
  p_1_SCARA_215_real_T_0 = &SCARA_215_P.Gain3_Gain;
  p_1_SCARA_215_boolean_T_1 = &SCARA_215_P.Memory_X0;
  p_2_SCARA_215_real_T_0 = &SCARA_215_DW.Memory1_PreviousInput;
  p_2_SCARA_215_boolean_T_1 = &SCARA_215_DW.DelayInput1_DSTATE;
}

void SCARA_215_rti_init_trc_pointers(void)
{
  rti_init_trc_pointers_0();
}
