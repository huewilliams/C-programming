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
	/* getchar(), fgetc() �Լ��� EOF�� ��ȯ�ϴ� ��� 
		�Լ� ȣ���� ����
		windows ���� ctrl+z Ű�� ������ ��	
	*/
 } 
