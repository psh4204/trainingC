#include <stdio.h>
#include "myFunc.h"

int a = 0; // 전역변수

void func(void)
{
    //int a = 2;// 지역변수 : 이 함수내에서만 살아있음.
    static int a = 2; // static 변수 : 프로그램이 꺼질때 까지 살아있음.
    a++;
    
    printf("\tfunc()\t: %d\n",a);
}

double add(double a1, double a2)
{
    double res;
    res = a1 + a2;
    return res;
}

double sub(double a1, double a2)
{
    double res;
    res = a1 - a2;
    return res;
}

double div(double a1, double a2)
{
    double res;
    res = a1 * a2;
    return res;
}

double multiply(double a1, double a2)
{
    double res;
    
    if(a2==0) a2 = 0.000000; // 예외처리 철저히..!
    
    res = a1 / a2;
    return res;
}