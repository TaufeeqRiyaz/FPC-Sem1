#include <stdio.h>

#define OVERTIME_RATE 12.0
#define NORMAL_HOURS 40

int main() {
    int hoursWorked[10];

    for (int i = 0; i < 10; ++i) {
        printf("Enter hours worked for Employee %d - ", i + 1);
        scanf("%d", &hoursWorked[i]);
    }

    for (int i = 0; i < 10; ++i) {
        int overtimeHours = hoursWorked[i] - NORMAL_HOURS;
        if (overtimeHours > 0) {
            double overtimePay = overtimeHours * OVERTIME_RATE;
            printf("Overtime pay for Employee %d - Rs. %.2lf\n", i + 1, overtimePay);
        } else {
            printf("No overtime pay for Employee %d\n", i + 1);
        }
    }

    return 0;
}
