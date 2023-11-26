#include <stdio.h>
#include <stdlib.h>

int main(){
    int num_1, i;
    printf("Enter a natural number -");
    scanf("%d", &num_1);

    for (i=1; i <= num_1; i++)
    {
        printf("%d\n", i);
    }
}