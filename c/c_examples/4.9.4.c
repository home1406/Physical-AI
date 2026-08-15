    #include <stdio.h>
    void func(int *px, int* py, int z);
    int main(void) {
       int x = 1, y = 2, z = 3;
       func(&x, &y, z);
       printf("x=%d, y=%d, z=%d\n", x, y, z);
    return 0;
    }
    void func(int *px, int *py, int z) 
    {
         *px = 5;
         *py = 6;
         z = 7;
    } 