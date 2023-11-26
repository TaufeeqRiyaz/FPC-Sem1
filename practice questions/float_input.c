#include <stdio.h>
#include<stdlib.h>

int main() {
    float num1, num2;

    printf("Enter the first floating point number \n ");
    
    if (scanf("%f", &num1) != 1) {
        printf("Invalid input. Please enter a valid floating point number.\n");
        return 1;
    }

    printf("Enter the second floating point number- \n ");
    
    if (scanf("%f", &num2) != 1) {
        printf("Invalid input. Please enter a valid floating point number.\n");
        return 1;
    }

    printf("You have entered the following two numbers - \n");
    printf("First number - %.2f\n", num1);
    printf("Second number - %.2f\n", num2);

    return 0;
}
