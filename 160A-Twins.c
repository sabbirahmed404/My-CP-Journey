#include <stdio.h>
#include <stdlib.h>

// Comparison function for sorting in descending order
int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int n;
    scanf("%d", &n);
    int coins[100];

    for (int i = 0; i < n; i++) {
        scanf("%d", &coins[i]);
    }

    // Sort the coins in descending order
    qsort(coins, n, sizeof(int), compare);

    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += coins[i];
    }

    int taken_sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        taken_sum += coins[i];
        count++;
        if (taken_sum > total_sum / 2) {
            break;
        }
    }

    printf("%d\n", count);

    return 0;
}