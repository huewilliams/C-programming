#include<stdio.h>

void ShowArayElem(int *param,int len)
{
	int i;
	for(i=0;i<len;i++)
		printf("%d",param[i]);
	printf("\n");
}

//�迭�� �ּҸ� �����ͷ� �޾ƿ� ����� ��
//�迭�� ��Ҹ� ����ϴ� �� �Ӹ� �ƴ϶� ���� �����ϴ� �͵� �����ϴ�. 
//�迭�� �Ű������� ������ ���� * param �� param[]�� ���� �����ϴ� �͵� �����ϴ�(��, �Ű������� �����ö� ����) 
void AddArayElem(int *param, int len, int add)
{
	int i;
	for(i=0;i<len;i++)
		param[i] += add;
}

int main()
{
	int arr[3] = {1,2,3};
	AddArayElem(arr, sizeof(arr) / sizeof(int) , 1);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
	//�迭�� ���̵� ����ؼ� ���ڷ� �����ϴ� ������
	//�Լ������� �����ͺ���* param�� ũ�� sizeof(param)�� ��� �迭�� ũ�Ⱑ �ƴ� �����ͺ����� ũ�Ⱑ ��ȯ�ȴ�.	
	AddArayElem(arr, sizeof(arr) / sizeof(int) , 2);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
	
	AddArayElem(arr, sizeof(arr) / sizeof(int) , 3);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
	
	return 0;
}
