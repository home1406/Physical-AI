/*1에서 10까지 while문으로 더하는 프로그램 : add_while.c */
#include <stdio.h>
     int main(void) {
       int count = 1, sum = 0;
          while (count < 11) {
              sum = sum + count;
              count = count + 1; 
          }
       printf("1+2+...10 = %d\n", sum);
return 0;
}