#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t start, end;            // 변수
    start = time(NULL);           // 몇초가 흐르는지 경과된 시간(초/단위)를 start값으로 
    
    printf("10초가 되면 아무 키나 누르세요\n");
    
    while (1)  {                   // while문  , 무조건 참(실행)
        if (getchar())             // getchar()로 아무키나 누르고 엔터를 누르면 실행됨.
          break;                   // if문 실행시 break;으로   while문 종료
    }                                

    printf("종료되었습니다.\n");    // 종료시 end값으로 x값을 만들어      
    end = time(NULL);              //  end - start로 경과 시간(초)를 계산하게 만듬
    printf("경과된 시간은 %ld 초 입니다. \n", end - start); // 몇초 지낫었는지 출력

    return 0;
}

/* 시작 시간이 1970년부터기 때문에 end값에도 time(NULL)을 넣어  
"start(x + 경과시간) - end(x)" 를 계산하게 만든다. */