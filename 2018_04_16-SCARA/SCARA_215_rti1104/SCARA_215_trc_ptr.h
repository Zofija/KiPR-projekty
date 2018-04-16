  /*********************** dSPACE target specific file *************************

   Header file SCARA_215_trc_ptr.h:

   Declaration of function that initializes the global TRC pointers

   RTI1104 7.4 (02-May-2015)
   Mon Apr 16 09:25:08 2018

   (c) Copyright 2018, dSPACE GmbH. All rights reserved.

  *****************************************************************************/
  #ifndef RTI_HEADER_SCARA_215_trc_ptr_h_
  #define RTI_HEADER_SCARA_215_trc_ptr_h_
  /* Include the model header file. */
  #include "SCARA_215.h"
  #include "SCARA_215_private.h"

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
              EXTERN_C volatile  real_T *p_0_SCARA_215_real_T_0;
              EXTERN_C volatile  boolean_T *p_0_SCARA_215_boolean_T_1;
              EXTERN_C volatile  real_T *p_1_SCARA_215_real_T_0;
              EXTERN_C volatile  boolean_T *p_1_SCARA_215_boolean_T_1;
              EXTERN_C volatile  real_T *p_2_SCARA_215_real_T_0;
              EXTERN_C volatile  boolean_T *p_2_SCARA_215_boolean_T_1;

  /*
   *  Declare the general function for TRC pointer initialization
   */
  EXTERN_C void SCARA_215_rti_init_trc_pointers(void);
   #endif                       /* RTI_HEADER_SCARA_215_trc_ptr_h_ */
