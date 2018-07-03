//13-4 포인터 변수로 이뤄진 배열 : 포인터 배열
#include<stdio.h>

int main(){
	int num1=10, num2=20, num3=30;
	int * arr[3] = {&num1,&num2,&num3}; //포인터 변수로 이뤄져 주소 값이 저장 가능한 배열을 '포인터 배열'이라고 한다. 
	
	printf("%d \n",*arr[0]);
	printf("%d \n",*arr[1]);
	printf("%d \n",*arr[2]);
} 
