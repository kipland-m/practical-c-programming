#include <stdio.h>
signed char very_short;
char line[100];
int temp;


int main(){
  // unsigned integers 
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d", &temp);

  very_short = temp;
}
