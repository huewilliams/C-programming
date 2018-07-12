//포인터 배열과 포인터 배열의 포인터형
#include<stdio.h>

int main(void)
{
	int num1 =10, num2 = 20, num3 =30;
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	int *ptr3 = &num3;
	
	int * ptrArr[]={ptr1,ptr2,ptr3};//포인터 배열의 각 요소에 포인터의 주소를 저장
	int **dptr = ptrArr; //dptr과 ptrArr의 자료형이 같아야 대입 연산이 가능함 
	
	printf("%d %d %d \n",*(ptrArr[0]),*(ptrArr[1]),*(ptrArr[2]));
	printf("%d %d %d \n",*(dptr[0]),*(dptr[1]),*(dptr[2]));
	return 0;
}
