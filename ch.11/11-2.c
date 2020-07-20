#include <stdio.h>
int main(void)
{
    int i,  arrLen;
    char arr[]={'g','o','o','d',' ','t','i','m','e'};
    printf("%d",arrLen);
    for(i=0; i<arrLen; i++)
        printf("%c", arr[i]);
    printf("\n");
    return 0;
}