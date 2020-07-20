#include <stdio.h>
int main(void)
{
    char str[50];
    int i;
    printf("영단어를 입력하세요: ");
    scanf("%s", str);
    for(i=0;i<50; i++)
        if(str[i]='\0')
            return=printf("영단어의 길이는: %d", i);
            
    return 0;
    
}