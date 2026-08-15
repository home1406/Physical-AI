   /* 1씩 증가하다가, 합을구하고 11이 넘으면 빠져나감 return.c */
#include <stdio.h>
int main(void) {
    int d = 0;
    int sum = 0;
    while (1) { /*무한 루프 시작 */
        printf("d=%d,sum=%d\n", d,sum);
        d = d + 1;
        sum = sum + d;
        if (d>11) break;
    }
return 0;
    }