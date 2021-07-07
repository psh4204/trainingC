#include <stdio.h> // <>는 스탠다드
#include "myFunc.h" //""는 내가만든것_ 사실 <>써도 됨

#define TEST8

#ifdef TEST1
/*
 * 키워드 : scanf(), 0x, %0숫자x, 삼항연산자, 비트연산, 우선순위
 * 내용 : 우리가 입력한 숫자를 16진수로 보여주는 동시에 맞는값인지 확인한다.
 */
int main()
{
    unsigned char val;                              // unsigned int val; 절대값
    int i;
    
    printf("Prog Start\n");
    
    while(1){
        printf("Input value:");
        scanf("%d", (int*)&val);                    // scanf("%d", &val);
        if(val == 0) break;
        printf("0x%02x : 0b", val);                 // %02x 앞자리가 없으면 0으로 채워라.
        for(i= 0; i<8; i++){
            printf("%d", ( val & 0x80 >> i ) ? 1:0); // 우선순위 1. >> 2. &
                                                    // 우리가 넣은값 한번더 확인하는 코드였음!
        }
        
        printf("\n");
    }
    
    printf("Prog Exit\n");
    
    return 0;
}

#endif

#ifdef TEST2
/*
 * 키워드 : if, else if, else
 * 내용 : if 문을 이용하여 알맞은 숫자를 출력한다.
 */
int main(int argc, char **argv)
{
    int val;
    
    while(1){
        printf("input value : ");
        scanf("%d", &val);
        printf("output value -> ");
        if((100 <= val)&& (val <=200))
            printf("1 \n");
        else if(val < 100)
            printf("2 \n");
        else if(val >200)
            printf("3 \n");
        
        if(val == 0)
            break;
            
    }
    
    return 0;
}
#endif

#ifdef TEST3
/*
 * 키워드 : 함수, 선행처리기(메크로)
 * 내용 : 함수를 이용하여 프로그래밍을 해보자
 */
void gg_func(int a, int b){
    printf("gg_func : %d x %d = %d \n",a,b,a*b);
}

int main(int argc, char **argv)
{
    gg_func(3,4);
    gg_func(9,10);
    return 0;
}
#endif


#ifdef TEST4
/*
 * 키워드 : 배열(array[]), sizeof(), double-> %f
 * 내용 : 배열을 통해 프로그래밍 해보자. 배열의 크기도 확인하자
 */
int main()
{
    int students, s, sum=0;
    int score[] = {85, 90, 95, 70, 82, 68, 92};
    
    students = sizeof(score)/sizeof(int);
    printf("%d %d\n", sizeof(score), sizeof(int));
    
    for(s = 0;  s<students ; s++){
        sum += score[s];
    }
    printf("Total = %d\n", sum);
    printf("Average = %f\n", (double)sum/students); 
    
    return 0;
    
}

#endif


#ifdef TEST5
/*
 * 키워드 : 포인터 *
 * 내용 : 포인터 변수는 주소 값만 저장한다.
 */
int main()
{
    unsigned int a; // 4바이트 ( 8글자 )
    char * ptr; // 1바이트( 2글자 )
    
    a= 0x12345678; // 4바이트 ( 8글자 ) 
    
    printf("0x12345678 in a \t : %08x\n",a);
    
    ptr = (unsigned char*)&a; // 타입캐스팅 ptr이 char*여서 a를 char*형으로 바꿈
    
    *ptr = 0xff; // 1바이트 (뒤에 2 글자) *ptr 로 값을 넘겨줬기 때문에 뒤에 두글자만 (1바이트) 바뀜.
    
    printf("0xff in *ptr \t\t : %08x\n", (unsigned char)*ptr); //(unsigned 처리또한 매우 중요함. 10이상 넘어가면 마이너스 취급 함.)
    printf("0xff in a \t\t : %08x\n", a); //(뒤에 두글자마만 바뀌게 되고, 앞의값은 쓰레기값으로 채워진다.)
    
    return 0;
    
}
#endif


#ifdef TEST6
/*
 * 키워드 : stuct, typedef, pragma pack
 * 내용 : 구조체, 구조체 Alignment
*/

#pragma pack(push, 2) //이 구조체의 변수의 시작크기는 n이 된다.
typedef struct _point{
    char x;  //x좌표
    char a;
    char b;
    int y;  //y좌표
}Point_a;
#pragma(pop) // 이구조체는 여기까지.

#pragma pack(push, 2) //이 구조체의 변수의 시작크기는 n이 된다.
typedef struct _point2{
    char x;  //x좌표
    char a;
    int y;  //y좌표
    char b;
}Point_b;
#pragma(pop) // 이구조체는 여기까지.

int main()
{
    int i;
    Point_a pt[3] = {
        {10,1,1,20}, 
        {30,1,1,40},
        {50,1,1,60}};
    Point_b pt2[3] = {
        {10,1,1,20}, 
        {30,1,1,40},
        {50,1,1,60}};
    
    for(i=0;i<3;i++){
        printf("%d Point_a\t: {%d,%d},\tsizeof\t: %d %d\t{%d,%d}\n", i+1, pt[i].x, pt[i].y, sizeof(pt), sizeof(pt[i]),sizeof(pt[i].x),sizeof(pt[i].y));
    }
    printf(">> SIZE %d\n\n", sizeof(pt));
    
    for(i=0;i<3;i++){
        printf("%d Point_b\t: {%d,%d},\tsizeof\t: %d %d\t{%d,%d}\n", i+1, pt2[i].x, pt2[i].y, sizeof(pt2), sizeof(pt2[i]),sizeof(pt2[i].x),sizeof(pt2[i].y));
    }
    printf(">> SIZE %d\n\n", sizeof(pt2));
    
    return 0;
 }
 
#endif


#ifdef TEST7
/*
 * 키워드 : struct, ->
 * 내용 : 구조체를 멤버변수로 사용
*/

typedef struct Point{
    int x;
    int y;
}Point_t;
typedef struct Circle {
    Point_t center;  //중심의 좌표
    double radius;
}Circle_t;

int main()
{
    Circle_t c1 = {{10,10},5.0};
    Point_t *pC;
    
    pC = &c1.center;// 타입캐스팅 불 필요
    
    printf("Circle Center Point\t: {%d, %d}\n", c1.center.x, c1.center.y);
    // printf("Circle Center Point\t: {%d, %d}\n", (*pC).x, (*pC).y);
    printf("Circle Center Point\t: {%d, %d}\n", pC->x, pC->y); // (*a).b = a->b
    printf("Circle radius\t\t: %f\n\n", c1.radius);
    
    return 0;
}

#endif


#ifdef TEST8
/*
 * 키워드 : 전역변수, 지역변수, static, extern, 헤더파일
 * 내용 : static 변수는 프로그램의 시작과 끝을 함께하는 변수이다. 
*/
/*
int a = 0; // 전역변수 

void func(void)
{
    //int a = 2;// 지역변수 : 이 함수내에서만 살아있음.
    static int a = 2; // static 변수 : 프로그램이 꺼질때 까지 살아있음.
    a++;
    
    printf("(local) : %d\n",a);
}
*/


//extern int a; // extern뜻 밖에 있을거야 !! 라는 뜻 
//void func(void); // 함수는 extern 이 자동으로 됨.

int main()
{
    int i;
    
    for(i=0; i<10;i++)
    {
        func();
    }
    
    printf("\n\n[local] : %d\n",a);
    
    return 0;
}

#endif