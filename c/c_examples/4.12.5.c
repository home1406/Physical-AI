#include <stdio.h>
int main(void) {
  for(int j= 0; j<5; j++) /*단문 루프, 중괄호 생략가능*/
   printf("%d\n",j);

   for(int i= 5; i<10; i++) { /*복문 루프, 중괄호*/
    printf("%d\n",i*2);
    printf("%d\n",i*3);    
   }
}