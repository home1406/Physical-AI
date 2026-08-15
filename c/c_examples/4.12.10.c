#include <stdio.h>
#include <conio.h>
int main(void) {
   char ch;
   int count = 0, MAX = 1000;
   while(count!=100)
   {
      count++;
      printf("count= %d\n",count);
      if(count > MAX)
          break;  /*while 루프를 탈출*/
   }
}