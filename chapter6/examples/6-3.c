#include <stdio.h>
char line[100];
float grade;

int main(){
  printf("Enter a grade: \n");
  fgets(line, sizeof(line), stdin);

  sscanf(line, "%f", &grade);

  if (grade > 0){
    if (grade < 60)

      printf("F\n");
  }


  if (grade > 60){
    if (grade < 70)

    if (grade < 64)
      printf("D-\n");
    if (grade > 67)
      printf("D+\n");

    else{
        printf("D\n");
    }
  }

  if (grade > 70){
    if (grade < 80)

    if (grade < 74)
      printf("C-\n");
    if (grade > 77)
      printf("C++\n");

    else{
      printf("C\n");
    }
  }

  if (grade > 80){
    if (grade < 90)

    if (grade < 83)
      printf("B-\n");
    if (grade > 87)
      printf("B+\n");

    else{
      printf("B\n");
    }
  }

  if (grade > 90) {
    if (grade < 93)
      printf("A-\n");
    if (grade > 97)
      printf("A+\n");

    else{
      printf("A\n");
    }
  }

  return (0);

}
