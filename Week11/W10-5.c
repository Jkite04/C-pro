#include <stdlib.h>
#include <stdio.h>


int main(void) 
{
    system("dir");
    printf("아무 키나 치세요\n");
    _getch();
    system("cls");
    return 0;
}


// system 함수로, dos 명령어인 dir이나 cls, 등등 을 실행 할 수 있다.