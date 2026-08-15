#include <stdio.h>
void fun1(void); /*함수의 원형 선언)*/
int main(void) { /*또는 int main(void) */
    printf("main 프로그램\n"); 
    fun1(); 
}
void fun1(void)  /*함수 정의 */
{
    printf("함수\n"); /*함수의 몸체*/
}