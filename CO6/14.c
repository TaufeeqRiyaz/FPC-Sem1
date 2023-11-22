// C Program to convert the lower case letters to upper case in a given string without using strupp() function

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string - ");
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
    printf("The string in upper case is - %s", str);
    return 0;
}