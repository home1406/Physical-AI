/*ASCII 코드 출력 프로그램 : ascii.c */
#include <stdio.h>
int main(void) {
   int n;
   for (n = 1; n < 256; n++)
      printf("%3d = %c \t", n, n);
return 0;
}