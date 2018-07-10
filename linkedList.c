#include<stdio.h>

typedef struct  Node * PNode;
struct Node{
	int data;
	struct Node * link;
};
PNode  HeadNode=NULL;

void insert(int n)
{
	PNode str = (PNode)malloc(sizeof(struct Node));
	str->data = n;
	str->link = HeadNode;
	HeadNode = str;
	print();
}


void print()
{
	printf("노드 리스트 :");
	PNode str = HeadNode;
	while(str)
	{
		printf("%d",str->data);
		if(str->link)
			printf("->");
		str = str->link;
	}
	printf("\n");
}

int delete()
{
	int num;
	PNode str = HeadNode;
	HeadNode = str->link;
	num = str->data;
	free(str);
	print();
	return num;
}

int main()
{
	int i,num;
	while(1)
	{
		printf("수행할 명령 선택 1.삽입 2.삭제 3.출력");
		scanf("%d",&i);
		switch(i)
		{
			case 1: 	
				printf("삽입 숫자 : ");
				scanf("%d", &num);
				insert(num);
				break;
			case 2:
				printf("%d 가 삭제되었습니다\n",delete());
				break;
			case 3:	
				print();
				break;
		}							
	}	
}
