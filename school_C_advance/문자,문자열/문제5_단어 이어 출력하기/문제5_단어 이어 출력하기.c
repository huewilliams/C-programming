#include<stdio.h>
#include<string.h>

int main()
{
	char str[1000]="", temp[100];
	while(1)
	{
		scanf("%s",temp);
		if(strcmp(temp, "end")==0)
			break;
		strcat(str, " ");
		strcat(str, temp);
		printf("%s\n",str); 
	}
}
