//(17-2)이중 포인터를 가리키는 삼중포인터
#include<stdio.h>

int main(void)
{
	int num =100;
	int *ptr = &num;
	int **dptr = &ptr;
	int ***tptr = &dptr;
	
	printf("%d %d",**dptr,***tptr);
	return 0;
 } 
