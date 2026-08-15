#include <stdio.h>
int main(void) {
   int x  = 10;
   if(x > 9) printf("x는 9보다 큼\n");  /*단문 if*/
   if(x < 11) { /*복문 if*/
        printf("x는 9보다 크고, ");
        printf("x는 11보다 작음\n"); 
   }
   if( x > 9) {  
        if(x <11) { /* 중첩 if문 */
           printf("x는 9보다 크고 11보다 작음\n"); 
        }
   }
}