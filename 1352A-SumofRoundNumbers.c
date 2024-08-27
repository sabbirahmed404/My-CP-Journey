#include <stdio.h>

void find_round_numbers(int n) {
    int position = 1;
    int result[5]; 
    int count = 0;
    
    while (n > 0) {
        int digit = n % 10;
        if (digit != 0) {
            result[count++] = digit * position;
        }
        n /= 10;
        position *= 10;
    }

    
    printf("%d\n", count);
    for (int i = 0; i < count; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
}


int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        find_round_numbers(n);
    }
    
    return 0;
}
