//(17-1)포인터 변수 대상의 Call-by-reference
#include<stdio.h>

void SwapIntPtr(int **dp1,int **dp2)
{//가리키는 대상(참조 대상) 변경 
	int * temp= *dp1;
	*dp1 = *dp2;
	*dp2 = temp;
}

int main(void)
{
	int num1 = 10, num2 = 20;
	int *ptr1, *ptr2;
	ptr1 = &num1, ptr2= &num2;
	printf("ptr1 : %d , ptr2 : %d\n",*ptr1,*ptr2);
	
	SwapIntPtr(&ptr1,&ptr2); //ptr1과 ptr2의 주소값 전달
	printf("ptr1 : %d , ptr2 : %d",*ptr1,*ptr2);
	return 0; 
} 
