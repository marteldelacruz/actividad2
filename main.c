#include <stdio.h>
#define MAX_CHARS 100

int main() {
    char name[MAX_CHARS];
    printf("Hello, World!\n");

    // ask for name
    printf("Type your name:");
    fgets(name, MAX_CHARS, stdin);

    // print name
    printf("Hello %s :D", name);

    return 0;
}
