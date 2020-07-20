#include <stdio.h>

int main(void)
{
    char arr[50];
    char arr2[50];
    int i=0, j=0;
    printf("영어단어를 입력하세요: ");
    scanf("%s", arr);
    while(arr[i]!='\0')
    {
        i++;
    }
    arr2[i]='\0';
    for(i; i>0; i--)
    {
        arr2[j] = arr[i-1];
        j++;
    }
    
    printf("뒤집힌 문자: %s\n", arr2);
    return 0;
}