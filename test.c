#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s",str);  // Use fgets(str, 100, stdin) instead in modern code

    while (str[i] != '\0') {
        i++;
    }

    printf("Length of the string: %d\n", i);
    return 0;
}
