#include <stdio.h>
int even(int*ptr);
int odd(int* ptr);

int main(void)
{
    int arr[10];
    int i;
    for(i=0; i<10; i++)
    {
        printf("입력:");
        scanf("%d",&arr[i]);
    }

    even(arr);
    odd(arr);
    return 0;
}

int even(int * ptr)
{
    int i;
    printf("짝수 출력: ");
    for(i=0; i<10; i++)
    {
        if(ptr[i]%2==0)
            printf("%d ", ptr[i]);
    }
        printf("\n");
    return 0;
}

int odd(int* ptr)
{
    int i;
    printf("홀수 출력: ");
    for(i=0; i<10; i++)
        if(ptr[i]%2!=0)
            printf("%d ", ptr[i]);
    printf("\n");
    return 0;
}