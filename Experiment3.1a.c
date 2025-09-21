#include<stdio.h>

int main() {
    int a, b, c;

    
    printf("Enter three side lengths of a valid Triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Equilateral");
        } 
        else if (a == b) 
        {
            printf("Isosceles Triangle");
        }
        else if (b == c) 
        {
            printf("Isoceles Triangle");
        }
        else if (c == a) 
        {
            printf("Isoceles Triangle");
        }
        else 
        {
            printf("Scalene");
        }
    } 
    else 
    {
        printf("Not a valid Triangle");
    }

    return 0;
}