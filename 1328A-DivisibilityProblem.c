#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);  // Read the number of test cases

    while (t--) {
        long long a, b;
        scanf("%lld %lld", &a, &b);  // Read a and b for each test case
        
        long long remainder = a % b;  // Find remainder of a divided by b
        
        if (remainder == 0) {
            printf("0\n");  // No moves needed if a is already divisible by b
        } else {
            long long moves = b - remainder;  // Calculate the number of moves needed
            printf("%lld\n", moves);  // Print the result
        }
    }

    return 0;
}
