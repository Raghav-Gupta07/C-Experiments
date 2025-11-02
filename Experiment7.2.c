#include <stdio.h>

int main() {
    int x = 10;
    float y = 2.5;
    char z = 'A';

    int *p1 = &x;
    float *p2 = &y;
    char *p3 = &z;

    printf("%p\n", p1);
    p1++;
    printf("%p\n", p1);

    printf("%p\n", p2);
    p2++;
    printf("%p\n", p2);

    printf("%p\n", p3);
    p3++;
    printf("%p\n", p3);

    return 0;
}
