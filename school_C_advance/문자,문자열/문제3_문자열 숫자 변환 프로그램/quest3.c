#include<stdio.h>
#include<string.h>

int main()
{
	char str[10];
	int i=0, cnt=0, num=0, dec=1;
	for(i=0;i<10;i++)
	{
		str[i] = getchar();
		if(str[i] == '\n') break;
		str[i] -= '0';
	}
	for(i=i-1;i>=0;i--)
	{
		num += str[i] * dec;
		dec *= 10;
	}
	printf("%d",num+10);
}
