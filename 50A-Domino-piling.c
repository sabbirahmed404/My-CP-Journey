#include<stdio.h>
int main(){
    int m,n, max_domino;
    scanf("%d %d", &m, &n);
    max_domino = (m*n)/2;
    printf("%d",max_domino);
    return 0;
}