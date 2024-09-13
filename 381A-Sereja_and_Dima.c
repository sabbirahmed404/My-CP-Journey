#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int cards[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &cards[i]);
    }
    
    int sereja = 0, dima = 0;
    int left = 0, right = n - 1;
    
    for (int turn = 0; left <= right; turn++) {
        if (cards[left] > cards[right]) {
            if (turn % 2 == 0) {
                sereja += cards[left];
            } else {
                dima += cards[left];
            }
            left++;
        } else {
            if (turn % 2 == 0) {
                sereja += cards[right];
            } else {
                dima += cards[right];
            }
            right--;
        }
        
    }
    printf("%d %d\n", sereja, dima);
    return 0;
}
