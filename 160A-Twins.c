#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to partition the array
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] > pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

// Custom quicksort function
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);

        quicksort(arr, low, pivot - 1);
        quicksort(arr, pivot + 1, high);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int coins[100];

    for (int i = 0; i < n; i++) {
        scanf("%d", &coins[i]);
    }

    // Sort the coins in descending order using custom quicksort
    quicksort(coins, 0, n - 1);

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
