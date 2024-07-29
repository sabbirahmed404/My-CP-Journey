#include<stdio.h>
#include<string.h>

int main(){
	char str[100][100];
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		scanf("%100s",str[i]);
	}
	
	int length;
	for (int i = 0; i < n; i++)
	{
		length = strlen(str[i]);
		if (length>10)
		{
			//printf("%s",str[0],"%d", length-2, "%s", str[length-1]);
			printf("%c%d%c\n", str[i][0], length - 2, str[i][length - 1]);
			
		}
		else {
			printf("%s\n", str[i]);
		}
		
		//printf("%d\n", length);
	}
	
	return 0;
}
