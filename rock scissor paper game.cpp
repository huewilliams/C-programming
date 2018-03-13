#include<stdio.h>
#include<stdlib.h>

int num=0,user=0;
main()
{
	num=rand()%3+1;
	printf("rock scissor paper program \n");
	printf("choose one : rock input \"1\" , scissor input \"2\" or paper input \"3\"\n");
	scanf("%d",&user);
	switch(num)
	{
		case 1:
			printf("Ai picked rock\n");
			if(user==2)
			printf("you lost");
			else if(user==3)
			printf("you win");
			else
			printf("Draw");
		case 2:
			printf("AI picked scissor\n");
			if(user==3)
			printf("you lost");
			else if(user==1)
			printf("you win");
			else
			printf("Draw");
		case 3:
			printf("AI picked paper\n");
			if(user==1)
			printf("you lost");
			else if(user==2)
			printf("you win");
			else
			printf("Draw");

			
			
	}
}
