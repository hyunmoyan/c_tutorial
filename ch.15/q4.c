#include <stdio.h>

int main(void)
{
    char str[20];
    int i=0, k=0;
    printf("입력: ");
    scanf("%s", str);
    while(str[k]!=0)
        k++;

    k = k-1;

    for(i=0;i<10;i++)
    {
            if(str[k] == str[i])
            {
                k--;
                if(k<0);
                    printf("회문입니다.\n");
                    break;
            }
            if(str[k] != str[i])
            {
                printf("회문이 아닙니다.\n");
                break;
            }
        
    }
    return 0;
}