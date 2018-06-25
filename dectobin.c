/*
	Maker : Huewilliams È²½Å¿ì 

	the program that changes decimal to binary.
*/
#include<stdio.h>

int main(void){
	int dec,bin,rem,cnt=0,i; //dec:decimal,bin:binary,rem:reminder 
	int arr[1000]; //array that store binary numbers. 
	printf("Input decimal number\n");
	scanf("%d",&dec);
	printf("You input : %d\n",dec);
	for(i=0;dec>0;i++){
		arr[i]=dec%2;
		dec/=2;
		cnt++;
	}
	cnt--;
	printf("binary result :");
	for(cnt-1;cnt>=0;cnt--){
		printf("%d",arr[cnt]);
	}
	return 0;
}
