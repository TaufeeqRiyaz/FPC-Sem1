#include <stdio.h>

int main() {
    int subjects[5];
    int total = 0;
    float average;

    printf("Enter the scores for 5 subjects -\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &subjects[i]);
        total += subjects[i];
    }

    average = (float)total / 5;

    printf("Average score - %.2f\n", average);

    if (average > 60) {
        printf("Overall Result - First Division\n");
    } else if (average >= 50 && average <= 60) {
        printf("Overall Result - Second Division\n");
    } else if (average >= 40 && average < 50) {
        printf("Overall Result - Third Division\n");
    } else {
        printf("Overall Result - Fail\n");
    }

    return 0;
}
