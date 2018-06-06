double ary_avg(int *);
int main()
{
	int ary[5]={75,80,92,88,98};
	double res;
	res=ary_avg(ary);//매개변수로 ary를 전달, 배열의 값을 다른 함수에서 변경할 때 포인터변수로 전달 
	printf("배열의 평균은 : %.2lf \n" , res);//ary_avg에서 반환된 합계를 res변수에 저장하여 소수점 둘째자리까지 출력 
	return 0;
}

double ary_avg(int *ap)//배열명 ary가 매개변수로 전달됨.배열명은 배열의 요소중 첫번째 요소의 주소임. 
{
	int i,tot=0;
	double average;
	for(i=0;i<5;i++)
	{
		tot+=ap[i];//포인터변수는 배열과 같이 사용할 수 있다.
		//배열명:포인터상수 
	} 
	average  = tot/5.0;
	return average;
}
