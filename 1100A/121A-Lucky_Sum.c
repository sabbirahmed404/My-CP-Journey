#include <stdio.h>
#include <stdbool.h>

bool is_lucky(int number) {
    while (number > 0) {
        int digit = number % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        number /= 10;
    }
    return true;
}

int next_lucky(int x) {
    while (!is_lucky(x)) {
        x++;
    }
    return x;
}

long long lucky_sum(int l, int r) {
    long long total_sum = 0;
    int current = l;

    while (current <= r) {
        int next_lucky_number = next_lucky(current
