#include <stdio.h>
int main() {
    char operator;
    float number1, number2;
    printf("Enter an operator (+, -, *, /) - \n ");
    scanf("%c", &operator);
    printf("Enter two numbers - \n ");
    scanf("%f %f", &number1, &number2);
    switch (operator){
        case '+':
            printf("%f + %f = %f", number1, number2, number1 + number2);
            break;
        case '-':
            printf("%f - %f = %f", number1, number2, number1 - number2);
            break;
        case '*':
            printf("%f * %f = %f", number1, number2, number1 * number2);
            break;
        case '/':
            printf("%f / %f = %f", number1, number2, number1 / number2);
            break;

        default:
            printf("Please choose an operator");
            }
    return 0;
    }