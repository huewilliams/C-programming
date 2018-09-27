#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20] = "First~";
	char str2[20] = "Second";
	
	char str3[20] = "Simple num : ";
	char str4[20] = "1234567890";
	
	// case1
	// strcat : 문자열을 복사하여 덧붙이는 함수 
	strcat(str1, str2);
	puts(str1);
	
	// case2
	// * strncpy 함수와 다르게 자동으로 끝에 널 문자를 삽입한다.
	strncat(str3, str4, 7);
	puts(str3);
	return 0;
}
