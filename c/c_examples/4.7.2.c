/* 두수를 더하는 프로그램 plus.c */
#include <stdio.h>
int plus(int a, int b);
int main(void) {
   int  a, b, c, d;
   a = 200, b = 100, c = 0;
   c = plus(a, b);     /*plus()함수결과를c에저장*/
   printf("%d + %d = %d\n", a, b, c);
                                /* c를 %d(정수형식)으로 출력*/
 return 0;
}
int plus(int a, int b) {
   return a + b;
}