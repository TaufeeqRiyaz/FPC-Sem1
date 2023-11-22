#include <stdio.h>

int main()
{
    int i, hours;
    float overtime, overtime_pay;

    for (i = 1; i <= 10; i++)
    {
        printf("Enter the working hours of employee %d - ", i);
        scanf("%d", &hours);

        if (hours > 40)
        {
            overtime = hours - 40;
            overtime_pay = overtime * 12.0;
            printf("Overtime pay of employee %d is Rs. %f\n", i, overtime_pay);
        }
        else
        {
            printf("You have to work for more than 40 hours to get over time pay\n");
        }
    }

    return 0;
}
