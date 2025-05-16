#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello";
    int n = strlen(str);

    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];     //assigns the original character to a temp character
        str[i] = str[n - i - 1];  //swaps that num with the the corresponding num from the other end
        str[n - i - 1] = temp;   //stores the original num at the other end
    }

    printf("Reversed string: %s\n", str);
    return 0;
}