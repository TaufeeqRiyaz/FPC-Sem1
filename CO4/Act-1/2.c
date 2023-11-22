#include <stdio.h>

int main() {
    int number, originalNumber, lastDigit, firstDigit, powerOfTen = 1, temp;

    printf("Enter an integer - ");
    scanf("%d", &number);

    originalNumber = number;

    lastDigit = number % 10;

    while (originalNumber >= 10) {
        originalNumber /= 10;
    }
    firstDigit = originalNumber;

    temp = number;
    while (temp >= 10) {
        powerOfTen *= 10;
        temp /= 10;
    }

    int newNumber = lastDigit * powerOfTen; 
    newNumber += number % powerOfTen;  
    newNumber -= lastDigit; 
    newNumber += firstDigit;

    printf("Number after swapping first and last digits - %d", newNumber);

    return 0;
}
