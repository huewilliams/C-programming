#include<stdio.h>
#include<string.h>

void RemoveBSN(char str[])
{
	int len = strlen(str);
	// fgets �Լ�ȣ�⿡�� ���� ������ ������ \n���ڸ� ���ڿ����� ������ 
	str[len-1] = 0;
	// \n�� ����� ��ġ�� �ƽ�Ű�ڵ� �� 0�� �����Ͽ� \n �� �������. 
}

int main()
{
	char str[100];
	printf("���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin);
	printf("���� : %d, ���� : %s \n", strlen(str), str);
	
	RemoveBSN(str);
	printf("���� : %d, ���� : %s \n", strlen(str), str);
	return 0;
}
