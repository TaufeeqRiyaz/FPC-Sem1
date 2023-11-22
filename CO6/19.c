#include<stdio.h>
#include<string.h>

int main() {
    char text[100];
    int i, words = 0, letters = 0;
    
    printf("Enter the text -\n");
    gets(text);
    
    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] == ' ') {
            words++;
        } else {
            letters++;
        }
    }
    
    printf("\nNumber of words - %d\n", words + 1);
    printf("Number of letters - %d\n", letters);
    
    return 0;
}