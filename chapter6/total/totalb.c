#include <stdio.h>
char line[100];
int total;
int item;
int minus_items;

int main(){
  total = 0;
  minus_items = 0;

  while (1) {
    printf("Enter # to add\n");
    printf("or 0 to stop: ");

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &item);

    if (item == 0)
      break;
    if (item < 0) {
      ++minus_items;
      continue;
    }

    total += item;
    printf("Total: %d\n", total);
  }
  printf("Final total: %d\n", total);
  printf("with %d negative items omitted\n",
                minus_items);

  return (0);
}
