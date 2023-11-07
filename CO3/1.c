#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 65 && ch <= 90)) {
        printf("Capital letter\n");
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 97 && ch <= 122)) {
        printf("Small case letter\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } else if ((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127)) {
        printf("Special Symbol\n");
    } else {
        printf("Unknown character\n");
    }

    return 0;
}
