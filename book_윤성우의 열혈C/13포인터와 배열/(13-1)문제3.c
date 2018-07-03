//13-1 문제 : 포인터를 이용한 배열의 접근
#include <stdio.h>

int main(){
	int arr[5]={1,2,3,4,5};
	int * ptr = &arr[4];
	int i,sum=0;
	for(i=0;i<5;i++){
		sum=sum+*ptr; 
		printf("arr[%d]:%d\n",i,*ptr); 
		ptr--;
	}
	printf("%d",sum);
} 
