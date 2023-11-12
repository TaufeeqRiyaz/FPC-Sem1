#include <stdio.h>

int main() {
    int arr[] = {4, 2, 4, 5, 2, 3, 1, 7, 8, 7, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Repeated elements with frequency -\n");

    for (int i = 0; i < n; i++) {
        if (arr[i] != -1) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    arr[j] = -1;
                }
            }
            if (count > 1) {
                printf("%d occurs %d times\n", arr[i], count);
            }
        }
    }

    return 0;
}
