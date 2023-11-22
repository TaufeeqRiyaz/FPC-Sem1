#include<stdio.h>
int main()
{
    int n, i, j, sum=0;
    printf("Enter the value of n -");
    scanf("%d", &n);
    for(i=2; i<=n; i++)
    {
        for(j=2; j<=i; j++)
        {
            if(i==j)
            {
                sum=sum+i;
            }
            else if(i%j==0)
            {
                break;
            }
        }
    }
    printf("Sum of all prime numbers from 1 to %d is %d", n, sum);
    return 0;
}