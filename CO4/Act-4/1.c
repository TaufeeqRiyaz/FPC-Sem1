#include <stdio.h>

int main() {
    int rows, i, j, value = 1;

    printf("Enter the number of rows - ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", value);
            value++;
        }
        printf("\n");
    }

    return 0;
}
