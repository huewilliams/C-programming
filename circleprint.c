#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,num=15;
    for(i =-num; i<num; i++)
    {
        for(j =-num; j<num; j++)
        {
            if(i * i + j * j <= num * num)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
