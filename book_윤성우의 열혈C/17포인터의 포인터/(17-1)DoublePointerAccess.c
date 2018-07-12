//포인터 변수를 가리키는 이중 포인터 변수(더블 포인터 변수)
#include<stdio.h>

int main()
{
	double num = 3.14;
	double *ptr = &num;
	double **dptr = &ptr;
	double *ptr2;
	
	printf("%9p %9p \n",ptr,*dptr);//*dptr은 ptr을 의미하므로 같은 결과  
	printf("%9g %9g \n",num,**dptr);//**dptr은 num을 의미하므로 같은 결과 
	ptr2 = *dptr;//*dptr이 ptr이므로 ptr2도 num을 가리키게 된다 
	*ptr2 = 10.99;//변수 num의 값을 10.99로 변경 
	printf("%9g %9g \n",num,**dptr);//변경된 num값을 확인 
	return 0; 
 } 
