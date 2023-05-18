#include <stdio.h>
#include <sidlib.h>   // 유틸리티 함수 라이브러리 헤더  - rand() , srand()
#include <time.h>    // 시간, 날짜 관련 헤더

int coin_toss(void);  // 메인 함수 아래에 다른 함수를 만들때 메인 위에 작성해줘야 한다.

int main(void) {

    int toss;                  // (토스 , 앞면 , 뒷면) 횟수
    int heads = 0;
    int tails = 0;
    srand((unsigned)time(NULL));  // 매번 시드를 변경해주는 난수 생성을 위한 내용

    for(toss=0; toss<100; toss++) {  // 코인토스 100회 실행하는 for문
        if (coin_toss() == 1)
          heads++;                  // coin_toss()가 1이면 앞면의 횟수 증가
        else                        // 0이면 뒷면의 횟수 증가
          tails++;
    }
    printf("동전의 앞면: %d \n", heads);        
    printf("동전의 뒷면: %d \n", tails);        // 100회 실행이 끝난 후 각각의 횟수 출력
    return 0;
}

int coin_toss(void) {                       
    int head = rand() % 2;           //  rand() 난수 생성 후 %2를 통해 0 또는 1을 변수값으로 반환
    return head;                      // 반환값을 if문의 coin_toss()에 대입
}