//(14-1 : �Լ��� ���ڷ� �迭 �����ϱ�) 
#include<stdio.h>

void ShowArrayElem(int *param,int len){//�迭�� �̸�(�迭�� ù���� ����� �ּ�)�� �޾ƿ��Ƿ� �����ͺ����� �޴´�. 
	int i;
	for(i=0;i<len;i++){
		printf("%d",param[i]);//�����ͺ����� �迭�� ���� ��밡���ϴ�. 
	printf("\n");
	}
}

int  main(){
	int arr1[3] = {1,2,3};
	int arr2[5] = {4,5,6,7,8};
	ShowArrayElem(arr1, sizeof(arr1) /sizeof(int));//(�迭�� �ּҰ�,�迭�� ����) ���� 
	ShowArrayElem(arr2, sizeof(arr2) /sizeof(int));
	return 0;	
}
