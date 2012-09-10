#include "nmu.h"


/* ======================================================================
 * 
 * 
 * 
 * 
 * ====================================================================== */
int main(int argc, char **argv)
{
  nmu_begin("nmu_sample_KO")    

  /* call your test here */
  {
    nmu_assert( (-1 == 99), "CR2");
    nmu_assert( (23 == 15), "CR3"); 
  }

  nmu_end
}




