#include<stdio.h>
int main(){
    int n,k,var[100],flag=0;
    scanf("%d %d", &n, &k);
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d",&var[i]);
    }
    for (size_t i = 0; i < n; i++)
    {
        if (var[k]<=var[i])
        {
            flag++;
        }
    }
    printf("%d",flag);
    return 0;
}
