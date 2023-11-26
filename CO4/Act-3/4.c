#include <stdio.h>

int main() {
    int n = 1, sum = 0, count = 0;

    while (n <= 20) {
        if (n % 2 != 0) {
            sum += n;
            count++;
        }
        n++;
    }

    float average = (float)sum / count;
    
    printf("Average of all natural odd numbers from 1 to 20 is - %.2f\n", average);

    return 0;
}
