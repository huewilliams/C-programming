//(17-1 ����1)���� ������ ������ Ȱ�� 
#include<stdio.h>

int MaxAndMin(int *farr,int **xdptr,int **ndptr)
{
	int i;
	**xdptr=0,**ndptr=100;
	for(i=0;i<5;i++)
	{
		if(farr[i]>**xdptr)
			xdptr = &farr[i];
		if(farr[i]<**ndptr)
			ndptr = &farr[i];
	}
}

int main()
{
	int * maxPtr;
	int * minPtr;
	int arr[5]={12,35,32,64,75};
	
	MaxAndMin(arr,&maxPtr,&minPtr);
	printf("max : %d , min: %d",*maxPtr,*minPtr);
}
