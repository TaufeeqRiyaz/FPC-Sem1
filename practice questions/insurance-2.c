#include <stdio.h>
#include <string.h>

int main() {
    int age;
    char health[20];
    char location[20];
    char gender[10];

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter health (excellent/poor) - ");
    scanf("%s", health);
    printf("Enter location (city/village) - ");
    scanf("%s", location);
    printf("Enter gender (male/female) - ");
    scanf("%s", gender);

    int premium_rate = 0;
    int max_policy_amount = 0;

    if (age >= 25 && age <= 35) {
        if (strcmp(health, "excellent") == 0) {
            if (strcmp(location, "city") == 0) {
                if (strcmp(gender, "male") == 0) {
                    premium_rate = 4;
                    max_policy_amount = 200000;
                } else if (strcmp(gender, "female") == 0) {
                    premium_rate = 3;
                    max_policy_amount = 100000;
                } else {
                    printf("Person's gender is not eligible for insurance.\n");
                    return 0;
                }
            } else {
                printf("Person's location is not eligible for insurance.\n");
                return 0;
            }
        } else if (strcmp(health, "poor") == 0) {
            if (strcmp(location, "village") == 0) {
                if (strcmp(gender, "male") == 0) {
                    premium_rate = 6;
                    max_policy_amount = 10000;
                } else {
                    printf("Person's gender is not eligible for insurance.\n");
                    return 0;
                }
            } else {
                printf("Person's location is not eligible for insurance.\n");
                return 0;
            }
        } else {
            printf("Person's health is not eligible for insurance.\n");
            return 0;
        }
    } else {
        printf("Person's age is not eligible for insurance.\n");
        return 0;
    }

    printf("Premium rate: Rs. %d per thousand\n", premium_rate);
    printf("Maximum policy amount - Rs. %d\n", max_policy_amount);

    return 0;
}
