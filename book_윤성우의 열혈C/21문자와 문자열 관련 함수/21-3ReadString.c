#include<stdio.h>

int main(void)
{
	char str[6];
	int i;
	
	for(i=0; i<3; i++)
	{
		fgets(str, sizeof(str), stdin);
		// fgets() 함수는 \n(엔터키)를 입력받을 때까지 문자열을 읽어들인다.
		// 하지만 \n을 버리지 않고 문자열의 일부로 받아들이므로 출력시
		// 자동으로 개행된다. 
		printf("Read %d : %s \n", i+1, str);
	}
	return 0;
 } 
