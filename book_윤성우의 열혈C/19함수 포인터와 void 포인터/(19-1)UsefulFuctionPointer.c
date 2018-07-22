//(18-2)적절한 함수 포인터의 선언
#include<stdio.h>

int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2))
{
	//매개변수의 선언으로 함수 포인터 변수가 올 수 있음 
	return cmp(age1, age2);
}

int OlderFirst(int age1, int age2)
{
	if(age1>age2)
		return age1;
	else if(age1<age2)
		return age2;
	else 
		return 0;
}

int YoungerFirst(int age1, int age2)
{
	if(age1>age2)
		return age2;
	else if(age1<age2)
		return age1;
	else
		return 0;
}

int main(void)
{
	int age1 = 20;
	int age2 = 30;
 	int first;
	 
	printf("입장순서 1\n");
	//인자로 함수의 이름 전달(함수의 이름: 함수의 주소를 의미함) 
	first = WhoIsFirst(age1, age2, OlderFirst);
	printf("%d 세와 %d세 중 %d세가 먼저 입장!\n",age1,age2,first);
	
	printf("입장순서 2\n");
	first = WhoIsFirst(age1, age2, YoungerFirst);
	printf("%d 세와 %d세 중 %d세가 먼저 입장!\n",age1,age2,first);	
	return 0;
} 
