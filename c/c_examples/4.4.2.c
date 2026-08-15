/* 1에서 10까지 더하는 프로그램 : add_for.c */
#include <stdio.h>
     int main(void) {
       int count, sum = 0;
          for(count = 1; count < 11; count = count + 1) {
               sum = sum + count;
           }
       printf("1+2+...10 = %d\n", sum);
return 0;
}