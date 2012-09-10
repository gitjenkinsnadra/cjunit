#include <stdlib.h>
#include <time.h>
#include "nmu.h"
/* ======================================================================
 * 
 * 
 * 
 * 
 * ====================================================================== */
int main(int argc, char **argv)
{
  nmu_begin("nmu_sample_random")

  /* call your test here */
  {
    int rand_value;
    /* initialize random seed: */
    srand ( time(NULL) );
    rand_value = rand() % 10 + 1;
    nmu_assert( ( rand_value > 2 ), "RANDOM");
  }

  nmu_end
}




