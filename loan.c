#include <stdio.h>
#include <stdlib.h>

int main()
{
    float principal, rate, time, simple_interest;
    printf("Enter the principal amount - \n ");
    scanf("%f", &principal);
    printf("Enter the rate of interest - \n ");
    scanf("%f", &rate);
    printf("Enter the time period - \n ");
    scanf("%f", &time);
    simple_interest = (principal * rate * time) / 100;
    printf("Simple interest = %.2f\n", simple_interest);
    return 0;
}