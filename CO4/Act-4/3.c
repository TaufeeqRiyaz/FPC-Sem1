#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n - ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        int square = i * i;
        printf("%d ", square);
        sum += square;
    }

    printf("\nSum of the squares - %d\n", sum);

    return 0;
}
