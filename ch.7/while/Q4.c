#include <stdio.h>

int main(void)
{
    int x, y=9;
    printf("숫자를 입력하세요: ");
    scanf("%d",&x);
    while(y>0)
    {
        printf("%d x %d = %d\n", x,y,x*y);
        y--;
    }
    return 0;
}