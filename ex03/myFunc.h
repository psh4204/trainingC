#ifndef __MYFUNC_H //__MYFUNC_H가 선언되지 않았다면 ? 아래꺼 실행 --> 헤더파일 꼬임 방지
#define __MYFUNC_H

#ifdef __cplusplus // 네임 맹글링 : C++에서 C코드를 C코드로 쓸수있게 하는 것 {
extern "C" {
#endif // __cplusplus

void func();
double add(double, double);
double sub(double a1, double a2);
double div(double a1, double a2);
double multiply(double a1, double a2);

#ifdef __cplusplus // 네임 맹글링 : C++에서 C코드를 C코드로 쓸수있게 하는 것 }
}
#endif // __cplusplus

#endif // __MYFUNC_H