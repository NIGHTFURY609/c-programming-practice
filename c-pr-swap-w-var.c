//it uses XOR bit operation now

#include <stdio.h>

int main() {
    int a = 5, b = 10;
    printf("Before swap: a = %d, b = %d\n", a, b);

    a ^= b;
    b ^= a;
    a ^= b;

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
