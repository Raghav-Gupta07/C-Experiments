#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'X';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("%d\n", a);
    printf("%f\n", b);
    printf("%c\n", c);

    printf("%p\n", p1);
    printf("%p\n", p2);
    printf("%p\n", p3);

    printf("%d\n", *p1);
    printf("%f\n", *p2);
    printf("%c\n", *p3);

    return 0;
}
