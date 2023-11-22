#include <stdio.h>

int main() {
    int inputNumber;
    printf("Enter a number - ");
    scanf("%d", &inputNumber);

    int lastDigit = inputNumber % 10;

    while (inputNumber >= 10) {
        inputNumber /= 10;
    }
    int firstDigit = inputNumber;

    int sumOfDigits = firstDigit + lastDigit;
    printf("Sum of the first and last digits - %d\n", sumOfDigits);

    return 0;
}
