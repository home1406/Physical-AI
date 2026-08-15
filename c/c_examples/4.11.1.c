/* Problem1.c */
#include <stdio.h>
int main(void) {
   int num1 = 10, num2 = 3;
   if(num1 > num2) {
       num1 = num2;
       num1 += 10;
       if(num1 > 20) {
          printf("num1 = %d\n", num1);
       } else {
         printf("num2 = %d\n", num2);
       }
   }
return 0;
}