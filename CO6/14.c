#include <stdio.h>

void convertToUpper(char *str) {
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - ('a' - 'A');
        }
        str++;
    }
}

int main() {
    int numElements;

    printf("Enter the number of elements: ");
    scanf("%d", &numElements);

    while ((getchar()) != '\n');

    char inputString[100];

    printf("Enter the string: ");
    
    for (int i = 0; i < numElements; i++) {
        printf("Enter element %d: ", i + 1);
        fgets(inputString, sizeof(inputString), stdin);

        int j = 0;
        while (inputString[j] != '\0') {
            if (inputString[j] == '\n') {
                inputString[j] = '\0';
                break;
            }
            j++;
        }

        convertToUpper(inputString);

        printf("Element %d in uppercase: %s\n", i + 1, inputString);
    }

    return 0;
}
