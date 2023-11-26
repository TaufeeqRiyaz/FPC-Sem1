#include <stdio.h>

int main() {
    int choice, num, i, fact = 1;

    while (1) {
        printf("\n\n");
        printf("1. Factorial of a number\n");
        printf("2. Prime or not\n");
        printf("3. Odd or even\n");
        printf("4. Exit\n");
        printf("Enter your choice - ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number - ");
                scanf("%d", &num);
                for (i = 1; i <= num; i++) {
                    fact *= i;
                }
                printf("Factorial of %d is %d\n", num, fact);
                break;

            case 2:
                printf("Enter a number - ");
                scanf("%d", &num);
                for (i = 2; i < num; i++) {
                    if (num % i == 0) {
                        printf("%d is not a prime number\n", num);
                        break;
                    }
                }
                if (i == num) {
                    printf("%d is a prime number\n", num);
                }
                break;

            case 3:
                printf("Enter a number - ");
                scanf("%d", &num);
                if (num % 2 == 0) {
                    printf("%d is an even number\n", num);
                } else {
                    printf("%d is an odd number\n", num);
                }
                break;

            case 4:
                printf("Exited\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
