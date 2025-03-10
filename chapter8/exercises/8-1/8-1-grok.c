#include <stdio.h>

void print_horizontal_line() {
    int i;
    for (i = 0; i < 8; i++) {
        printf("+-----");
    }
    printf("+\n");
}

void print_empty_lines() {
    int i, j;
    for (i = 0; i < 3; i++) {  // 3 rows per square
        for (j = 0; j < 8; j++) {  // 8 squares across
            printf("|     ");
        }
        printf("|\n");
    }
}

int main() {
    int i;
    
    // Print the 8x8 checkerboard
    for (i = 0; i < 8; i++) {
        print_horizontal_line();
        print_empty_lines();
    }
    print_horizontal_line();  // Final bottom line
    
    return 0;
}
