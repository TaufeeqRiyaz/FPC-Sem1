#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    int i, j, freq[26] = {0};
    
    printf("Enter the text -\n");
    gets(text);
    
    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            freq[text[i] - 'a']++;
        } else if (text[i] >= 'A' && text[i] <= 'Z') {
            freq[text[i] - 'A']++;
        }
    }
    
    printf("\nFrequency of characters in the text -\n");
    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("%c - %d\n", i + 'a', freq[i]);
        }
    }
    
    return 0;
}