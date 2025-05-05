#include <stdio.h>
int main(void)
{
    int a = 5, b = 8;
    float c = 0, d = 0;
    c = a / b;
    printf("\n [%f] \n", c);
    d = (float)a / (float)b;
    printf("\n [%f] \n", d);
    return 0;
}
