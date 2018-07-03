//윤성우 열혈C 13-1포인터와 배열의 관계
#include<stdio.h>

int main(void){
	int arr[3] = {15,25,35};
	int * ptr = &arr[0]; //int * ptr = arr 과 동일
	
	printf("%d %d\n",ptr[0],arr[0]);
	printf("%d %d\n",ptr[1],arr[1]);
	printf("%d %d\n",ptr[2],arr[2]);
	printf("%d %d\n",*ptr,*arr);
	//포인터 변수와 배열의 이름을 대상으로 수행가능한 연산의 형태에는 차이가 없다. 
	return 0; 
}
