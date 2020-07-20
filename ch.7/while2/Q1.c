#include <stdio.h>
int main(void)
{
    int x=5, y, z;

    while (x>0)
    {
        printf("정수를 입력해주세요: ");
        scanf("%d", &y);
        while (y<1)
        {
            printf("정수를 입력해주세요: ");
            scanf("%d", &y);
        }
        z += y;
        x--;
    }
    printf("총 합은: %d\n", z);
    return 0;   
}