#include<stdio.h>

void swap(double *pa, double *pb); //�� �Ǽ��� �ٲٴ� �Լ�
void line_up(double *maxp, double *midp, double *minp); //�Լ� ����

int main(){
	double max, mid, min;
	
	printf("�Ǽ��� �� �� �Է�");
	scanf("%lf %lf %lf", &max, &mid, &min);
	line_up(&max,&mid,&min);
	printf("���ĵ� �� ��� : %.1f, %.1f, %.1f\n",max,mid,min);
	return 0;
} 

void swap(double *pa, double *pb)
{
	double temp;
	
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double *maxp, double *midp, double *minp){
	if(*midp<*minp){//mid�� min���� ������ 
		swap(midp,minp);
	}
	if(*maxp<*midp){//max�� mid���� ���� �� 
		swap(maxp,midp);
	}
	if(*midp<*minp){//mid�� min���� ���� �� 
		swap(midp,minp);
	}
}
