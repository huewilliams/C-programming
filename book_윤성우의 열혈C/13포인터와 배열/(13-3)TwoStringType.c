//13-3상수 형태의 문자열을 가리키는 포인터 
#include<stdio.h>

int main(){
	char str1[] = "My String";     //변수 형태의 문자열  
	char * str2 = "Your String";   //상수 형태의 문자열
	//포인터가 가리키는 문자열은 내용의 변경이 불가능하다
	printf("%s %s \n",str1,str2);
	
	str2="Our String"; //가리키는 대상 변경(포인터 변수이기 때문에 가리키는 대상의 변경은 가능하다)
	printf("%s %s \n",str1,str2);
	
	str1[0] = 'X'; //문자열 변경 성공
	//str2[0] = 'X'; //문자열 변경 실패 (오류 발생) 
	printf("%s %s \n",str1,str2);
	return 0;
}
