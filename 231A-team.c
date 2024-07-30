#include<stdio.h>
int main(){
    int team[100];
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n;i++){
        for (size_t j = 0; j < 3; i++)
        {
            scanf("%d",&team[i]);
        }
        
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < 3; i++)
        {
            printf("%d",team[i]);    /* code */
        }
        
    }
    return 0;
}   