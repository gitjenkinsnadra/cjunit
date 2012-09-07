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

  /* call your test here */
  {
    int rand_value;
    
    /* initialize random seed: */
    srand ( time(NULL) );
    
    rand_value = rand() % 10 + 1;
    
    nmu_assert( ( rand_value > 2 ), "RANDOM");
  }

  /* display and return result */
  {
    nmu_display
    nmu_exit
  }
}




