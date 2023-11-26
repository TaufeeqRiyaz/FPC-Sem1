#include <stdio.h> 

int main() 
{ 
	int rows, line, space, coefficient, i;

    printf("Enter the number of rows - ");

    scanf("%d", &rows);

	for (line = 1; line <= rows; line++) { 
		for (space = 1; space <= rows - line; space++) 
			printf(" ");

		coefficient = 1; 
		for (i = 1; i <= line; i++) { 
			printf("%4d", coefficient); 
			coefficient = coefficient * (line - i) / i; 
		} 
		printf("\n"); 
	} 
	return 0; 
}
