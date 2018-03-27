/***************************************************************************

   Source file SCARA_trc_ptr.c:

   Definition of function that initializes the global TRC pointers

   RTI1104 7.7 (02-Nov-2016)
   Mon Mar 12 09:20:22 2018

   Copyright 2018, dSPACE GmbH. All rights reserved.

 *****************************************************************************/

/* Include header file. */
#include "SCARA_trc_ptr.h"
#include "SCARA.h"
#include "SCARA_private.h"

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
volatile real_T *p_0_SCARA_real_T_0 = NULL;
volatile real_T *p_1_SCARA_real_T_0 = NULL;
volatile real_T *p_2_SCARA_real_T_0 = NULL;

/*
 *  Declare the functions, that initially assign TRC pointers
 */
static void rti_init_trc_pointers_0(void);

/* Global pointers to data type transitions are separated in different functions to avoid overloading */
static void rti_init_trc_pointers_0(void)
{
  p_0_SCARA_real_T_0 = &SCARA_B.SFunction1;
  p_1_SCARA_real_T_0 = &SCARA_P.Gain1_Gain;
  p_2_SCARA_real_T_0 = &SCARA_DW.Memory1_PreviousInput;
}

void SCARA_rti_init_trc_pointers(void)
{
  rti_init_trc_pointers_0();
}
