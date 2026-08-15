/* 두수를 더하는 프로그램 add2.c */  
  #include <stdio.h>
    int main(void) {
       int a, b, c, d;
       a = 100; b = 200;
       c = a + b;          /* a + b 결과를 c에 저장 */
       d = a - b;          /* a - b 결과를 d에 저장 */
       printf("%d + %d = %d\n", a, b, c);/* c를 %d(정수형식)으로 출력 */
       printf("a - b = %d\n", d);/* d를 %d(정수형식)으로 출력 */
   }