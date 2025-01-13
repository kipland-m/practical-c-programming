#include <stdio.h>
#include <math.h>

char line[100];
const float PI = 3.14159265359;
float volume;
float radius;

int main(){
    printf("enter radius value: ");
    fgets(line, sizeof(line), stdin);

    sscanf(line, "%f", &radius);

    volume = (4/3) * PI * pow(radius, 3);

    printf("volume: %f\n", volume);
    return (0);
}
