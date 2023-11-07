#include <stdio.h>

int main() {
    const float PI = 3.14;
    float radius;

    printf("Enter the radius of the coffee coaster or plate (in cm) - ");
    scanf("%f", &radius);

    float area = PI * radius * radius;
    printf("The area of the coffee coaster or plate is %.2f square cm\n", area);

    return 0;
}
