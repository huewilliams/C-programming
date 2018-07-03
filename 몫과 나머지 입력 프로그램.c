#include<stdio.h>

int func(int * a,int * b){
	printf("값을 입력하세요 ");
	scanf("%d",a);
	*b=*a;
	*a=*a / 4;
	*b=*b % 4;
	return;
}

int main(){
	int mod,rem;
	func(&mod, &rem);
	printf("몫 :%d , 나머지: %d",mod,rem);
	return 0; 
}
