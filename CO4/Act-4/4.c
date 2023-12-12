#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 100; i <= 200; ++i) {
        if (i % 9 == 0) {
            sum += i;
        }
    }

    printf("Sum of integers between 100 and 200 divisible by 9 - %d\n", sum);

    return 0;
}
