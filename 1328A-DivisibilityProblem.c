#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); 

    while (t--) {
        long long a, b;
        scanf("%lld %lld", &a, &b);  
        
        long long remainder = a % b;  
        
        if (remainder == 0) {
            printf("0\n");  
        } else {
            long long moves = b - remainder;  
            printf("%lld\n", moves); 
        }
    }

    return 0;
}
