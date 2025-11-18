#include <stdio.h>

union Address {
    char name[50];
    char home[100];
    char hostel[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union Address a;

    printf("Enter your present address: ");
    scanf("%s", a.home);

    printf("\n--- OUTPUT ---\n");
    printf("Present Address: %s\n", a.home);

    return 0;
}
