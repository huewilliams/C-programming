#include<stdio.h>

int main(void)
{
	char * str = "Simple String";
	// puts �Լ��� fputs �Լ��� ����
	// puts �Լ��� ���ڿ� ����� �ڵ����� ������
	// fputs �Լ��� ���ڿ� ����� �ڵ������� �̷����� �ʴ´�. 
	
	printf("1. puts test----- \n");
	puts(str);
	puts("So Simple String");
	
	printf("2. fputs test----- \n");
	fputs(str, stdout); printf("\n");
	fputs("So simple String", stdout); printf("\n");
	
	printf("3. end of main-----");
	return 0;
} 
