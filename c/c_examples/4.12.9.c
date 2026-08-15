#include <stdio.h>
int main(void) {
   char ch;
   ch =’b’;
   if(ch == 'a')
      printf("a를 누름\n"); 
   else if (ch=='b')
      printf("b를 누름\n");     
   else 
      printf("a 또는 b를 안 누름\n");       
}
   