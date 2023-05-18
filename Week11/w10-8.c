// 81p  싸인함수 그래프 90도 회전(우측으로)해서 그리기

#include <stdio.h>
#include <math.h>
#define PI 3.141592   // 파이값 저장 

double rad(double degree)
{
    return PI * degree / 180.0;            // 도 단위를 라디안으로 바꾼다
}

void drawbar(int height)                              // void() <-- 리턴값이 없는 함수
{
    for (int i = 0;  i < height; i++)            // for문을 이용해서 그래프를 그리기 위해
    {                                            // *를 출력한다.
        printf("*");                             // *의 개수는 y값만큼 출력된다.
    }
    printf("\n");
}

int main(void)
{
    int degree, x, y;   
    
    for(degree = 0; degree <=180 ; degree += 18)            // for문으로 0도부터 180도까지 18도마다 drawbar() 실행
    {
        y = (int)(60 * sin(rad((double) degree)) + 0.5);    
        drawbar(y);                                        // drawbar 실행 height = y
    }
    return 0;
}
/* sin (rad((double)degree)) => rad()함수로 라디안값 구해서  sin(rad)만들고
   출력하고자 하는 sin값이 0~1 이기 때문에(본래 -1~1) 그래프를 그리기 위해, 60을 곱하고 (+0.5 반올림),
   for *출력 반복문을 위해 int를 이용해서 소수점을 자른다.
*/ 
