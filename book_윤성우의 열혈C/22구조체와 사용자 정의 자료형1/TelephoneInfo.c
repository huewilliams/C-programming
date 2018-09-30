#include<stdio.h>
#include<string.h>

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void)
{
	struct person man1, man2;
	strcpy(man1.name, "안성준");
	strcpy(man1.phoneNum, "010-1122-3344");
	man1.age = 23;
	
	// 배열에 저장하기 때문에 앞에 &를 붙이지 않아도 됨 
	printf("이름 입력 : \n"); scanf("%s", man2.name); 
	printf("번호 입력 : \n"); scanf("%s", man2.phoneNum);
	printf("나이 입력 : \n"); scanf("%d", &(man2.age));
	
	printf("이름 : %s\n", man1.name);
	printf("번호 : %s\n", man1.phoneNum);
	printf("나이 : %d\n", man1.age);
	
	printf("이름 : %s\n", man2.name);
	printf("번호 : %s\n", man2.phoneNum);
	printf("나이 : %d\n", man2.age);
	return 0;
}
