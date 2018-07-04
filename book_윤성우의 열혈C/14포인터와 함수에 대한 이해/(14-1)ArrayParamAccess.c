#include<stdio.h>

void ShowArayElem(int *param,int len)
{
	int i;
	for(i=0;i<len;i++)
		printf("%d",param[i]);
	printf("\n");
}

//배열의 주소를 포인터로 받아와 사용할 때
//배열의 요소를 출력하는 것 뿐만 아니라 값을 변경하는 것도 가능하다. 
//배열을 매개변수로 가져올 때는 * param 을 param[]와 같이 선언하는 것도 가능하다(단, 매개변수로 가져올때 한함) 
void AddArayElem(int *param, int len, int add)
{
	int i;
	for(i=0;i<len;i++)
		param[i] += add;
}

int main()
{
	int arr[3] = {1,2,3};
	AddArayElem(arr, sizeof(arr) / sizeof(int) , 1);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
	//배열의 길이도 계산해서 인자로 전달하는 이유는
	//함수내에서 포인터변수* param의 크기 sizeof(param)의 경우 배열의 크기가 아닌 포인터변수의 크기가 반환된다.	
	AddArayElem(arr, sizeof(arr) / sizeof(int) , 2);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
	
	AddArayElem(arr, sizeof(arr) / sizeof(int) , 3);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
	
	return 0;
}
