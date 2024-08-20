#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int solve(int n, int a[]) {
    qsort(a, n, sizeof(int), compare);
    
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > k) {
            k++;
        }
    }
    
    return k;
}

int main() {
    int t, n, a[MAX_N];
    
    scanf("%d", &t);
    
    while (t--) {
        scanf("%d", &n);
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        printf("%d\n", solve(n, a));
    }
    
    return 0;
}
