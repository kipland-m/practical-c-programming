#include <stdio.h>
char line[100];

int result;
char operator;
int value;

int main(){
  value = 0;
  while (1) {
    printf("Result: %d\n", value);
    printf("Enter operator and number: ");

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%c %d", &operator, &value);

    if ((operator == 'q') || (operator == 'Q')){
      break;
    }

    switch (operator) {
      case '+':
        value += value;
        break;
      case '-':
        value -= value;
        break;
      case '*':
        value *= value;
        break;
      case '/':
        if (value == 0) {
          printf("Divide by zero error!");
          printf("ignoring operation..");
        } else {
          value /= value;
          break;
        }
      default:
        printf("Unknown operator %c\n", operator);
        break;
    }
  }

  return 0;
}
