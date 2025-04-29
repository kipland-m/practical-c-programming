#include <stdio.h>

int length(char string[]) {
  static int index;
  for (index = 0; string[index] != '\0'; ++index){
    index++;
  }

  return index;
}

int main() {
  char line[100];
  while (1) {
    printf("Enter line: ");
    fgets(line, sizeof(line), stdin);

    printf("Length (including newline) is: %d\n", length(line));
  }
  return 0;
}
