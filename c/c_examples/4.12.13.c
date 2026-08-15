#include <stdio.h>  
int main(void) {
    int table[3] = {3, 5, 7} ; /*배열*/
    int *ptr;       /*포인터 선언*/ 
    ptr = table;   /*포인터에 의한 배열 참조*/
    printf("table[0]=%d\n", *ptr); /*배열 table의 처음 원소*/
    printf("table[1]=%d\n", *(ptr+1));/*배열 table의 두번째 원소*/
    printf("table[2]=%d\n", *(ptr+2));/*배열 table의 세번째 원소*/
}