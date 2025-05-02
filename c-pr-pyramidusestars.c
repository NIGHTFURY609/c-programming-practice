#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 3; // number of rows for the pattern

    for(i = 1; i <= rows; i++) {
        // print leading spaces
        for(space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // print stars with spaces
        for(j = 1; j <= i; j++) {
            printf("* ");
        }

        // move to next line
        printf("\n");
    }

    return 0;
}
