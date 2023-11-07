#include <stdio.h>
#include <string.h>

int main() {
    char *months[] = {"January", "February", "March", "April", "May", "June", "July",
                      "August", "September", "October", "November", "December"};
    
    int month;

    printf("Enter a month number (1-12): ");
    scanf("%d", &month);

    if (month >= 1 && month <= 12) {

        int previousMonth = (month - 1) <= 0 ? 12 : (month - 1);

    
        printf("The previous month is: %s\n", months[previousMonth - 1]);
    } else {
        printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }

    return 0;
}
