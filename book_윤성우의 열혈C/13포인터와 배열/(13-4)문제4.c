//13-1 문제 : 포인터를 이용한 배열의 접근
#include <stdio.h>

int main(){
	int arr[] = {1,2,3,4,5,6};
	int * fptr = arr; //배열의 맨 앞 참조 
	int * bptr = &arr[5]; //배열의 맨 뒤 참조 
	int i;
	
	for(i=0;i<3;i++){
		int temp;
		temp = *fptr;
		*fptr = *bptr;
		*bptr = temp;
		fptr++,bptr--;
	}
	for(i=0;i<6;i++){
		printf("%d\n",arr[i]);
	}
} 
