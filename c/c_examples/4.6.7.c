	 /*증감연산자 예제: inc_dec.c */
     #include <stdio.h>
     int main(void) {
         int num1, num2 = 5, num3 = 5;
         num1 = num2--;
         printf("num1 = %d, num2 = %d\n", num1, num2);
         num1 = -- num3;
         printf("num1 = %d, num3 = %d\n", num1, num3);
     return 0;
     }