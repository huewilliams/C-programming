#include<stdio.h>

int main()
{
	char perID[7];
	char name[10];
	
	fputs("�ֹι�ȣ 6�ڸ� �Է�:", stdout);
	// ���� Ű�� ������ 7�ڸ��� �Է� �Ͽ� �������� �Էµ� \n �� �Է¹��ۿ� �����ִ� 
	fgets(perID,sizeof(perID),stdin);
	
	fputs("�̸� �Է� : ", stdout);
	// fgets�Լ��� \n�� ���� �� ���� �Է¹����Ƿ� ���� �Է��� �ٷ� ������ �ȴ�. 
	fgets(name,sizeof(name),stdin);
	
	printf("�ֹι�ȣ : %s\n",perID);
	printf("�̸� : %s\n",name);
}
