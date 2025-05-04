#include <stdio.h>

int main() {
    float length, breadth, height, area, volume;
    
    printf("Enter length and breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);

    printf("Enter height for volume calculation: ");
    scanf("%f", &height);

    area = length * breadth;
    volume = length * breadth * height;

    printf("Area of rectangle: %.2f\n", area);
    printf("Volume of rectangle (cuboid): %.2f\n", volume);

    return 0;
}
