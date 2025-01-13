#include <stdio.h>

char line[100];
float fahr;
float celsius;

int main() {
    printf("enter centigrade value: ");
    fgets(line, sizeof(line), stdin);

    sscanf(line, "%f", &celsius);

    printf("%.1f\n", celsius * 1.8 + 32);

    return (0);
}
