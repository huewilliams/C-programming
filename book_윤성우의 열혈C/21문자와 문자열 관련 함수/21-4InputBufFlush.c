#include<stdio.h>

void ClearLineFromReadBuffer(void)
{
	while(getchar()!='\n');
	// \n을 만날 때까지 문자를 읽어들이는 함수
	// 이 함수를 호출하여 입력버퍼를 비울 수 있다. 
}

int main()
{
	char perID[7];
	char name[10];
	
	fputs("주민번호 앞 6자리 입력 : ",stdout);
	fgets(perID, sizeof(perID), stdin);
	ClearLineFromReadBuffer();
	
	fputs("이름 입력 : ",stdout);
	fgets(name, sizeof(name), stdin);
	
	printf("주민번호 : %s\n",perID);
	printf("이름 : %s\n", name);
}
