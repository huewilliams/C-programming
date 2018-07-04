//(14-2):값을 전달하는 형태의 함수호출 : Call-by-reference 
#include<stdio.h>

void Swap(int n1, int n2)//num1과 num2에 저장된 값이 매개변수에 복사됨 
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
	printf("n1 n2 : %d %d\n",n1,n2);	
}

int main()
{
	int num1 =10;
	int num2 =20;
	printf("num1 num2 : %d %d \n",num1,num2);
	
	Swap(num1,num2);
	printf("num1 num2 : %d %d \n",num1,num2);
	//num1,num2 와 n1,n2는 별개의 변수이므로 n1,n2끼리 값이 변경되어도 num1,num2에는 영향을 주지 않는다. 
	return 0;
}
