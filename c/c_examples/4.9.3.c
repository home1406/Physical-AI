/*포인터 변수로 배열의 주소를 가리킴: ptr_array.c */
#include <stdio.h>

int main(void) {
int* p_num;
int count;
int array[] = { 1, 2, 3, 4, 5 };
p_num = &array[0];
for (count = 0; count < 5; count++) {
    printf("array[%d] = %d\n", count, *p_num);
    p_num++;
}
return 0;
};