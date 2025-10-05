#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements:");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    int big = a[0];
    int big2 = a[1];

    for (int i = 1; i < n; i++) 
    {
        if (a[i] > big) 
        {
            big2 = big;
            big = a[i];
        }
         else if (a[i] > big2 && a[i] != big) 
        {
            big2 = a[i];
        }
    }
        printf("second largest number: %d", big2);

    return 0;
}
