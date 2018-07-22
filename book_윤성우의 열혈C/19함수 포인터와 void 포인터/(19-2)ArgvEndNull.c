//(19-2)인자의 형성과정
#include<stdio.h>

int main(int argc, int *argv[])
{
	int i = 0;
	printf("전달된 문자열의 수 : %d \n",argc);
	
	while(argv[i]!=NULL)
	{
		printf("%d 번째 문자열 : %s\n",i+1,argv[i]);
		i++;	
	}
	return 0;
} 
