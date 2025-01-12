#include <stdio.h>
#include <string.h>

char first[100];
char last[100];

/* Computed full name */
char full[200];

int main(){
	printf("Enter first name: ");
	fgets(first, sizeof(first), stdin);
	first[strlen(first)-1] = '\0'; /* In C, at the end of our string- it stores a newline character. This is
					intelligently setting this newline character to the '\0' 
					which signifies the end of the string */	
	printf("Enter last name: ");
	fgets(last, sizeof(last), stdin);
	last[strlen(last)-1] = '\0';


	strcpy(full, first);
	strcat(full, " ");
	strcat(full, last);

	printf("The name is %s\n", full);
	return (0);
}
