#include <stdio.h>
#include <stdlib.h>
int main()
{
    float length, breadth, perimeter, area;
    printf("Enter the length of the rectangle - \n ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle - \n ");
    scanf("%f", &breadth);
    perimeter = 2 * (length + breadth);
    area = length * breadth;
    printf("Perimeter of the rectangle = %.2f\n", perimeter);
    printf("Area of the rectangle = %.2f\n", area);
    return 0;
}