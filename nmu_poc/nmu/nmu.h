#ifndef __NMU__
#define __NMU__ 

#include <stdio.h>

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
     nmu_checks_failed++;\
     }\
     else \
     {\
     printf("%s;chk;%s;%d;OK;%s;\n",\
       nmu_test_name,\
       (MESSAGE_TEST),\
       nmu_checks_run,\
       #TEST); \
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
#define nmu_decl(NMU_TEST_NAME)\
  static int nmu_checks_run=0;\
  static int nmu_checks_ok=0;\
  static int nmu_checks_failed=0;\
  static const char nmu_test_name[]=NMU_TEST_NAME;
/* ======================================================================
 * 
 * 
 * 
 * 
 * ====================================================================== */ 
#define nmu_end do {\
  int res = (nmu_checks_failed == 0);\
  printf("%s;tst;%d;%d;%d;%s\n", \
    nmu_test_name, \
    nmu_checks_run,\
    nmu_checks_ok,\
    nmu_checks_failed,\
    (res) ? "OK;":"KO;"\
  );\
  return (res);\
}while(0);
 
 #endif /* __NMU__  */