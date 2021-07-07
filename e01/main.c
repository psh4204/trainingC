#include <stdio.h>

int main()
{
    unsigned char val;                              // unsigned int val;
    int i;
    
    printf("Prog Start\n");
    
    while(1){
        printf("Input vlaue:");
        scanf("%d", (int*)&val);                    // scanf("%d", &val);
        if(val == 0) break;
        printf("0x%02x : 0b", val);                 // %02x 앞자리가 없으면 0으로 채워라.
        for(i= 0; i<8; i++){
            printf("%d", (val & 0x80 >> i ) ? 1:0); // 우선순위 1. >> 2. &
                                                    // 우리가 넣은값 한번더 확인하는 코드였음!
        }
        
        printf("\n");
    }
    
    printf("Prog Exit\n");
    
    return 0;
}

