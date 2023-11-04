#include <stdio.h>

int main() {
    char character;
    
    printf("Enter a character: ");
    scanf(" %c", &character);

    if (character >= 'A' && character <= 'Z') {
        character = character + ('a' - 'A');
    }

    if ((character >= 'a' && character <= 'z')) {
        if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {
            printf("%c is a vowel.\n", character);
        } else {
            printf("%c is a consonant.\n", character);
        }
    } else {
        printf("Please enter a valid alphabetic character.\n");
    }

    return 0;
}
