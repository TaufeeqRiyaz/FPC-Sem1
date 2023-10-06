#include <stdio.h>
#include <stdlib.h>
int main()
{
    float radius, area;
    printf("Enter the radius of the circle - \n ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("Area of the circle = %.2f\n", area);
    return 0;
}