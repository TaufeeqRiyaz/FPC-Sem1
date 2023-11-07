#include <stdio.h>

int main() {
    char fruitName[50];
    float price;
    int quantity;
    char colorInitial;

    printf("Enter the name of your favorite fruit - ");
    scanf("%s", fruitName);
    printf("Enter the price (in rupees) of the fruit - ");
    scanf("%f", &price);
    printf("Enter the number of fruits you want - ");
    scanf("%d", &quantity);
    printf("Enter the first letter of its color - ");
    scanf(" %c", &colorInitial);

    printf("Details of your favorite fruit -\n");
    printf("Name - %s\n", fruitName);
    printf("Price - Rs. %.2f\n", price);
    printf("Quantity - %d\n", quantity);
    printf("Color Initial - %c\n", colorInitial);

    return 0;
}
