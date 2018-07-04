//주소 값을 전달하는 형태의 함수 : Call-by-reference 
#include<stdio.h>

void Swap(int * ptr1,int * ptr2)//num1과 num2의 주소값을 전달해 swap함수 내에서 num1,num2에 직접접근이 가능함 
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
} 

int main(void)
{
	int num1 = 10;
	int num2 = 20;
	printf("num1 num2 : %d %d\n",num1,num2);
	
	Swap(&num1,&num2);
	printf("num1 num2 : %d %d\n",num1,num2);
	return 0;
}
