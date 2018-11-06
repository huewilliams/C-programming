#include<stdio.h>
#include<string.h>

// ctrl+z = 26
int main()
{
	int max = 0, len=1;
	while(getchar() != -1)
	{
		while(getchar() != '\n')
			len++;
		if(max<len)
			max=len;
		len = 1;
	}
	printf("가장 긴 단어의 길이 : %d\n",max);
}
