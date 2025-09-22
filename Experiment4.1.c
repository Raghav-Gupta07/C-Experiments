    #include <stdio.h>

    int num = 5,product;

    int table() {
        for (int i = 1; i <= 10; i++) {
            product = num * i;
            printf("%d * %d = %d\n", num, i, product);
        }
        return 0;
    }
    int main() {
        table();
        return 0;
    }
