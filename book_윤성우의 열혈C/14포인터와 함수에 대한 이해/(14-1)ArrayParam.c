//(14-1 : 함수의 인자로 배열 전달하기) 
#include<stdio.h>

void ShowArrayElem(int *param,int len){//배열의 이름(배열의 첫번쟤 요소의 주소)를 받아오므로 포인터변수로 받는다. 
	int i;
	for(i=0;i<len;i++){
		printf("%d",param[i]);//포인터변수는 배열과 같이 사용가능하다. 
	printf("\n");
	}
}

int  main(){
	int arr1[3] = {1,2,3};
	int arr2[5] = {4,5,6,7,8};
	ShowArrayElem(arr1, sizeof(arr1) /sizeof(int));//(배열의 주소값,배열의 길이) 전달 
	ShowArrayElem(arr2, sizeof(arr2) /sizeof(int));
	return 0;	
}
