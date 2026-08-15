   /* Yes, No를 출력 : yes_no.c */
#include <stdio.h>
int main(void) 
{
        while (1) {
            char ch;
            ch = 'y'; //또는 'n’ 아니면 '/r'
            switch (ch) {
            case 'y':
                printf("Yes\n");
                break;
            case 'n':
                printf("No\n");
                break;
            case '\r':
                printf("Enter\n");
                break;
            default:
                printf("다른 문자입니다");
                break;
            }
            return 0;
        }
    }