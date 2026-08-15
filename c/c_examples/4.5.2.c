    /*  Yes, No를 출력 : yes_no.c */ 
#include <stdio.h>
int main(void) {
    while (1) {
        char ch;
        ch ='y';  //또는 ch = ‘n’
        if (ch == 'y')
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}