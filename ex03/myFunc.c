#include <stdio.h>

int a = 0; // 전역변수

void func(void)
{
    //int a = 2;// 지역변수 : 이 함수내에서만 살아있음.
    static int a = 2; // static 변수 : 프로그램이 꺼질때 까지 살아있음.
    a++;
    
    printf("(local) : %d\n",a);
}