//(18-1)배열 이름 기반의 포인터 연산 : 배열이름에 1을 더한 결과는?
#include<stdio.h>

int main()
{
	int arr1[3][2];
	int arr2[2][3];
	
	//8씩 증가 
	printf("arr1: %p \n",arr1);
	printf("arr1+1: %p \n",arr1+1);
	printf("arr1+2: %p \n\n",arr1+2);
	
	//12씩 증가 
	printf("arr2: %p \n",arr2);
	printf("arr2+1: %p \n",arr2+1);
	
	//2차원 배열이름을 대상으로 증가 및 감소연산을 할 경우, 연산결과는 각 행의 첫 번째 요소의 주소 값이 된다. 
	return 0;
 } 
