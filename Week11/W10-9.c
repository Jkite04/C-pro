// 85p
#include <stdio.h>
#include <math.h>

int menu (void)                            // main 함수 실행시 menu가 실행되서 
{                                          // 순서를 보여주고 원하는 번호를 고르면 switch문을 통해
    int n;                                 // 해당 번호의 계산을 실행하도록 만든다.
    printf("1.팩토리얼\n");
    printf("2.싸인\n");
    printf("3.로그(base 10)\n");
    printf("4.제곱근\n");                        
    printf("5.순열(nPr)\n");
    printf("6.조합(nCr)\n");
    printf("7.종료\n");
    printf("선택해주세요: ");
    scanf("%d", &n);

    return n;
}

//switch문 속 계산 프로그램들

void factorial()                              //  void() <-- 리턴이 없는 함수 
{                                             
    long long n, result=1, i;                  // 팩토리얼    n!
    printf("정수를 입력하시오:");               // long long , %lld   <-- int 보다 큰 정수를 나타내는 자료형
    scanf("%lld", &n);
    for (i=1; i<=n; i++)
    {
        result = result * i;
    }
    printf("결과 = %lld\n\n", result);
}

void sine()                                      // sin(각도) 계산
{
    double a, result;
    printf("각도를 입력하시오: ");
    scanf("%lf", &a);
    result  = sin(a);
    printf("결과 = %lf\n\n", result);
}

void logBase10()                                // 로그 ,  상용로그로 밑이 10인 로그 log10()
{
    double a, result;
    printf("실수 값을 입력하시오: ");
    scanf("%lf", &a);
    if (a <= 0.0)
    {
        printf("오류\n");
    }
    else 
    {
        result = log10(a);
        printf("결과 = %lf\n\n", result);
    }
}

void Sqrt()                                    // 제곱근
{
    double a, result;
    printf("실수 값을 입력하시오: ");
    scanf("%lf", &a);
    result = sqrt(a);
    printf("%lf의 제곱근은 %lf 입니다.\n", a, result);
}


int main(void)
{
    while (1) {                                   // while문을 사용해서 한번 계산하더라도
        switch (menu()) {                         // 계산기처럼 다음 계산을 진행할 수 있도록 무한반복하게 만듬.
            case 1:                               // 그래서 선택지에 전원버튼처럼 종료를 추가함.
                   factorial();
                   break;
            case 2:
                   sine();
                   break;
            case 3:
                   logBase10();
                   break;
            case 4:
                   Sqrt();
                   break;
            case 5:
                   per();
                   break;
            case 6:
                   Combi();
                   break;
            case 7:
                   printf("종료합니다.\n");
                   return 0;
            default:
                   printf("잘못된 선택입니다.\n");
                   break;
        }
    }
}

// 잘못 만들어서 주석처리...
/*
void per()                                    // 순열 nPr
{
    long long n, i, r, result=1;
    printf("순열값을 입력하세요.(n): ");
    scanf("%lld", &n);
    printf("순열값을 입력하세요.(r): ");
    scanf("%lld", &r);
    for(i=n; i>r; i--)
    {
        result = result * i;
    }
    printf("%lld P %lld는 %lld 입니다.\n", n, r, result);
}

void Combi()                              // 조합 nCr
{
    long long n, i, r, d, result1=1, result2=1, combi;
    printf("조합값을 입력하세요.(n): ");
    scanf("%lld", &n);
    printf("조합값을 입력하세요.(r): ");
    scanf("%lld", &r);
    for(i=n; i>r; i--)
    {
        result1 = result1 * i;
    }
    for (d=1; d<=r; d++)
    {
        result2 = result2 * d;
    }
    combi = result1 / result2;
    printf("%lld C %lld는 %lld 입니다.\n", n, r, combi);
}
*/
