#include<stdio.h>

struct score
{
	int kor;
	int eng;
	int math;
};

main()
{
	struct score s1;
	s1.kor = 100;
	s1.eng = 95;
	s1.math = 99;
	
	printf("รัวี : %d", s1.eng + s1.kor + s1.math);
}
