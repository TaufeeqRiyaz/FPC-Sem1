#include <stdio.h>
#include <string.h>

int main() {
    char text[100], pattern[100], replacement[100], newText[100];
    int i, j, k, n, m, found = 0;
    
    printf("Enter the text -\n");
    gets(text);
    
    printf("Enter the pattern to replace - ");
    gets(pattern);
    
    printf("Enter the replacement pattern - ");
    gets(replacement);
    
    n = strlen(text);
    m = strlen(pattern);
    
    for (i = 0; i < n; i++) {
        found = 1;
        for (j = 0, k = i; j < m; j++, k++) {
            if (text[k] != pattern[j]) {
                found = 0;
                break;
            }
        }
        
        if (found == 1) {
            for (j = 0; replacement[j] != '\0'; j++, i++) {
                newText[i] = replacement[j];
            }
            
            i--;
        } else {
            newText[i] = text[i];
        }
    }
    
    newText[i] = '\0';
    
    printf("\nText after replacing pattern -\n");
    puts(newText);
    
    return 0;
}