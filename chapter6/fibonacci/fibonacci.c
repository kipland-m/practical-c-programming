#include <stdio.h>
int step = 0;
int current = 0;
int old = 1;

int main(){
    while (current < 100){
      printf("%d\n", current);
      step = current + old;

      current = current + step;
      old = current;
    }
    return (0);
}
