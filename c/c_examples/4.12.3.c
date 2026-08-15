#include <stdio.h>
int always7(void);
int main(void) { /*또는 int main(void) */
    printf("반환값은 %d\n", always7());
}
int always7(void) {
    return 7;
}