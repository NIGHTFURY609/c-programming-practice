#include <stdio.h>
#include <string.h>

// Define the structure
struct Student {
    char name[50];
    int age;
};

// Function that takes a pointer to a Student struct
void printStudent(struct Student *s) {
    printf("Name: %s\n", s->name);
    printf("Age: %d\n", s->age);
}

int main() {
    // Create a Student object
    struct Student stu1;

    // Fill the struct
    strcpy(stu1.name, "Alice");
    stu1.age = 20;

    // Pass the address of stu1 to the function
    printStudent(&stu1);

    return 0;
}
