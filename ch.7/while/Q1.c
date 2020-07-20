#include <stdio.h>

int main(void)
{
    int x, i=0;
    printf("양의 정수 입력: ");
    scanf("%d",&x);
    while(i<x)
    {
        printf("Hello world\n");
        i++;
    }
    return 0;
}

