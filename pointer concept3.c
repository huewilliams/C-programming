double ary_avg(int *);
int main()
{
	int ary[5]={75,80,92,88,98};
	double res;
	res=ary_avg(ary);//�Ű������� ary�� ����, �迭�� ���� �ٸ� �Լ����� ������ �� �����ͺ����� ���� 
	printf("�迭�� ����� : %.2lf \n" , res);//ary_avg���� ��ȯ�� �հ踦 res������ �����Ͽ� �Ҽ��� ��°�ڸ����� ��� 
	return 0;
}

double ary_avg(int *ap)//�迭�� ary�� �Ű������� ���޵�.�迭���� �迭�� ����� ù��° ����� �ּ���. 
{
	int i,tot=0;
	double average;
	for(i=0;i<5;i++)
	{
		tot+=ap[i];//�����ͺ����� �迭�� ���� ����� �� �ִ�.
		//�迭��:�����ͻ�� 
	} 
	average  = tot/5.0;
	return average;
}
