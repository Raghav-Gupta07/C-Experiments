#include <stdio.h>

int main() {
    char name[100];
    int age;

    printf("Enter Your Name? ");
    scanf("%s", &name);

    printf("How old are you? ");
    scanf("%d", &age);

    printf("Hello, %s! You are %d years old", name, age);

    return 0;
}
