#include <stdio.h>

int main(void)
{
    int x=0, y=0;
    
    while (x<5)
    {       
        while (x>y)
        {
            printf("o");
            y++;
        }
        printf("*\n");
        x++;
        y=0;
    }
    return 0;
}