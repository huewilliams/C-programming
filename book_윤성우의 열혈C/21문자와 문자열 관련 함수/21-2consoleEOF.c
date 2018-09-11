#include<stdio.h>

int main(void)
{
	int ch;
	
	while(1)
	{
		ch = getchar();
		if(ch == EOF) //EOF : End Of File
			break;
		putchar(ch);
	}
	/* getchar(), fgetc() 함수가 EOF를 반환하는 경우 
		함수 호출의 실패
		windows 에서 ctrl+z 키를 눌렀을 때	
	*/
 } 
