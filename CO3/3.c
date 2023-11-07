#include <stdio.h>

int main() {
    int customerOrder, stockInHand;
    char creditStatus;

    printf("Enter customer order quantity - ");
    scanf("%d", &customerOrder);
    printf("Enter stock in hand quantity - ");
    scanf("%d", &stockInHand);
    printf("Is the credit status OK? (Y/N) - ");
    scanf(" %c", &creditStatus);

    if (customerOrder <= stockInHand && creditStatus == 'Y') {
        printf("Supply the full customer order.\n");
    } else if (creditStatus == 'N') {
        printf("Do not supply. Send an intimation.\n");
    } else if (creditStatus == 'Y') {
        printf("Supply what is in stock. Intimate the customer that the balance will be shipped.\n");
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}
