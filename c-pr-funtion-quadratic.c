#include <stdio.h>
#include <math.h>

int findRoots(float *a, float *b, float *c, float *root1, float *root2) {
    float discriminant = (*b) * (*b) - 4 * (*a) * (*c);

    if (*a == 0) {
        return -1; // Not a quadratic equation
    }

    if (discriminant > 0) {
        *root1 = (-(*b) + sqrt(discriminant)) / (2 * (*a));
        *root2 = (-(*b) - sqrt(discriminant)) / (2 * (*a));
        return 2; // Two real and distinct roots
    } else if (discriminant == 0) {
        *root1 = *root2 = -(*b) / (2 * (*a));
        return 1; // One real and repeated root
    } else {
        return 0; // Complex roots, not handled here
    }
}

