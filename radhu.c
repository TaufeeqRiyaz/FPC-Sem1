#include <stdio.h>

int findFakeCoin(int n, int coins[]) {
    if (n <= 0) {
        return -1;
    } else if (n == 1) {
        return 1;
    } else {
        int start = 0, end = n - 1, mid;
        int leftSum = 0, rightSum = 0;

        while (start < end) {
            mid = (start + end) / 2;

            for (int i = start; i <= mid; i++) {
                leftSum += coins[i];
            }

            for (int i = mid + 1; i <= end; i++) {
                rightSum += coins[i];
            }

            if (leftSum < rightSum) {
                end = mid;
            } else if (leftSum > rightSum) {
                start = mid + 1;
            } else {
                return -1;
            }

            leftSum = 0;
            rightSum = 0;
        }

        return end + 1;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int coins[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &coins[i]);
    }
    int result = findFakeCoin(n, coins);
    if (result == -1) {
        printf("-1");
    } else {
        printf("%d\n", (n % 2 == 0) ? n / 2 : n);
        printf("%d", result);
    }
    return 0;
}
