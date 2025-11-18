#include <stdio.h>

struct Emp { char name[50]; float basic, gross; };

int main() {
    struct Emp e;
    char choice = 'y';

    while (choice == 'y' || choice == 'Y') {

        printf("\nEnter name: ");
        scanf("%s", e.name);

        printf("Enter basic pay: ");
        scanf("%f", &e.basic);

        e.gross = e.basic + 0.52 * e.basic;

        printf("Gross Salary of %s = %.2f\n", e.name, e.gross);

        printf("\nAdd another employee? (y/n): ");
        scanf(" %c", &choice);
    }

    return 0;
}
