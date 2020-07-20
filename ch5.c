#include <stdio.h>

int main(void)
{
    int xpos1, ypos1;
    int xpos2, ypos2;

    printf("좌 상단의 x, y좌표: ");
    scanf("%d %d", &xpos1, &ypos1);
    printf("우 하단의 x, y좌표: ");
    scanf("%d %d",&xpos2, &ypos2);
    printf("두 점이 이루는 직사각형의 넓이는 %d입니다.",(ypos2-ypos1)*(xpos2-xpos1));
    return 0;    
}

// int main(void)
// {
//     double x1, x2;
//     printf("두 개의 실수를 입력하세요: ");
//     scanf("%lf %lf", &x1, &x2);
//     printf("덧셈 %f \n", x1+x2);
//     printf("뺄셈 %f \n", x1-x2);
//     printf("곱셈 %f \n", x1*x2);
//     printf("나눗셈 %f \n", x1/x2);
//     return 0;
// }

// int main(void)
// {
//     int x;
//     printf("정수를 입력하세요: ");
//     scanf("%d", &x);
//     printf("정수의 문자는: %c\n", x);
//     return 0;
// }

// int main(void)
// {
//     char x;
//     printf("문자를 입력하세요: ");
//     scanf("%c",&x);
//     printf("숫자로 변환하면 %d\n", x);
//     return 0;
// }