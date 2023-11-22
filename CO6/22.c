#include <stdio.h>
#include <string.h>

int main() {
    char text[100], sub[100], newText[100];
    int i, j, k, n, m, found = 0;
    
    printf("Enter the text -\n");
    gets(text);
    
    printf("Enter the substring to delete - ");
    gets(sub);
    
    n = strlen(text);
    m = strlen(sub);
    
    for (i = 0; i < n; i++) {
        found = 1;
        for (j = 0, k = i; j < m; j++, k++) {
            if (text[k] != sub[j]) {
                found = 0;
                break;
            }
        }
        
        if (found == 1) {
            for (j = i; j <= n - m; j++) {
                text[j] = text[j + m];
            }
            
            break;
        }
    }
    
    if (found == 0) {
        printf("\nSubstring not found\n");
    } else {
        printf("\nText after deleting substring -\n");
        puts(text);
    }
    
    return 0;
}
