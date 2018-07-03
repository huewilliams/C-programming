//윤성우 열혈C 13-1포인터와 배열의 관계
#include<stdio.h>

int main(void){
	int arr1[3] = {1,2,3};
	double arr2[3] = {1.1,2.2,3.3};
	
	printf("%d %g \n",*arr1,*arr2);// 1차원 배열이름의 포인터 형은 배열의 이름이 가리키는 대상을 기준으로 결정한다. 
	*arr1 += 100;//배열의 이름도 포인터이기 때문에 *연산이 가능하다 
	*arr2 += 120.5;
	printf("%d %g \n",arr1[0],arr2[0]);
	return 0;
}
