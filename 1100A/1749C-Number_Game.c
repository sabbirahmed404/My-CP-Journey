#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        // Sort the array to efficiently check removable elements
        qsort(a, n, sizeof(int), compare);
        
        int max_k = 0;
        
        // Try possible values of k
        for (int k = 1; k <= n; k++) {
            int possible = 1;
            for (int i = 0; i < k; i++) {
                if (a[i] > k - i) {
                    possible = 0;
                    break;
                }
            }
            if (possible) {
                max_k = k;
            }
        }
        
        printf("%d\n", max_k);
    }
    
    return 0;
}
