#include<stdio.h>
#include<string.h>

// A : 65
// a : 97
int main()
{
	char c=NULL;
	while(1)
	{
		c = getchar();
		if(c == '\n') break;
		if(c == 32) 
		{
			printf(" ");
			continue;	
		}
		else if(c < 97) c += 32;
		else c-= 32;
		putchar(c);
	}
}
