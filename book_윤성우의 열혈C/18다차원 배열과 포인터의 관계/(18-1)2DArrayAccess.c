//(18-1)2차원 배열이름이 가리키는 것들은?
#include<stdio.h>

int main()
{
	int arr2d[3][3];
	//2차원 배열의 경우 arr2d[0],arr2d[1],arr2d[2] 모두 1행,2행,3행의 첫번째 요소의 주소를 가리킨다.  
	printf("%d \n",arr2d);
	printf("%d \n",arr2d[0]);//1행 첫 번째 요소,1행을 의미 
	printf("%d \n",&arr2d[0][0]);
	
	printf("%d \n",arr2d[1]);//2행 첫 번째 요소,2행을 의미 
	printf("%d \n",&arr2d[1][0]);
	
	printf("%d \n",arr2d[2]);//3행 첫 번째 요소,3행을 의미 
	printf("%d \n",&arr2d[2][0]);
	
	//arr2d는 첫 번째 요소를 가리키면서 배열 전체를 의미한다.
	//하지만 arr2d[0]는 첫 번째 요소를 가리키되 1행만을 의미한다. 따라서 sizeof연산의 결과가 다르다. 
	printf("sizeof(arr2d) : %d \n",sizeof(arr2d));
	printf("sizeof(arr2d[0]) : %d \n",sizeof(arr2d[0]));
	printf("sizeof(arr2d[1]) : %d \n",sizeof(arr2d[1]));
	printf("sizeof(arr2d[2]) : %d \n",sizeof(arr2d[2]));
	return 0;
 } 
