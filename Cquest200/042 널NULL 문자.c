#include<stdio.h>

int lenth( char * pstr);

main()
{
	int len = length("abcde");
	
	printf("���� : %d", len);
}

int length( char * pstr )
{
	// * pstr �� ���ڿ��� ù ��° ������ ������ ���޹޴´�. 
	int len = 0;
	
	while(*pstr != NULL )
	{
		// ��� ���ڿ��� ���� �׻� ��(NULL)�� ����ȴٴ� ���� �̿��Ͽ�
		// ���ڿ��� ���̸� ���� �� �ִ�. 
		pstr++;
		// �ݺ��� �� ���� ������ ������ ���� 
		len++;
	}
	
	return len;
}
