#include <stdio.h>

int main(){

    int n, m;
    printf("Enter the number of rows and columns of the array - ");
    scanf("%d %d", &n, &m);

    float arr[n][m];
    float sum = 0;

    for (int i = 0; i < n; i++){
        printf("Enter the elements of row %d: ", i + 1);
        for (int j = 0; j < m; j++){
            scanf("%f", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    printf("The average of all the elements of the array is - %f\n", sum / (n * m));

    return 0;
}
