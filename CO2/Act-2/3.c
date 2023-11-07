#include <stdio.h>

int main() {
    const float PI = 3.14;
    float radius, height;

    printf("Enter the radius of the powder tin (in cm) - ");
    scanf("%f", &radius);
    printf("Enter the height of the powder tin (in cm) - ");
    scanf("%f", &height);

    float volume = PI * radius * radius * height;
    printf("The volume of the powder tin is %.2f cubic cm\n", volume);

    return 0;
}
