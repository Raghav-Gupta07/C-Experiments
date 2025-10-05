#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int m, n, p, q;

    printf("Enter rows and cols of A: ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and cols of B: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Can't multiply\n");
        return 0;
    }

    printf("Enter A:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter B:\n");
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &b[i][j]);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            int sum = 0;
            for (int k = 0; k < n; k++) {
                int mul = a[i][k] * b[k][j];
                sum = sum + mul;
            }
            c[i][j] = sum;
        }
    }

    printf("Result:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}
