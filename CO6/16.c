#include <stdio.h>
#include <string.h>

int main(){

    int n;
    printf("Enter the number of elements in the array - ");
    scanf("%d", &n);

    char arr[n][100];
    char search[100];

    for (int i = 0; i < n; i++){
        printf("Enter element %d - ", i + 1);
        scanf(" %s", arr[i]);
    }

    printf("Enter the element to search - ");
    scanf(" %s", search);

    int start = 0, end = n - 1, mid;
    int leftSum = 0, rightSum = 0;

    while (start < end) {
        mid = (start + end) / 2;

        for (int i = start; i <= mid; i++) {
            leftSum += strcmp(arr[i], search);
        }

        for (int i = mid + 1; i <= end; i++) {
            rightSum += strcmp(arr[i], search);
        }

        if (leftSum < rightSum) {
            end = mid;
        } else if (leftSum > rightSum) {
            start = mid + 1;
        } else {
            break;
        }

        leftSum = 0;
        rightSum = 0;
    }

    if (strcmp(arr[end], search) == 0){
        printf("Element found at index %d\n", end);
    }
    else {
        printf("Element not found\n");
    }

    return 0;
}