#include <stdio.h>  
int main(void) {
    char ch ='b';
    switch (ch) {  /*ch는 문자임*/
    case 'a':
        printf("a를 누름\n");
        break;
    case 'b':
        printf("b를 누름\n");
        break;
    default:
        printf("a나 b를 안누름\n");
        break;
    }
}