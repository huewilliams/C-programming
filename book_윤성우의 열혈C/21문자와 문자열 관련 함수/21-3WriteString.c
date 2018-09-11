#include<stdio.h>

int main(void)
{
	char * str = "Simple String";
	// puts 함수와 fputs 함수의 차이
	// puts 함수는 문자열 출력후 자동개행 되지만
	// fputs 함수는 문자열 출력후 자동개행이 이뤄지지 않는다. 
	
	printf("1. puts test----- \n");
	puts(str);
	puts("So Simple String");
	
	printf("2. fputs test----- \n");
	fputs(str, stdout); printf("\n");
	fputs("So simple String", stdout); printf("\n");
	
	printf("3. end of main-----");
	return 0;
} 
