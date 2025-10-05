#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int positive = 0, negative = 0, even = 0, odd = 0;

    for ( int i = 0; i < n; i++ ) 
    {
        if ( arr[i] >= 0 )
            positive++;
        else if ( arr[i] < 0 )
            negative++;

        if ( arr[i] % 2 == 0 )
            even++;
        else
            odd++;
    }

    printf(" Positive: %d ", positive);
    printf(" Negative: %d ", negative);
    printf(" Even: %d ", even);
    printf(" Odd: %d ", odd);

    return 0;
}
