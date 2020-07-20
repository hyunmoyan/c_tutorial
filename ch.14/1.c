#include <stdio.h>

int Swap3(int * n1, int *n2, int*n3)
{
    int temp, temp2;
    temp = *n1;
    temp2 = *n2;
    *n1 = *n3;
    *n2 = temp;
    *n3 = temp2;    

}

int main(void)
{
    int num1=10, num2=20, num3=30;
    Swap3(&num1, &num2, &num3);
    printf("%d %d %d\n", num1, num2, num3);
    return 0;
}