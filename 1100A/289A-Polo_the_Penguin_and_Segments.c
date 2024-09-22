#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int total_length = 0;
    
    for (int i = 0; i < n; i++) {
        int l, r;
        scanf("%d %d", &l, &r);
        total_length += (r - l + 1);
    }
    
    int remainder = total_length % k;
    int moves = (remainder == 0) ? 0 : k - remainder;
    
    printf("%d\n", moves);
    
    return 0;
}#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int total_length = 0;
    
    for (int i = 0; i < n; i++) {
        int l, r;
        scanf("%d %d", &l, &r);
        total_length += (r - l )+1;
    }
    int remainder = total_length % k;
    int moves = (remainder == 0) ? 0 : k - remainder;
    printf("%d\n", moves);
    
    return 0;
}
