#include <stdio.h>

int main() {
    // int i, j, space;
    int rows = 3; // number of rows for the pattern

    for(int i = 1; i <= rows; i++) {
        // print leading spaces
        for(int space = 1; space <= rows - i; space++) {
            printf("ㅤ");
        }

        // print stars with spaces
        for(int j = 1; j <= i; j++) {
            printf("*ㅤ");
        }

        // move to next line
        printf("\n");
    }

    return 0;
}
