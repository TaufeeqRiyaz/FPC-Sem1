#include <stdio.h>

int main() {

    char arr[] = {'A', 'B', 'C', 'D', 'E'};

    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; i++) {
        printf("ASCII value of %c = %d\n", arr[i], arr[i]);
    }

    return 0;
}
