#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  8-1
  Print a checker board (8-by-8 grid). Each square should be 5 -by-3
  characters wide. A 2-by-2 example follows:
  +-----+-----+
  |     |     |
  |     |     |
  |     |     |
  +-----+-----+
  |     |     |
  |     |     |
  |     |     |
  +-----+-----+
*/

int x_axis;
int y_axis;
char square_line[8];
char square_walls[24];
int i;
int j;

int main(int argc, char *argv[]) {

  if (argc < 2) {
    printf("Usage: %s <x axis> <y axis>\n", argv[0]);
  } else {
    x_axis = atoi(argv[1]);
    y_axis = atoi(argv[2]);

    strcpy(square_line, "+-----+");
    strcpy(square_walls, "|     |\n|     |\n|     |");

    printf("x: %d y: %d\n", x_axis, y_axis);
  }



  for (i = 0; i < y_axis; i++) {
    if (x_axis == 1 && y_axis == 1) {
      printf("%s\n", square_line);
      printf("%s\n", square_walls);
      printf("%s\n", square_line);
      break;
    }

    for (j = 0; j < x_axis; j++) {

    }
  }










  return 0;
}
