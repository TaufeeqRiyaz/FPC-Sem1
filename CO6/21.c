#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];
    
    printf("Enter the first string - ");
    gets(str1);
    
    printf("Enter the second string - ");
    gets(str2);
    
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    
    printf("\nAfter swapping -\n");
    printf("First string - %s\n", str1);
    printf("Second string - %s\n", str2);
    
    return 0;
}