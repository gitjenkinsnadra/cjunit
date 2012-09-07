#include "nmu.h"
nmu_declare("nmu_sample_OK")

/* ======================================================================
 * 
 * 
 * 
 * 
 * ====================================================================== */
int main(int argc, char **argv)
{

  /* call your test here */
  {
    nmu_assert( (99 == 99), "CR1");
    nmu_assert( (23 == 23), "CR4"); 
    nmu_assert( (15 == 15), "CR5");   
  }

  /* display and return result */
  {
    nmu_display
    nmu_exit
  }
}




