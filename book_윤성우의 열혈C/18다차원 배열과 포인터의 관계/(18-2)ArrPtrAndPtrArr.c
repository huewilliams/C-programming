//(18-2)�迭 �����Ϳ� ������ �迭�� ȥ������ ����
#include<stdio.h>

int main()
{ 
	int num1 = 10, num2 = 20, num3 = 30, num4 =40;
	int arr2d[2][4] = {//���� ���̰� 4�� 2���� �迭 
		{1,2,3,4},
		{5,6,7,8}
	};
	int i,j;
	
	//int�� ������ ������ �̷��� int�� ������ �迭 
	int * whoA[4] = {&num1, &num2, &num3, &num4};
	//���� ���̰� 4�� int�� 2���� �迭�� ����Ű�� ������ ����(�迭 ������) 
	int (* whoB)[4] = arr2d;
	
	printf("%d %d %d %d \n",*whoA[0],*whoA[1],*whoA[2],*whoA[3]);
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<4; j++)
			printf("%d ",whoB[i][j]);
		printf("\n");
	}
	return 0;
		
}
