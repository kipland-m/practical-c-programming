#include <stdio.h>
#include <math.h>
int x_1;
int x_2;
int y_1;
int y_2;

double square_x;
double square_y;


int main(){
  // (x2 - x1)² + (y2 - y1)²
  int x_1 = 8;
  int x_2 = 10;
  int y_1 = 2;
  int y_2 = 1;

  square_x = pow(x_2 - x_1, 2);
  square_y = pow(y_2 - y_1, 2);

  printf("%f %f\n", square_x, square_y);
  return (0);
}
