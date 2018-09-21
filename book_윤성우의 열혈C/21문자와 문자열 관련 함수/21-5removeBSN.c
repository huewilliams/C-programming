#include<stdio.h>
#include<string.h>

void RemoveBSN(char str[])
{
	int len = strlen(str);
	// fgets 함수호출에서 같이 딸려서 들어오는 \n문자를 문자열에서 제외함 
	str[len-1] = 0;
	// \n이 저장된 위치에 아스키코드 값 0을 저장하여 \n 이 사라진다. 
}

int main()
{
	char str[100];
	printf("문자열 입력 : ");
	fgets(str, sizeof(str), stdin);
	printf("길이 : %d, 내용 : %s \n", strlen(str), str);
	
	RemoveBSN(str);
	printf("길이 : %d, 내용 : %s \n", strlen(str), str);
	return 0;
}
