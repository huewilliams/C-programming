#include<stdio.h>
#include<stdlib.h>
// ������� stdlib.h �� ����� �Լ���
// int atoi(const char * str) : ���ڿ��� ������ int������ ��ȯ 
// long atol(const char * str) : ���ڿ��� ������ long������ ��ȯ 
// double atof(const char * str) : ���ڿ��� ������ double������ �� 


int main()
{
	char str[20];
	printf("���� �Է�");
	scanf("%s",str);
	printf("%d \n",atoi(str));
	
	printf("�Ǽ� �Է�");
	scanf("%s",str);
	printf("%g \n",atof(str));
	return 0;
} 
