#include <stdio.h>
#include <time.h>

#define TEST2

#ifdef TEST1
int main(int argc, char **argv)
{
    time_t current_time;
    time(&current_time);
    
    printf("%ld\n", current_time);
    printf(ctime(&current_time));
    
	return 0;
}

#endif

#ifdef TEST2
/*
문자열의 끝에는 null 이 들어간다. 
 
*/

int main(int argc, char **argv)
{
    char s[100];
    printf("> Please enter text\t: ");
    gets(s);
    
    printf("\t>> Your text\t: ");
    // 문자배열에 저장된 한 행을 출력
    char *p = s;
    while(*p) // 문자열 끝에는 null 값이 들어가기 때문에 활용함.
    {
        printf("%c", *p++); //천재다 .. 
    }
    printf("\n");
    
	return 0;
}

#endif