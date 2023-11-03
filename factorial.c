#include <stdio.h>

//  Write a program to calculate the factorial of a given integer.

int main(){
    
    int factorial_1 = 0;
    int num_1;
    scanf("%d", &num_1);
    for(int i = 1; 1<=num_1; i++){
        factorial_1 *= i;
    }
    
    printf("%d", factorial_1);
}