#include<stdio.h>

int main(void)
{
	char str[6];
	int i;
	
	for(i=0; i<3; i++)
	{
		fgets(str, sizeof(str), stdin);
		// fgets() �Լ��� \n(����Ű)�� �Է¹��� ������ ���ڿ��� �о���δ�.
		// ������ \n�� ������ �ʰ� ���ڿ��� �Ϻη� �޾Ƶ��̹Ƿ� ��½�
		// �ڵ����� ����ȴ�. 
		printf("Read %d : %s \n", i+1, str);
	}
	return 0;
 } 
