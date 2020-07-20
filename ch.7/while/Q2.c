#include <stdio.h>

int main(void)
{
    int num1, num2=1;
    printf("양의 정수를 입력하세요: ");
    scanf("%d", &num1);
    while(num2<=num1)
    {
        printf("%d ", num2*3);
        num2++;
    }
    return 0;
}