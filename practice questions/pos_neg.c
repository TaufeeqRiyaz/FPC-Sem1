#include <stdio.h>

int main() {
    int num_1;

    printf("Enter a number - ");
    scanf("%d", &num_1);

    if (num_1 > 0) {
        printf("The number is positive");
    } else if (num_1 < 0) {
        printf("The number is negative");
    } else if (num_1 == 0){
        printf("The number is zero");
    }
    else {
        printf("Invalid input");
    }
}