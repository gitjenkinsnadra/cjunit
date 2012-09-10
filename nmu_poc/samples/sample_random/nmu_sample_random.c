/* ======================================================================
 * 
 * 
 * 
 * 
 * ====================================================================== */
#include <stdlib.h>
#include <time.h>
/* ======================================================================
 * 
 * 
 * 
 * 
 * ====================================================================== */
#include "nmu.h"
nmu_declare("nmu_sample_random")


int main(int argc, char **argv)
{
  
  /* test header */
  {
    nmu_header
  }  
  
  /* call your test here */
  {
    int rand_value;
    /* initialize random seed: */
    srand ( time(NULL) );
    rand_value = rand() % 10 + 1;
    nmu_assert( ( rand_value > 2 ), "RANDOM");
  }

  /* test result */
  {
    nmu_display
    nmu_exit
  }
}




