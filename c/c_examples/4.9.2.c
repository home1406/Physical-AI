/*포인터와 주소연산자의 관계를 알아보는 예제: ptr_addr.c */
#include <stdio.h>
int main(void) {
    int num = 10;
    int *p_num;
    p_num = &num;
    printf("num = %d\n", num);
    printf("*p_num = %d\n", *p_num);
    printf("&num = %p\n", (void *)&num);
    printf("p_num = %p\n", (void *)p_num);
return 0;
}