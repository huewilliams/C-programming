//������ ������ ����Ű�� ���� ������ ����(���� ������ ����)
#include<stdio.h>

int main()
{
	double num = 3.14;
	double *ptr = &num;
	double **dptr = &ptr;
	double *ptr2;
	
	printf("%9p %9p \n",ptr,*dptr);//*dptr�� ptr�� �ǹ��ϹǷ� ���� ���  
	printf("%9g %9g \n",num,**dptr);//**dptr�� num�� �ǹ��ϹǷ� ���� ��� 
	ptr2 = *dptr;//*dptr�� ptr�̹Ƿ� ptr2�� num�� ����Ű�� �ȴ� 
	*ptr2 = 10.99;//���� num�� ���� 10.99�� ���� 
	printf("%9g %9g \n",num,**dptr);//����� num���� Ȯ�� 
	return 0; 
 } 
