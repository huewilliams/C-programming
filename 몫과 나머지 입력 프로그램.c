#include<stdio.h>

int func(int * a,int * b){
	printf("���� �Է��ϼ��� ");
	scanf("%d",a);
	*b=*a;
	*a=*a / 4;
	*b=*b % 4;
	return;
}

int main(){
	int mod,rem;
	func(&mod, &rem);
	printf("�� :%d , ������: %d",mod,rem);
	return 0; 
}
