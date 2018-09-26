#include<stdio.h>

int lenth( char * pstr);

main()
{
	int len = length("abcde");
	
	printf("길이 : %d", len);
}

int length( char * pstr )
{
	// * pstr 은 문자열의 첫 번째 문자의 번지를 전달받는다. 
	int len = 0;
	
	while(*pstr != NULL )
	{
		// 모든 문자열의 끝은 항상 널(NULL)로 종료된다는 것을 이용하여
		// 문자열의 길이를 구할 수 있다. 
		pstr++;
		// 반복될 때 마다 문자의 번지를 증가 
		len++;
	}
	
	return len;
}
