#include <stdio.h>

int main()
{
    int i, n;
    float sum = 0.0;

    printf("Enter the number of terms in harmonic series - ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("1/%d + ", i);
        sum += 1.0 / i;
    }

    printf("\nSum of the harmonic series till %d terms is %f\n", n, sum);

    return 0;
}