/*배열을 이용하여1,2,...10을 저장하고 더하는함수: sum_array.c */
#include <stdio.h>
int main(void) {
    int n = 0; int sum = 0; int array[11];
    for (n = 0; n < 11; n++) {
        array[n] = n;
        sum += array[n];
    }
    printf("1+2+...10 = %d\n", sum);
    return 0;
}