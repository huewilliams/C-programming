//13-1 ���� : �����͸� �̿��� �迭�� ����
#include <stdio.h>

int main(){
	int arr[] = {1,2,3,4,5,6};
	int * fptr = arr; //�迭�� �� �� ���� 
	int * bptr = &arr[5]; //�迭�� �� �� ���� 
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
