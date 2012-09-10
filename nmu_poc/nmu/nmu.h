#ifndef __NMU__
#define __NMU__ 

#include <stdio.h>
#define NMU_VERSION "nmu_v0.1"
/* ======================================================================
 * 
 * 
 * 
 * 
 * ====================================================================== */ 
#define nmu_assert(TEST, MESSAGE_TEST)\
 do { \
   if ( !(TEST) ) {\
     printf("%s;chk;%s;%d;KO;%s;\n",\
       nmu_test_name,\
       (MESSAGE_TEST),\
       nmu_checks_run,\
       #TEST ); \
       if(nmu_output_file_init_ok)\
         fprintf(nmu_output_file, "%s;chk;%s;%d;KO;%s;\n",\
         nmu_test_name,\
         (MESSAGE_TEST),\
         nmu_checks_run,\
         #TEST ); \
     nmu_checks_failed++;\
     }\
     else \
     {\
     printf("%s;chk;%s;%d;OK;%s;\n",\
       nmu_test_name,\
       (MESSAGE_TEST),\
       nmu_checks_run,\
       #TEST); \
       if(nmu_output_file_init_ok)\
         fprintf(nmu_output_file, "%s;chk;%s;%d;OK;%s;\n",\
         nmu_test_name,\
         (MESSAGE_TEST),\
         nmu_checks_run,\
         #TEST ); \
     nmu_checks_ok++;\
     }\
     nmu_checks_run++;\
   } while (0)
/* ======================================================================
 * 
 * 
 * 
 * 
 * ====================================================================== */
#define nmu_declare( NMU_TEST_NAME) \
  static int nmu_checks_run=0;\
  static int nmu_checks_ok=0;\
  static int nmu_checks_failed=0;\
  static FILE * nmu_output_file;\
  static int nmu_output_file_init_ok = 0;\
  static char nmu_test_name[] = NMU_TEST_NAME;
  
/* ======================================================================
 * 
 * 
 * 
 * 
 * ====================================================================== */ 
#define nmu_init( NMU_TEST_NAME)  do{\
  nmu_output_file = fopen( NMU_TEST_NAME ".nrr" ,"w");\
  if( nmu_output_file ){\
    printf("%s;ini;%s;OK;\n", \
      NMU_TEST_NAME, \
      NMU_VERSION \
    );\
    fprintf(nmu_output_file, "%s;ini;%s;OK;\n", \
      NMU_TEST_NAME, \
      NMU_VERSION \
    );\
    nmu_output_file_init_ok = 1;\
  }else\
  {\
    printf("%s;ini;%s;KO;\n", \
      NMU_TEST_NAME, \
      NMU_VERSION \
    );\
    fclose (nmu_output_file);\
    \
  }\
}while(0);  
/* ======================================================================
 * 
 * 
 * 
 * 
 * ====================================================================== */ 
#define nmu_begin(NMU_TEST_NAME) nmu_declare(NMU_TEST_NAME) nmu_init(NMU_TEST_NAME)

/* ======================================================================
 * 
 * 
 * 
 * 
 * ====================================================================== */ 
#define nmu_display do {\
  printf("%s;res;%d;%d;%d;%s\n", \
    nmu_test_name, \
    nmu_checks_run,\
    nmu_checks_ok,\
    nmu_checks_failed,\
    (nmu_checks_failed == 0) ? "OK;":"KO;"\
  );\
  if( nmu_output_file )\
  fprintf(nmu_output_file, "%s;res;%d;%d;%d;%s\n", \
    nmu_test_name, \
    nmu_checks_run,\
    nmu_checks_ok,\
    nmu_checks_failed,\
    (nmu_checks_failed == 0) ? "OK;":"KO;"\
  );\
}while(0);
/* ======================================================================
 * 
 * 
 * 
 * 
 * ====================================================================== */ 
#define nmu_close do{\
  if (nmu_output_file_init_ok) fclose (nmu_output_file);\
  return ( nmu_checks_failed );\
}while(0);
/* ======================================================================
 * 
 * 
 * 
 * 
 * ====================================================================== */ 
#define nmu_end nmu_display nmu_close


 
#endif /* __NMU__  */