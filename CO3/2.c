#include <stdio.h>

int main() {
    char health, gender, location;
    int age;
    float policyAmount, premiumRate;

    printf("Enter health status (E for excellent, P for poor): ");
    scanf(" %c", &health);
    printf("Enter gender (M for male, F for female): ");
    scanf(" %c", &gender);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter location (C for city, V for village): ");
    scanf(" %c", &location);

    if (health == 'E' && age >= 25 && age <= 35 && location == 'C' && gender == 'M') {
        premiumRate = 4.0;
        policyAmount = 200000.0;
    } else if (health == 'E' && age >= 25 && age <= 35 && location == 'C' && gender == 'F') {
        premiumRate = 3.0;
        policyAmount = 100000.0;
    } else if (health == 'P' && age >= 25 && age <= 35 && location == 'V' && gender == 'M') {
        premiumRate = 6.0;
        policyAmount = 10000.0;
    } else {
        printf("The person should not be insured.\n");
        return 0;
    }

    printf("The person should be insured.\n");
    printf("Premium rate: Rs. %.2f per thousand\n", premiumRate);
    printf("Maximum policy amount: Rs. %.2f\n", policyAmount);

    return 0;
}
