/*
���� Ȳ�ſ� Hue williams
calculator version 1
(calculator ����) (operator  ������)
*/
#include<stdio.h>
#include<stdlib.h>
static int Linput=0,Rinput=0;
static char oper=0;
void scan()
{
	scanf("%d %c %d",&Linput,&oper,&Rinput);
}
int main()
{
	scanf("%d %c %d",&Linput, &oper ,&Rinput);
	while(1)
    {
       if(oper == '+')
    	    Linput=Linput + Rinput;
       else if(oper == '-')
    	    Linput=Linput - Rinput;
       else if(oper == '*')
            Linput=Linput * Rinput;
	   else if(oper == '/')
		    Linput=Linput / Rinput;
	   else if(oper == '%')
            Linput=Linput % Rinput;
       else
       {printf("�Է¿���");
	   }
       printf(" = %d\n",Linput);
       scan();                                           
    }
}

