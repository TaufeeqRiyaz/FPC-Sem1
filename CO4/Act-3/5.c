#include <stdio.h>
#include <math.h>

int main() {
    int n, i = 1;

    printf("Enter the value of n - ");
    scanf("%d", &n);

    while (i * i <= n) {
        printf("%d\n", i * i);
        i++;
    }

    return 0;
}
