#include <stdio.h>

int main(void)
{
	int ch1, ch2;
	// getchar() 함수와 fgetc() 함수의 반환값이 int 이므로 저장하는 함수를 
	// int형으로 선언함 
	
	ch1 = getchar(); //문자입력
	ch2 = fgetc(stdin); // 스트림을 표준입력으로 설정
	// 엔터키를 눌렀을 때 엔터키의 아스키코드 값인 10을 저장 
	
	putchar(ch1); // 문자 출력 
	fputc(ch2, stdout); // 스트림을 표준출력으로 설정 
	// 엔터키를 '\n'으로 표현함 
	return 0; 
}
