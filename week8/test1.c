/*
** 기억이 안날 때나, 헷갈릴 때 마다 참고할 메모장 **

1.용어들에 대한 정의의 이해가 필요하다.
예를 들어 
 산술 연산자(+ - * % /)와 대입 연산자(=)를 구분할 줄 아는 것
 =(중간고사 2번)

#define _CRT_SECURE_NO_WARNINGS
scanf 오류가 뜰 때 사용하는 전처리기이다.

#include <stdio.h> = 전처리기
stdio.h를 포함한다는 의미이다.

변수와 형식, 형식 지정자
int - 정수 - %d
float - 실수 - %f
double - 큰 실수 - %lf
char - 문자 - %c
string - 문자열 - %s

변수의 초기화
num1, num2 = 2;
변수의 초기값을 설정하는 단계이다.
num1은 2가 아니며, 쓰레기값이나 0이 들어간다.
(중간고사 3번)

변수 선언의 규칙
1. 대문자와 소문자를 구분하며 
첫글자를 대문자로 쓰거나 띄어쓰기는 _를 이용한다.
2. 숫자로 시작할 수 없다.
3. 기본 키워드와 똑같은 이름은 사용이 불가능하다.
4. 공백이 존재해선 안된다.
(중간고사 1번)
*/



/*
4year.c

윤년 조건식 작성하기
1.연도가 4로 나누어 떨어져야 한다.
2.100으로 나누어 떨어지는 연도는 제외한다.
3.400으로 나누어 떨어지는 연도는 윤년이다.

=> 나누어 떨어지다 == 0
=> 제외한다       != 0 
4로 나누어 떨어지면서 100으로는 나누어 떨어지면 안된다.
=> (==0) && (!=0)
4로 나뉘면서 100은 안되거나, 400으로 나누어 떨어지면 된다.
[(%4==0)&&(%100!=0)] || (%400==0)
&&= 모두 고려 , || = 하나만 계산
결과
result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

||은 앞에 식이 참이면 뒷 식을 계산하지 않고 바로 참으로 넘어간다.
=> 중간고사 문제 중 i 계산을 ||로 인하여 넘어감. 
*/


중간고사
1. 기본 개념
2. 연산자 종류 이해
3. 조건문과 반복문

