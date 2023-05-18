#include <stdio.h>
#include <stdlib.h>   // 유틸리티 함수 헤더
#include <conio.h>    // 콘솔 입출력 함수 헤더  ,  getch()
#include <time.h>     // 시간,날짜 관련 헤더

void disp_car(int car_number, int distance)
{
    int i;

    printf("CAR #%d: ", car_number);    // 차 번호 출력 
    for(i=0; i<distance/10; i++)        // for문,  조건식은  distance(=car1_dist, car2_dist)/10으로,  
    {                                   //         car_dist 난수가 0부터 99까지 범위이기에 distance/10은 0~9의 값을 가짐
        printf("*");                    //         * 출력 반복
    }
    printf("\n");                       // for문이 끝난 후 줄내림
}

int main(void){

    int i;
    int car1_dist=0, car2_dist=0;            // 변수값 초기화

    srand((unsigned)time(NULL));             // 난수 생성을 위한 ,,,,,모르면 외워야되는 문장

    for (i=0; i<6; i++)                      // for문 , 5번 반복
    {
        car1_dist += rand() % 100;           // car1_dist, car2_dist의 난수 생성   , %연산자를 사용하여 범위는 0부터 99까지
        car2_dist += rand() % 100;
        disp_car(1, car1_dist);              // -> (cur_number =1 , distance =car1_dist)
        disp_car(2, car2_dist);              //     disp_car() 함수 실행
        printf("---------------------\n");   //  --- 출력 + 줄내림
        _getch();                            // 키를 입력하면 입력된 키값을 즉시 반환한다 라는 개념인데 / 실행시 어떤 키를 눌러야 다음 for문이 실행된다.
    }
    return 0;
}