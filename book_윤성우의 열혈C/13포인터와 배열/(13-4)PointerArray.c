//13-4 ������ ������ �̷��� �迭 : ������ �迭
#include<stdio.h>

int main(){
	int num1=10, num2=20, num3=30;
	int * arr[3] = {&num1,&num2,&num3}; //������ ������ �̷��� �ּ� ���� ���� ������ �迭�� '������ �迭'�̶�� �Ѵ�. 
	
	printf("%d \n",*arr[0]);
	printf("%d \n",*arr[1]);
	printf("%d \n",*arr[2]);
} 
