#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Write a program to compute the total resistance for any number of parallel resistors. */
float resistance;
float fraction_sum;
float siemens;
int i;

/* Let's focus on representing the Example:
 * 1/R = 1/R1 1/R2
 *     
 *     Where R1 = 400
 *     Where R2 = 200
 *
 *     1/400 + 1/200
 *
 *     find LCD
 *
 *     200 goes into 400 evenly,
 *     400 is LCD
 *
 *     1/200 rewritten would be 2/400
 *
 *
 *
 *
 */
int main(int argc, char *argv[]) {
  float resistors[argc];
  for (i = 0; i < argc; i++) {
    resistors[i] = atoi(argv[i]);
  }

  for (i = 1; i < argc; i++) {
    printf("%f\n", resistors[i]);
    fraction_sum = (1 / resistors[i]);
    siemens += fraction_sum;
  }


  printf("%f\n", siemens);

  resistance = 1/siemens;

  printf("resistance: %f\n", resistance);



  return 0;
}
