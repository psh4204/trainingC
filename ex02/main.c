#include <stdio.h>

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
