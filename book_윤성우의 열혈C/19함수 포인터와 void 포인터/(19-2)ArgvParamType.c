//(19-2)char * argv[] 
#include<stdio.h> 

//argv�� char�� ���������� �����̹Ƿ� char**�� ������(�ּ� ��)�� ���޵� �� �ִ�. 
void ShowAllString(int argc, char * argv[])
{
	int i;
	for(i=0;i<argc;i++)
		printf("%s \n",argv[i]);
}

int main(void)
{
	char * str[3]={//char�� �����͹迭 
		"C Programming",
		"C++ Programming",
		"Java Programming"
	};
	ShowAllString(3,str);
	return 0;
 } 
