#include<stdio.h>
#include<string.h>

int main()
{
	char str[1000] ="", temp[100];
	int count;
	gets(str);
	while(1)
	{
		count = 0; 
		char *ptr = strtok(str, " ");      
		gets(temp);
		if(strcmp(temp, "end")==0)
			break;
    	while (ptr != NULL)               
    	{
        	if(strcmp(temp, ptr)==0)
        		count++;
        	ptr = strtok(NULL, " ");      
    	}
    	printf("검색 결과 : %d개",count);
	}
}
