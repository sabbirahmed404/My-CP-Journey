#include <stdio.h>

int main() {
    int v;
    scanf("%d", &v);
    
    if (v > 2 && v % 2 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
