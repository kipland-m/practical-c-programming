#include <stdio.h>
char line[100];
float grade;

int main(){
  printf("Enter a grade: \n");
  fgets(line, sizeof(line), stdin);

  sscanf(line, "%f", &grade);

  if (grade > 0){
    if (grade < 60){
      printf("F\n");
    }}
  if (grade > 60){
    if (grade < 70){
      printf("D\n");
    }}
  if (grade > 70){
    if (grade < 80){
      printf("C\n");
    }}
  if (grade > 80){
    if (grade < 90){
      printf("B\n");
    }}
  if (grade > 90){
      printf("A\n");
    }

  return (0);
}
