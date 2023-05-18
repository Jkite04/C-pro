#include <stdio.h>
#include <math.h>  // 여러 수학 함수들을 포함하는 표준 헤더

int main(void)
{
    double pi= 3.1415926535;  
    double x, y;

    x = pi / 2;

    y = sin(x);                         
    printf("sin(%f) = %f\n", x, y);      // sin(1.570796) = 1.000000

    y = cos(x);
    printf("cos(%f) = %f\n", x, y);      // cos(1.570796) = 0.000000

    return 0;
}



// 중간점검
/*
  1. 90도에서의 싸인값을 계산하는 문장
     x = 90 * pi / 180   ,  y = sin(x);
  2. rand( ) % 10 이 계산하는 값의 범위는?
     0~9 
     rand() % n -> 0부터 n-1까지
*/
