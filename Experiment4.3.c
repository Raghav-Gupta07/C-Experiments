#include <stdio.h>

int main() {
    int a = 5;

    {
        int b = 10;
        printf("a = %d\n", a);
        printf("b = %d\n", b);
    }

    {
        int c = 15;
        printf("a = %d\n", a);
        printf("c = %d\n", c);
    }

    printf("a = %d\n", a);

    return 0;
}
