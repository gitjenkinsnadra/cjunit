#include "nmu.h"
nmu_declare("nmu_example")

/* ======================================================================
 * 
 * 
 * 
 * 
 * ====================================================================== */
static void test1(void) {nmu_assert( (99 == 99),  "CR1"); }
static void test2(void) {nmu_assert( (-1 == 15), "CR2"); }

static void test3(void) {
  nmu_assert( (23 == 15), "CR3"); 
  nmu_assert( (23 == 23), "CR4"); 
  nmu_assert( (15 == 15), "CR5");   
}
/* ======================================================================
 * 
 * 
 * 
 * 
 * ====================================================================== */
int main(int argc, char **argv)
{
  test1();
  test2();
  test3();
  
  nmu_display
  nmu_exit
}




