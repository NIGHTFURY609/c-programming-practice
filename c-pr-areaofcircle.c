#include <stdio.h>
#define PI 3.14

int main(void) {
    int radius;
    double area;

    printf("radius =");
    scanf("%d", &radius);

    area = PI * radius * radius;
    printf("area = %f", (float)area);

    return 0;
}