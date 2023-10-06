// c program to calculate the area of a circle using macros

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define AREA(r) (PI * r * r)
int main()
{
    float radius, area;
    printf("Enter the radius of the circle - \n ");
    scanf("%f", &radius);
    area = AREA(radius);
    printf("Area of the circle = %.2f\n", area);
    return 0;
}