#include<stdio.h>
int main(){
	int ary[5]  = {10,20,30,40,50};
	int *ap = ary;//포인터 변수는 주소값으로 초기화함. 
	int i;
	
	//배열명은 포인터 상수이므로 자신의 값을 바꿀 수 없다. 
	//ary = ary+2; ary++;  :  잘못 사용된 예 
	//  배열명은 변수가 아니므로 자신의 값을 바꿀 수 없다. 
	
	//포인터 변수는 기억공간이므로 자신의 값을 바꿀 수 있다. 
	for(i=0;i<5;i++){
		printf("%5d",*ap);
		ap++;
	}
	printf("\n"); 
	ap = ary;
	for(i=0;i<5;i++){
		scanf("%d",ap+i); //배열에 값을 입력시 각 배열요소의 포인터만을 사용. 
	}
	printf("\n");
	for(i=0;i<5;i++){
		printf("%5d",*(ap+i));
	}
}
