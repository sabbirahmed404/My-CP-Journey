#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int pi;
    double total = 0.0;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &pi);
        total += pi;
    }
    
    double result = total / n;
    printf("%.12f\n", result);
    
    return 0;
}
