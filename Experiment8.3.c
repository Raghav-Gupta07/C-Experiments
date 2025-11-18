#include <stdio.h>

int point(int *x, int *y) {
    *x = *x + 10;
    *y = *y + 5;
    return 0;
}

int main() {
    int a = 10, b = 20;

    point(&a, &b);

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}
