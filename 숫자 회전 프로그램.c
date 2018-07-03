#include<stdio.h>

void ratate (int *pa, int *pb, int *pc){
	int temp;
	temp=*pa;
	*pa = *pb;
	*pb = *pc;
	*pc = temp;
} 

int main(){
	int a=1,b=2,c=3;
	char key;
	printf("%d : %d : %d\n",a,b,c);
	key = getch();
	while(key == 13){
		ratate(&a,&b,&c);
		printf("%d : %d : %d\n",a,b,c);
		key = getch();
	}
} 
