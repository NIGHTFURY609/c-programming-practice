#include <stdio.h>

int main() {
    char name[] = "Alex";
    puts("Your name is:");
    
    for (int i = 0; name[i] != '\0'; i++) {
        putchar(name[i]);
    }

    putchar('\n');  // move to next line

    return 0;
}
