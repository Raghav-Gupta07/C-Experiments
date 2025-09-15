#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;
    printf("Enter length:");
    scanf("%f", &length);
    
    printf("Enter Breadth:");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area=%.2f, Perimeter=%.2f\n", area, perimeter);

    return 0;
}
