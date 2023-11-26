#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            printf("%d is divisible by 2\n", i);
        }
        if (i % 3 == 0) {
            printf("%d is divisible by 3\n", i);
        }
        if (i % 5 == 0) {
            printf("%d is divisible by 5\n", i);
        }
    }

    return 0;
}
