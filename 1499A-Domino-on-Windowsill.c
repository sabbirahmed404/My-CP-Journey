#include<stdio.h>

int main(){
    int n, k1, k2, w, b, count;
    int var,white_domino,black_domino;
    scanf("%d", &count);
    for (size_t i = 0; i < count; i++)
    {
        scanf("%d %d %d", &n, &k1, &k2);
        scanf("%d %d", &w, &b);
        var = n*2;
       // printf("The k1 and k2 value: %d %d\n", k1, k2);
        int sum_k1k2= k1+k2;
        //printf("sum: %d\n", sum_k1k2);
        white_domino = sum_k1k2/2;
        black_domino = (2*n-sum_k1k2)/2;
        //printf("%d %d\n", white_domino, black_domino);
        if (w<=white_domino && b <= black_domino)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    

    return 0;
}