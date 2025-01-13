#include <stdio.h>

int size;
int result;
int result1;
int value;

int main(){
  // example of side effects in C,
  // the result of this will equal 6.
  size = 5;
  value = 1;
  result = ++size; // result = 5 + 1

  // this var can confuse the c compiler.
  // by swapping 3 and 5, our result1 can turn from
  // 13 -> 11
  result1 = (value++ * 3) + (value++ * 5);

  printf("%d %d\n", size, result);
  printf("%d\n", result1);

  return (0);
}
