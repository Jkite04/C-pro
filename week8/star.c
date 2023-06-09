#include <stdio.h>
int main(void)
{
    int x, y;
    for(y=1; y<=5; y++)
    {
        for(x=0; x<y; x++)
        {
            printf("*");
        }
        printf("\n");
    }
     return 0;
}

/*
1. [x, y] int로 지정 해주고

2. 하나씩 늘어나는 별이 5번 반복되야 하니까 
   for문을 이용해서 y=1부터 Y++ 증감으로 y<=5 까지 올라가게 하면
   for문 안의 내용이 5번 반복이 된다.
   
3. 그럼 for문 안에 별이 하나씩 늘어나는 식을 작성해야 되니까
   기존 for문 안에 for문을 다시 작성해서
    x=0, x++ 로 똑같이 반복되게 만들고,
    x<y;를 통해서 y보다 더 반복되지 않게 만든다. 
    printf("*")을 5번 반복하는데, 하나씩 늘어나도록.
    
4. \n 이 없으면, 별이 한줄에서 계속 늘어나기에,
   기존 반복용 for문에 printf("\n")를 추가해서,
   별이 한번 실행될때마다 줄내림이 되도록 한다.
   
   
