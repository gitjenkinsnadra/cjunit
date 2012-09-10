#include "nmu.h"
nmu_declare("nmu_sample_sigv")

/* ======================================================================
 * 
 * 
 * 
 * 
 * ====================================================================== */
int main(int argc, char **argv)
{
  
  /* test header */
  {
    nmu_header
  }  

  /* call your test here */
  {
    nmu_assert( (99 == 99), "SV1");
    nmu_assert( (-1 == 99), "SV2");
    nmu_assert( (23 / 0), "SV3"); 
    nmu_assert( (23 == 23), "SV4"); 
    nmu_assert( (15 == 15), "SV5");   
  }

  /* display and return result */
  {
    nmu_display
    nmu_exit
  }
}




