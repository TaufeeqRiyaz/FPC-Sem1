#include <stdio.h>
#include <math.h>

int main() {
    int start, end, i, num, digit, sum;

    printf("Enter the start of the range - \n ");
    scanf("%d", &start);

    printf("Enter the end of the range - \n ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are - ", start, end);

    for(i = start; i <= end; i++) {
        sum = 0;
        num = i;

        while(num != 0) {
            digit = num % 10;
            sum += pow(digit, 3);
            num /= 10;
        }

        if(sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}
