#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, sum=0;
    printf("Enter a positive integer - \n ");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        sum += i;
    }
    printf("Sum = %d", sum);
}