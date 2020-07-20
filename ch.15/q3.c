#include <stdio.h>

int main(void)
{
    int arr[10];
    int arr2[10];
    int i, t=0, k=9;
    for(i=0;i<10;i++)
    {
        printf("입력: ");
        scanf("%d", &arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            arr2[t] = arr[i];
            t++;
        }
        else
        {
            arr2[k] = arr[i];
            k--;
        }
    }
    for(i=0;i<10;i++)
        printf("배열요소의 출력: %d\n", arr2[i]);
    return 0;
}