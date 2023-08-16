#include <stdio.h>

extern int f1(int);
extern int f2(int);

int main()
{
    int a = 5;
   
    printf("Cube of %d is %d\n", a, f1(a));
    printf("Squre of %d * Squre of %d is %d\n", a, a, f2(a));

    return 0;
}