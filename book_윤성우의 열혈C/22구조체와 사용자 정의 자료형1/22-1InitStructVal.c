#include<stdio.h>

struct point 
{
	int xpos;
	int ypos;
 };
 
 struct person
 {
 	char name[20];
 	char phoneNum[20];
 	int age;
 };
 
 int main(void)
 {
 	// 다음과 같은 방법으로 구조체 변수를 초기화 할 수 있다. 
 	// xpos, ypos
	 struct point pos = {10,20};
	// name, phoneNum, age
 	struct person man = {"이승기", "010-1212-0001", 21};
 	printf("%d %d \n", pos.xpos, pos.ypos);
 	printf("%s %s %d \n", man.name, man.phoneNum, man.age);
 	return 0;
 }
