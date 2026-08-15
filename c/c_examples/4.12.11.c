#include <stdio.h>  
int main(void) {
   int n = 2;
   switch(n) {  /*n은 정수*/
     case 1:
          printf("1임\n");
          break;    
     case 2:
          printf("2임\n");
          break;
     default:
          printf("1 또는 2가 아님\n");
          break;
     } 
}