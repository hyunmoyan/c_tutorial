#include <stdio.h>

int main(void)
{
    int main[5], i, sum, max, min;
    printf("5개의 정수를 입력하세요: ");
    scanf("%d %d %d %d %d", &main[0],&main[1],&main[2],&main[3],&main[4]);
    
    sum= max= min= main[0];
    for(i=1;i<5;i++)
    {
        sum += main[i];
        if(max<main[i])
            max=main[i];
        if(min>main[i])
            min=main[i];
    }
    printf("총 합: %d\n최솟값:%d\n최댓값: %d\n", sum, min, max);
    return 0;
}