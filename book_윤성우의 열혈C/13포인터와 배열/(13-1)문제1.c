//13-1 문제 : 포인터를 이용한 배열의 접근
#include <stdio.h>

int main(){
	int arr[5]={1,2,3,4,5};
	int * ptr = arr;
	int i;
	for(i=0;i<5;i++){
		*ptr+=2;
		printf("%d\n",*ptr);
		ptr++;
	} 
} 
