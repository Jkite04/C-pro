#define _CRT_SECURE_NO_WARNINGS   //scanf 오류 방지용
#include <stdio.h>
#include <math.h>

int main(void) {

    double height, distance, tree_height, degrees, radians;

    printf("나무와의 길이(단위는 미터):");        // distance, 거리 입력
    scanf("%lf", &distance);

    printf("측정자의 키(단위는 미터):");         // height, 측정자의 키 입력
    scnaf("%lf", &height);

    printf("각도는(단위는 도):");               // 나무와 측정자간의 각도 입력
    scanf("%lf", &degrees);

    radians = degrees * (3.141592 / 180);            //  입력받은 각도를 라디안값으로 바꾸기 위해 pi/180을 곱해준다 
    tree_height = tan(radians) * distance + height;  

    printf("나무의 높이(단위는 미터): %lf", tree_height);   // 나무의 높이 출력

    return 0;
} 
/*  tan(a) = 높이/밑변 으로 밑변인 distance를 곱해준다면 높이를 구할 수 있다.
    측정자의 키부터 tan(radians) * distance 를 더해주면 총 나무의 길이를 알 수 있다.
    ++
    계산할 때 단위를 신경 쓰지 않기 위해서 각도를 라디안으로 바꿔준다.

                               /|                 
                            /   |
                        /       |
                    /           |
                /               |   나무 전체 길이
            /                   |
        /                       |
    /a__________________________|    
    |                           |
    |                           |  키
    |___________________________|   
            나무와의 거리
*/