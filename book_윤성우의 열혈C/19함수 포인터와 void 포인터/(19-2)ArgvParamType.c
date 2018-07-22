//(19-2)char * argv[] 
#include<stdio.h> 

//argv는 char형 더블포인터 변수이므로 char**형 데이터(주소 값)이 전달될 수 있다. 
void ShowAllString(int argc, char * argv[])
{
	int i;
	for(i=0;i<argc;i++)
		printf("%s \n",argv[i]);
}

int main(void)
{
	char * str[3]={//char형 포인터배열 
		"C Programming",
		"C++ Programming",
		"Java Programming"
	};
	ShowAllString(3,str);
	return 0;
 } 
