#include <stdio.h>

int main(){

    int n;
    printf("Enter the number of elements in the array - ");
    scanf("%d", &n);

    char arr[n];
    char search;

    for (int i = 0; i < n; i++){
        printf("Enter element %d - ", i + 1);
        scanf(" %c", &arr[i]);
    }

    printf("Enter the element to search - ");
    scanf(" %c", &search);

    int index = -1;
    for (int i = 0; i < n; i++){
        if (arr[i] == search){
            index = i;
            break;
        }
    }

    if (index == -1){
        printf("Element not found\n");
    }
    else {
        printf("Element found at index %d\n", index);
    }

    return 0;
}