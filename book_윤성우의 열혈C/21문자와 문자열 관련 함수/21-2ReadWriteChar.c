#include <stdio.h>

int main(void)
{
	int ch1, ch2;
	// getchar() �Լ��� fgetc() �Լ��� ��ȯ���� int �̹Ƿ� �����ϴ� �Լ��� 
	// int������ ������ 
	
	ch1 = getchar(); //�����Է�
	ch2 = fgetc(stdin); // ��Ʈ���� ǥ���Է����� ����
	// ����Ű�� ������ �� ����Ű�� �ƽ�Ű�ڵ� ���� 10�� ���� 
	
	putchar(ch1); // ���� ��� 
	fputc(ch2, stdout); // ��Ʈ���� ǥ��������� ���� 
	// ����Ű�� '\n'���� ǥ���� 
	return 0; 
}
