#include <stdio.h>
#include <stdlib.h>

int main(){
    int month;
    printf("Enter a month number - \n");
    printf("January - 1 \n February - 2 \n March - 3 \n April - 4 \n May - 5 \n June - 6 \n July - 7 \n August - 8 \n September - 9 \n October - 10 \n November - 11 \n December - 12 \n");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("December");
        break;
    case 2:
        printf("January");
        break;
    case 3:
        printf("February");
        break;
    case 4:
        printf("March");
        break;
    case 5:
        printf("April");
        break;
    case 6:
        printf("May");
        break;
    case 7:
        printf("June");
        break;
    case 8:
        printf("July");
        break;
    case 9:
        printf("August");
        break;
    case 10:
        printf("September");
        break;
    case 11:
        printf("October");
        break;
    case 12:
        printf("November");
        break;
    
    default:
        printf("Please enter a valid month number");
        break;
    }
}