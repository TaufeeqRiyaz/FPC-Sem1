#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        int flag = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                char temp[100];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
                flag = 1;
            }
        }
        if (flag == 0) {
            break;
        }
    }
}

int main() {
    int n;

    printf("Enter the number of strings - ");
    scanf("%d", &n);

    char arr[n][100];

    for (int i = 0; i < n; i++) {
        printf("Enter string %d - ", i + 1);
        scanf("%s", arr[i]);
    }

    bubbleSort(arr, n);

    printf("The sorted array is -\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}
