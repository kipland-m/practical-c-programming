#include <stdio.h>

float triangle(float width, float height) {
  float area;
  area = width * height / 2.0;

  return area;
}

int main() {
  printf("%f\n", triangle(1.3, 8.3));

  return 0;
}
