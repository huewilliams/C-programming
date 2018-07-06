//(16-1)2차원 배열요소의 접근
#include <stdio.h>

int main(void)
{
	int villa[4][2];
	int popu, i ,j;
	
	//가구별 거주인원 입력받기
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d층 %d호 인구수 : ",i+1,j+1);
			scanf("%d",&villa[i][j]);
		}
	}
	
	//빌라의 층별 인구수 출력하기
	for(i=0;i<4;i++)
	{
		popu=0;
		popu += villa[i][0];//1호 
		popu += villa[i][1];//2호 
		printf("%d 층 인구수 : %d\n",i+1,popu);
	 } 
} 
