// c program to take name and a number as input and print it

#include <stdio.h>
int main() {
    char name[20];
    int number;
    float decimal;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter a decimal");
    scanf("%f", &decimal);
    printf("Hello %s, the number and decimal you entered is %d and %f", name, number, decimal);
    return 0;
}