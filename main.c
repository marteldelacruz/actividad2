#include <stdio.h>
#define MAX_CHARS 100

int main() {
    char name[MAX_CHARS];
    unsigned int age;

    printf("Hello, World!\n");

    // ask for name
    printf("Type your name:");
    fgets(name, MAX_CHARS, stdin);

    // ask for age
    printf("Type your age:");
    scanf("%u", &age);

    // print name and age
    printf("Hello %s :D\nYour age is: %u", name, age);

    return 0;
}
