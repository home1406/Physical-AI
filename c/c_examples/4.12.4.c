#include <stdio.h>
int sum(int, int);  /*함수 원형)*/
int main(void) {
   int x = 2, y = 3;
   printf("x와 y의 합은 %d\n", sum(x, y)); /*함수호출*/
}
int sum(int xf, int yf) { /*인자를 가진 함수 정의*/
   return xf + yf; /*인자의 합값 반환*/
}