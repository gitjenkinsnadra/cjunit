#include "cnmu.h"
/* ======================================================================
 * 
 * 
 * 
 * 
 * ====================================================================== */
int main(int argc, char **argv)
{
  
  nmu_begin("nmu_sample_sigv")

  /* call your test here */
  {
    nmu_assert( (99 == 99), "SV1");
    nmu_assert( (-1 == 99), "SV2");
    nmu_assert( (23 / 0), "SV3"); 
    nmu_assert( (23 == 23), "SV4"); 
    nmu_assert( (15 == 15), "SV5");   
  }

  nmu_end
}




