//(18-2)배열 포인터와 포인터 배열을 혼동하지 말자
#include<stdio.h>

int main()
{ 
	int num1 = 10, num2 = 20, num3 = 30, num4 =40;
	int arr2d[2][4] = {//가로 길이가 4인 2차원 배열 
		{1,2,3,4},
		{5,6,7,8}
	};
	int i,j;
	
	//int형 포인터 변수로 이뤄진 int형 포인터 배열 
	int * whoA[4] = {&num1, &num2, &num3, &num4};
	//가로 길이가 4인 int형 2차원 배열을 가리키는 포인터 변수(배열 포인터) 
	int (* whoB)[4] = arr2d;
	
	printf("%d %d %d %d \n",*whoA[0],*whoA[1],*whoA[2],*whoA[3]);
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<4; j++)
			printf("%d ",whoB[i][j]);
		printf("\n");
	}
	return 0;
		
}
