/*구조체의 멤버에접근하는두가지방법: struct_mem.c */
#include <stdio.h>
int main(void) {
    struct easy {
        int num;
        char ch;
    };
    struct easy ez;
    struct easy* pt;
    ez.num = 123;
    ez.ch = 'A';
        printf("ez.num = %d, ez.ch = %c\n", ez.num, ez.ch);

    pt = &ez;
    pt->num = 456;
    pt->ch = 'B';
        printf("pt->num = %d, pt->ch = %c\n", pt->num, pt->ch);
    return 0;
}