#include <stdio.h>

struct Complex {
    float r, i;
};

struct Complex read() {
    struct Complex c;
    scanf("%f%f", &c.r, &c.i);
    return c;
}

struct Complex add(struct Complex a, struct Complex b) {
    struct Complex s = { a.r + b.r, a.i + b.i };
    return s;
}

struct Complex sub(struct Complex a, struct Complex b) {
    struct Complex d = { a.r - b.r, a.i - b.i };
    return d;
}

int main() {
    struct Complex c1, c2, s, d;

    printf("Enter first complex (real imag): ");
    c1 = read();

    printf("Enter second complex (real imag): ");
    c2 = read();

    s = add(c1, c2);
    d = sub(c1, c2);

    printf("Sum = %.1f + %.1fi\n", s.r, s.i);
    printf("Diff = %.1f + %.1fi\n", d.r, d.i);

    return 0;
}
