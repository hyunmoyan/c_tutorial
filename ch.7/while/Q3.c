#include <stdio.h>

int main(void)
{
    int num1=1, num2=0;


    while (num1 != 0 )
    {
        printf("정수를 입력하세요. ");
        scanf("%d", &num1);
        num2 += num1;       
    }
    printf("총 함: %d\n", num2);
    
    return 0;
}