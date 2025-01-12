#include <stdio.h>

char line[100]; // line of keyboard input
		// - array of chars of length 100

int main() {
	fgets(line, sizeof(line), stdin);
	// sscanf(line, format, &variable

}
