#include <stdio.h>
#include <string.h>

char test1[100];
char test2[100];

int main(){
    strcpy(test1, "Test");
    strcpy(test2, "1Test");

    if (strcmp(test1, test2) == 0)
      printf("Strings are equal\n");
    else {
      printf("Not equal");
    }

    return (0);
}
