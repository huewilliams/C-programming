//13-1 ���� : �����͸� �̿��� �迭�� ����
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
