  /*********************** dSPACE target specific file *************************

   Header file SCARA_trc_ptr.h:

   Declaration of function that initializes the global TRC pointers

   RTI1104 7.7 (02-Nov-2016)
   Mon Mar 12 09:20:22 2018

   Copyright 2018, dSPACE GmbH. All rights reserved.

  *****************************************************************************/
  #ifndef RTI_HEADER_SCARA_trc_ptr_h_
  #define RTI_HEADER_SCARA_trc_ptr_h_
  /* Include the model header file. */
  #include "SCARA.h"
  #include "SCARA_private.h"

  #ifdef EXTERN_C
  #undef EXTERN_C
  #endif

  #ifdef __cplusplus
  #define EXTERN_C                       extern "C"
  #else
  #define EXTERN_C                       extern
  #endif

  /*
   *  Declare the global TRC pointers
   */
              EXTERN_C volatile  real_T *p_0_SCARA_real_T_0;
              EXTERN_C volatile  real_T *p_1_SCARA_real_T_0;
              EXTERN_C volatile  real_T *p_2_SCARA_real_T_0;

  /*
   *  Declare the general function for TRC pointer initialization
   */
  EXTERN_C void SCARA_rti_init_trc_pointers(void);
   #endif                       /* RTI_HEADER_SCARA_trc_ptr_h_ */
