#include<stdio.h>
#include<stdlib.h>
// 헤더파일 stdlib.h 에 선언된 함수들
// int atoi(const char * str) : 문자열의 내용을 int형으로 반환 
// long atol(const char * str) : 문자열의 내용을 long형으로 반환 
// double atof(const char * str) : 문자열의 내용을 double형으로 반 


int main()
{
	char str[20];
	printf("정수 입력");
	scanf("%s",str);
	printf("%d \n",atoi(str));
	
	printf("실수 입력");
	scanf("%s",str);
	printf("%g \n",atof(str));
	return 0;
} 
