#include <stdio.h>

int main() {
    int orderInStock, creditOK, customerOrder;

    printf("Enter the quantity in stock: ");
    scanf("%d", &orderInStock);
    printf("Is credit OK (1 for Yes, 0 for No): ");
    scanf("%d", &creditOK);
    printf("Enter the customer order quantity: ");
    scanf("%d", &customerOrder);

    if (customerOrder <= orderInStock && creditOK == 1) {
        printf("Supply the full requirement.\n");
    } else if (creditOK == 0) {
        printf("Credit is not OK. Do not supply. Send an intimation.\n");
    } else if (creditOK == 1 && customerOrder > orderInStock) {
        printf("Credit is OK, but the item in stock is less than the order. Supply what is in stock and intimate that the balance will be shipped.\n");
    }

    return 0;
}
