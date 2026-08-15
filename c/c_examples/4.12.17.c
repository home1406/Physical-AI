#include <stdio.h>
int main(void) {

struct employee{
    int empno;
    float salary;
    const char *name;
};
   struct employee clerks, *ptr_clerks;
   clerks.empno = 100;
   clerks.salary = 123.123;
   clerks.name = "Mr. Clerks";
   printf("%d %f %s \n",clerks.empno,clerks.salary, clerks.name);
  
   ptr_clerks  = &clerks;
   ptr_clerks->empno = 200;
   clerks.salary = 456.456;
   clerks.name = "Mr. Clerks";
   ptr_clerks->name = "Mr. Kenedy";

   printf("%d %f %s \n",clerks.empno,clerks.salary, clerks.name);
   printf("%d %f %s \n",ptr_clerks->empno,ptr_clerks->salary, ptr_clerks->name);
}