#include <stdio.h>

// Function to take input from the user
void input(int *a, int *b, char *op) {
    printf("Enter the numbers:\n");
    scanf("%d %d", a, b);  // use pointers to store input in main
    printf("Enter the operation (+, -, *, /):\n");
    scanf(" %c", op);      // space before %c to consume any leftover newline
}

int main() {
    int a, b;
    char op;

    input(&a, &b, &op);  // pass addresses

    switch(op) {
        case '+':
            printf("Result: %d\n", a + b);
            break;
        case '-':
            printf("Result: %d\n", a - b);
            break;
        case '*':
            printf("Result: %d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Result: %.2f\n", (float)a / b);
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Invalid operation.\n");
    }

    return 0;
}
