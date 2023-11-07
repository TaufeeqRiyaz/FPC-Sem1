#include <stdio.h>

void incrementArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = arr[i] + 1;
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array - ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array - ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    incrementArray(arr, n);

    printf("Array after incrementing all elements by one - ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
