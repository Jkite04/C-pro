double result, value = 1.6;

result = floor(value); / result는 1.0이다.              //  소수점 자리 아래 무시
printf("%lf ", result);

result = ceil(value); / result는 2.0이다.               //  소수점 자리 올림
printf("%lf ", result);                                 // ++ round()는 반올림함수


printf("12.0의 절대값은 %f\n", fabs(12.0));            //  fabs()는 실수를 받아서 절대값 반환
printf("-12.0의 절대값은 %f\n", fabs(-12.0));     

printf("10의 3승은 %.0f.\n", pow(10.0, 3.0));          // pow , 10의 3승
printf("16의 제곱근은 %.0f.\n", sqrt(16));             // sqrt , 제곱근 표시   음수일 경우 에러로  0 리턴

// ** 교안에  "16의 제곱근은 4" 인데 printf에는 sqrt(64)라 표기되있어서 
//    잘못알고 있는걸 수도 있지만 sqrt(16)이 맞는거 같아 바꿔써놨습니다.