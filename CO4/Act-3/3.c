#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers - \n ");
    scanf("%d %d %d", &a, &b, &c);

    int largest = a;

    while (b > 0) {
        if (b > largest) {
            largest = b;
        }
        b--;
    }

    while (c > 0) {
        if (c > largest) {
            largest = c;
        }
        c--;
    }

    printf("The largest number is %d\n", largest);

    return 0;
}
