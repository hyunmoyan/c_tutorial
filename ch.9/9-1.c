#include <stdio.h>

int Big(int,int,int);
int main(void)
{
    int num1, num2, num3;
    printf("세 개의 정수 입력");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("큰 정수: %d\n", Big(num1, num2, num3));
    printf("작은 정수: %d\n", Small(num1, num2, num3));
    return 0;
}

int Big(int num1, int num2, int num3)
{
    if(num1<num2<num3)
        return num3;
    if(num1<num3<num2)
        return num2;
    if(num2<num1<num3)
        return num3;
    if(num2<num3<num1)
        return num1;
    if(num3<num1<num2)
        return num2;
    if(num3<num2<num1)
        return num1;

}
int Small(int num1, int num2, int num3)
{
    if(num1<num2<num3)
        return num1;
    if(num1<num3<num2)
        return num1;
    if(num2<num1<num3)
        return num2;
    if(num2<num3<num1)
        return num2;
    if(num3<num1<num2)
        return num3;
    if(num3<num2<num1)
        return num3;

}