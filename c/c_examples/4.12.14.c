#include <stdio.h>  
int sumarray(int* ); /*함수의 원형선언*/
int main(void) {
    static int list[] = {1, 2, 3};
    printf("합은 %d", sumarray(list));
}
int sumarray(int *ptr) {
     int sum = 0;
     sum = *ptr + *(ptr+1) + *(ptr+2);
     return sum;
 }