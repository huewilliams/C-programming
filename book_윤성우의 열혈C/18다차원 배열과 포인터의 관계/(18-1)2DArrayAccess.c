//(18-1)2���� �迭�̸��� ����Ű�� �͵���?
#include<stdio.h>

int main()
{
	int arr2d[3][3];
	//2���� �迭�� ��� arr2d[0],arr2d[1],arr2d[2] ��� 1��,2��,3���� ù��° ����� �ּҸ� ����Ų��.  
	printf("%d \n",arr2d);
	printf("%d \n",arr2d[0]);//1�� ù ��° ���,1���� �ǹ� 
	printf("%d \n",&arr2d[0][0]);
	
	printf("%d \n",arr2d[1]);//2�� ù ��° ���,2���� �ǹ� 
	printf("%d \n",&arr2d[1][0]);
	
	printf("%d \n",arr2d[2]);//3�� ù ��° ���,3���� �ǹ� 
	printf("%d \n",&arr2d[2][0]);
	
	//arr2d�� ù ��° ��Ҹ� ����Ű�鼭 �迭 ��ü�� �ǹ��Ѵ�.
	//������ arr2d[0]�� ù ��° ��Ҹ� ����Ű�� 1�ุ�� �ǹ��Ѵ�. ���� sizeof������ ����� �ٸ���. 
	printf("sizeof(arr2d) : %d \n",sizeof(arr2d));
	printf("sizeof(arr2d[0]) : %d \n",sizeof(arr2d[0]));
	printf("sizeof(arr2d[1]) : %d \n",sizeof(arr2d[1]));
	printf("sizeof(arr2d[2]) : %d \n",sizeof(arr2d[2]));
	return 0;
 } 
