#include <stdio.h>

void Function1() {
    static int count = 0;
    count++;
    printf("Count: %d\n", count);
}

int main() {
    Function1();
    Function1();
    Function1();
    return 0;
}
