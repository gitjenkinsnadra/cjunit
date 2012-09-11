#include "cnmu.h"

/* ======================================================================
 * 
 * 
 * 
 * 
 * ====================================================================== */
int main(int argc, char **argv)
{
  nmu_begin("nmu_sample_OK")
  
  /* call your test here */
  {
    nmu_assert( (99 == 99), "CR1");
    nmu_assert( (23 == 23), "CR4"); 
    nmu_assert( (15 == 15), "CR5");   
  }

  nmu_end
}




