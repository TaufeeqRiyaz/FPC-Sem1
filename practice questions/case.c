#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("You entered a capital letter.\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("You entered a small case letter.\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("You entered a digit.\n");
    } else {
        printf("You entered a special symbol.\n");
    }

    return 0;
}
