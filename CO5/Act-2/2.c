#include <stdio.h>

int main() {
    int arr[] = {2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Square of array elements is -\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i] * arr[i]);
    }

    return 0;
}
