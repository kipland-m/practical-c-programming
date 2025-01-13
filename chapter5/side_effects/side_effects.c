#include <stdio.h>

int size;
int result;

int main(){
  // example of side effects in C,
  // the result of this will equal 6.
  size = 5;
  result = ++size; // result = 5 + 1

  printf("%d %d\n", size, result);

  return (0);
}

