#include <stdio.h>

int main(void)
{
    int num,i, quo;
    int arr[50];
    printf("10진수 정수 입력: ");
    scanf("%d", &num);
    for(i=0;i<50;i++)
    {
        quo = num%2;
        arr[49-i]=quo;
        num = num/2;  
    }
    for(i=0;i<50;i++)
        printf("%d", arr[i]);
    printf("\n");

    return 0;
}