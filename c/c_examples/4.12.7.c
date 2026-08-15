#include <stdio.h>
int main(void) {
  int n = 0;
   do {  /*복문 do-while, 중괄호*/
       printf("n< 10가 참일 때 프린트 n = %d\n", n); 
       n++;       /* n = n + 1*/
    } while (n<10);
}