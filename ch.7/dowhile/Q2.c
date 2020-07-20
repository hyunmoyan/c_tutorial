#include <stdio.h>

int main(void)
{
    int total=0, num=2;
    do
    {
        total += num;
        num += 2;
    } while (num<=100);
    printf("총 합: %d\n", total);
    return 0;
    
}