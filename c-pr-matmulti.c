#include <stdio.h>

int main() {
    int m1, n1, m2, n2;

    // Read dimensions of first matrix
    printf("Enter rows and columns of first matrix (m1 n1): ");
    scanf("%d %d", &m1, &n1);

    // Read dimensions of second matrix
    printf("Enter rows and columns of second matrix (m2 n2): ");
    scanf("%d %d", &m2, &n2);

    // Check if multiplication is possible
    if (n1 != m2) {
        printf("Matrix multiplication not possible. Columns of first != rows of second.\n");
        return 1;
    }
    int mat1[m1][n1],mat2[m2][n2],result[m1][n2];
    printf("enter the first matrix");
    for (int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("enter the 2nd matrix:");
    for (int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
            scanf("%d",&mat2[i][j]);
        }
    }

        for (int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
        for (int k=0;k<n1;k++){
            result[i][j]+=mat1[m1][k]*mat2[k][n2];
        }
    }
    }

    printf("the result is:");
    for (int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            printf("%d",result[i][j]);
        }
    }

}