#include <stdio.h>
void DesSort(int ary[], int len);

int main (void)
{
    int i;
    int arr[7];
    for(i=0; i<7; i++)
    {
        printf("입력: ");
        scanf("%d", &arr[i]);
    }
    DesSort(arr, 7);
    for(i=0; i<7; i++)
        printf("%d ", arr[i]);
    return 0;
}

void DesSort(int ary[], int len)
{
    int i, k, temp;
    for(i=0; i<6; i++)
    {
        for(k=0; k<6; k++)
        {
            if(ary[k]>ary[k+1])
            {
                temp = ary[k];
                ary[k] = ary[k+1];
                ary[k+1] = temp;
            }
        }
    }
}