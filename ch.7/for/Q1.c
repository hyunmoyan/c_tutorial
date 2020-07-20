#include <stdio.h>

int main(void)
{
    int i,end, total=0;
    printf("두 개의 정수: ");
    scanf("%d %d",&i,&end);
    for (i ; i <= end; i++)
    {
        total +=i;
    }
    printf("%d\n",total);
    return 0;
}