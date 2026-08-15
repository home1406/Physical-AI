/* 7의 계승연산 프로그램 factorial.c */
#include <stdio.h>
unsigned int fact(int num);
int main(void) {
   unsigned int ans;
   ans = fact(7);
   printf("factorial of 7 = %d\n", ans);
return 0;
}
unsigned int fact(int num) {
   unsigned int loop_num, ans = 1;
   for(loop_num = 2; loop_num <=num; loop_num++) {
       ans = ans*loop_num;
   }
   return ans;
}