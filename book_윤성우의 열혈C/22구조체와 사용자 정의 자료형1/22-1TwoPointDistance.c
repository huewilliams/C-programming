#include<stdio.h>
#include<math.h> // sqrt() 함수를 사용하기 위한 헤더파일 

struct point  // 구조체 point의 정의 
{
	int xpos;
	int ypos;
};

int main()
{
	struct point pos1, pos2; // 구조체 변수 정의 
	double distance;
	
	fputs("point1 pos : ",stdout);
	scanf("%d %d", &pos1.xpos, &pos1.ypos); // 구조체 멤버의 값 저장 
	
	fputs("point2 pos : ",stdout);
	scanf("%d %d", &pos2.xpos, &pos2.ypos);
	
	// 두 점간의 거리 계산
	distance = sqrt((double)((pos1.xpos-pos2.xpos)*(pos1.xpos-pos2.xpos) + (pos1.ypos-pos2.ypos) * (pos1.ypos-pos2.ypos)));
	printf("두 점 사이의 거리는 %d 입니다.",distance);
	return 0;
}
