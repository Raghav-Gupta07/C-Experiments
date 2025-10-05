#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int num, count = 0;
    printf("Enter number to find the frequency of: ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++) {
        if (arr[i] == num)
            count++;
    }

    printf("Frequency of %d is: %d", num, count);

    return 0;
}
