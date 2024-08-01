#include<stdio.h>
#include<string.h>

int main(){
    int count;
    char statement[150][5];
    scanf("%d",&count);
    for (size_t i = 0; i < count; i++)
    {
        scanf("%s",statement[i]);
    }
    
    int flag = 0;
    for (size_t i = 0; i < count; i++)
    {
        if(strcmp(statement[i],"x++")==0 || strcmp(statement[i],"++x")==0){
            flag++;
        }
        else if(strcmp(statement[i],"x--")==0||strcmp(statement[i],"--x")==0){
            flag--;
        }
    }
    
    printf("%d",flag);
    return 0;
}