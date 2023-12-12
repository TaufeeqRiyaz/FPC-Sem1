#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n - ");
    scanf("%d", &n);

    int term = 9, sum = 0, multiplier = 1;

    for (int i = 1; i <= n; ++i) {
        printf("%d ", term);
        sum += term;
        term = term * 10 + 9;
    }

    printf("\nSum of the series - %d\n", sum);

    return 0;
}
