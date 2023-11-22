#include <stdio.h>

int main() {
    int a, d, n;
    printf("Enter the first term (a) - ");
    scanf("%d", &a);
    printf("Enter the common difference (d) - ");
    scanf("%d", &d);
    printf("Enter the number of terms (n) - ");
    scanf("%d", &n);

    printf("Arithmetic Progression:\n");
    for (int i = 0; i < n; i++) {
        int term = a + i * d;
        printf("%d ", term);
    }

    int sumOfAP = n * (2 * a + (n - 1) * d) / 2;
    printf("\nSum of the Arithmetic Progression - %d\n", sumOfAP);

    return 0;
}
