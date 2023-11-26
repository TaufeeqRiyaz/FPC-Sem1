#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float Number1, Number2;
    printf("Enter the first float number - \n ");
    scanf("%f", &Number1);
    printf("Enter the second float number - \n ");
    scanf("%f", &Number2);

    if (Number2 != 0) {
        float quotient = Number1 / Number2;
        float remainder = fmod(Number1, Number2);

        printf("Quotient - %.2f\n", quotient);
        printf("Remainder - %.2f\n", remainder);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}
