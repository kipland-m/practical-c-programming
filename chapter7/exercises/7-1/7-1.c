#include <stdio.h>
#include <string.h>
char line[100];

char unit[3];
float value;
float result;

/*
 * Exercise 7-1: Write a program to convert English units to metric (i.e., miles to kilometers, gallons to liters, etc.). Include a specification and a code design.
 *
 * This is a program that will take user input (Imperial units)
 * and convert them to metric units.
 *
 * Provide a way for the user to:
 * Instruct the program of what they want to convert
 * (miles -> km, gal-> liter)
 *
 * Get a returned value of "Type": "Value"
 *
 * example program use:
 *    
 *    >mi 5562
 *
 *    >> km <converted value>
 *
 * Miles -> kilometers
 * mi * 1.609344 = km
 *
 * Gal -> liters
 * gal * 3.785412 = li
 *
 */

/*
Coding Improvements Summary:
1. **Input Validation**: Ensure valid input is parsed and handle errors if `sscanf` fails.
   if (sscanf(line, "%s %f", unit, &value) != 2) {
       printf("Invalid input. Please use the format '>unit value'.\n");
       return 1;
   }

2. **Case Insensitivity**: Convert `unit` to lowercase for user-friendly input handling.
   for (int i = 0; unit[i]; i++) {
       unit[i] = tolower(unit[i]);
   }

3. **Precision in Output**: Limit decimal places for cleaner results.
   printf("Equivalent in KM: %.2f\n", result);

4. **Refactor with Functions**: Extract conversion logic into functions for clarity and maintainability.
   float miles_to_km(float miles) { return miles * 1.609344; }
   float gallons_to_liters(float gallons) { return gallons * 3.785412; }

5. **Scalability**: Add more units to extend functionality.

6. **Edge Case Handling**: Account for zero, negative, or unexpected inputs.
*/

int main(){
  printf("Enter unit & value | e.g. >mi 55.5\n");

  fgets(line, sizeof(line), stdin);
  sscanf(line, "%s %f", unit, &value);

  if (strcmp(unit, "mi") == 0) {
    // convert mi to kilometers 
    result = value * 1.609344;
    printf("equivalent in KM: ");
    printf("%f\n", result);

  } else if (strcmp(unit, "gal") == 0){
    // convert gal to liters
    result = value * 3.785412;
    printf("equivalent in LI: ");
    printf("%f\n", result);

  } else {
    printf("Type of unit not recognized. Try something like 'mi', 'gal', ft'\n");

  }

  return (0);
}
