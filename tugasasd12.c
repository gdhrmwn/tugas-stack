#include <stdio.h>

#define MAX_N 100000
#define MAX_M 100000

int twoStacks(int maxSum, int a_count, int a[], int b_count, int b[]) {
    int sum = 0, count = 0, index_a = 0, index_b = 0;

    while (index_a < a_count && sum + a[index_a] <= maxSum) {
        sum += a[index_a++];
        count++;
    }

    int maxCount = count;

    while (index_b < b_count && index_a > 0) {
        sum += b[index_b++];

        while (sum > maxSum && index_a > 0) {
            sum -= a[--index_a];
            count--;
        }

        if (sum <= maxSum && count > maxCount)
            maxCount = count;
    }

    return maxCount;
}

int main() {
    int g;
    printf("Enter the number of games: ");
    scanf("%d", &g);

    while (g--) {
        int n, m, maxSum;
        printf("Enter n, m, and maxSum: ");
        scanf("%d %d %d", &n, &m, &maxSum);

        int a[MAX_N], b[MAX_M];

        printf("Enter elements of stack a: ");
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        printf("Enter elements of stack b: ");
        for (int i = 0; i < m; i++)
            scanf("%d", &b[i]);

        printf("Maximum possible score: %d\n", twoStacks(maxSum, n, a, m, b));
    }

    return 0;
}
