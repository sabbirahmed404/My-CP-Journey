#include <stdio.h>

int main() {
    int k, l, m, n, d;
    scanf("%d", &k);
    scanf("%d", &l);
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &d);

    int damaged_count = 0;

    // Loop through each dragon from 1 to d
    for (int i = 1; i <= d; i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            damaged_count++; // Count this dragon as damaged
        }
    }

    printf("%d\n", damaged_count); // Output the number of damaged dragons
    return 0;
}
