#include<stdio.h>
#include<math.h> // sqrt() �Լ��� ����ϱ� ���� ������� 

struct point  // ����ü point�� ���� 
{
	int xpos;
	int ypos;
};

int main()
{
	struct point pos1, pos2; // ����ü ���� ���� 
	double distance;
	
	fputs("point1 pos : ",stdout);
	scanf("%d %d", &pos1.xpos, &pos1.ypos); // ����ü ����� �� ���� 
	
	fputs("point2 pos : ",stdout);
	scanf("%d %d", &pos2.xpos, &pos2.ypos);
	
	// �� ������ �Ÿ� ���
	distance = sqrt((double)((pos1.xpos-pos2.xpos)*(pos1.xpos-pos2.xpos) + (pos1.ypos-pos2.ypos) * (pos1.ypos-pos2.ypos)));
	printf("�� �� ������ �Ÿ��� %d �Դϴ�.",distance);
	return 0;
}
