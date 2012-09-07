#include "nmu.h"
nmu_declare("nmu_sample_KO")

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
    nmu_assert( (-1 == 99), "CR2");
    nmu_assert( (23 == 15), "CR3"); 
  }

  /* display and return result */
  {
    nmu_display
    nmu_exit
  }
}




