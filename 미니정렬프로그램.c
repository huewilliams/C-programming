#include<stdio.h>

void swap(double *pa, double *pb); //두 실수를 바꾸는 함수
void line_up(double *maxp, double *midp, double *minp); //함수 선언

int main(){
	double max, mid, min;
	
	printf("실수값 세 개 입력");
	scanf("%lf %lf %lf", &max, &mid, &min);
	line_up(&max,&mid,&min);
	printf("정렬된 값 출력 : %.1f, %.1f, %.1f\n",max,mid,min);
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
	if(*midp<*minp){//mid가 min보다 작을때 
		swap(midp,minp);
	}
	if(*maxp<*midp){//max가 mid보다 작을 때 
		swap(maxp,midp);
	}
	if(*midp<*minp){//mid가 min보다 작을 때 
		swap(midp,minp);
	}
}
