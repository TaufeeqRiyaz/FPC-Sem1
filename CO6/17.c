#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string - ");
    scanf("%s", str);
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i; j < n; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("The sorted string is - %s", str);
    return 0;
}