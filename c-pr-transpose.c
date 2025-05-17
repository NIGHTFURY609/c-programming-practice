#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i, j;

    // Read size of square matrix
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n], transpose[n][n];

    // Read matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    // Print transpose
    printf("Transpose of the matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
            printf("%d ", transpose[j][i]);
        }
        printf("\n");
    }

    // Check for symmetry
    bool isSymmetric = true;
    for (i = 0; i < n && isSymmetric; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != transpose[i][j]) {
                isSymmetric = false;
                break;
            }
        }
    }

    // Output result
    if (isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
