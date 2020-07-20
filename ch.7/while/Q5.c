#include <stdio.h>

int main(void)
{
    int x, y, z=0, a=1;
    printf("몇 개의 정수를 입력하시겠습니까? ");
    scanf("%d", &x);
    
    while (x>=a)
    {
        printf("정수를 입력해 주세요: ");
        scanf("%d", &y);  
        z += y;  
        a++;
    }
    printf("%d/%d = %f\n",y,x,(double)y/x);
    return 0;
}