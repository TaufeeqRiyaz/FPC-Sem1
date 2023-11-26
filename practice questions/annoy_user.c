// c program to take integer as input and print factorial, keep asking the user to enter number after printing factorial using do while loop till user enters 0


#include <stdio.h>
int main()
{

    int number;

    printf("Enter an integer to calculate it\'s factorial - ");
    scanf("%d", &number);

    while (number < 0)
    {
        printf("Enter a positive integer - ");
        scanf("%d", &number);

        {
            for (int i = 1; i <= number; i++)
            {
                if (number % i == 0)
                {
                    printf("%d\n", i);
                    }
            }

        }
    }

}