#include<stdio.h>

int main()
{
	char perID[7];
	char name[10];
	
	fputs("주민번호 6자리 입력:", stdout);
	// 엔터 키를 포함한 7자리가 입력 하여 마지막에 입력된 \n 이 입력버퍼에 남아있다 
	fgets(perID,sizeof(perID),stdin);
	
	fputs("이름 입력 : ", stdout);
	// fgets함수는 \n을 만날 때 까지 입력받으므로 다음 입력이 바로 끝나게 된다. 
	fgets(name,sizeof(name),stdin);
	
	printf("주민번호 : %s\n",perID);
	printf("이름 : %s\n",name);
}
