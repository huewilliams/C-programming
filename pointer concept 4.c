#include<stdio.h>
int main(){
	int a=10,b=20;
	const int *pa = &a; //=int const *pa = &a
	printf(%d,*pa);//10
	pa = &b;
	printf(%d,*pa);//20
	a = 20;
	pa = &a;
	printf("%d",*pa);//20
	//*pa = 30; : 에러 발생,  
	//포인터에 const를 사용하면 가리키는 변수의 값을 바꿀 수 없다.
	//즉, pa가 가리키는 변수 a는 pa를 간접참조하여 바꿀 수 없다.
	//a 변수는 포인터를 통해 바꿀 수 없으며, a 자체를 사용하면 얼마든지 바꿀 수 있다.
	
	//int * const pa = &a
	//pa = &b; : 에러 발생,
	//포인터 변수가 가지고 있는 주소값 변경 안됨. 
}

