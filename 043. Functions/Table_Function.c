#include <stdio.h>
void table(int);
void main ()
{
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    table(a);
    return (0);
}
void table(int a)
{
    int c,d;
    for (c = 1; c <= 10; ++c)
    {
        printf("%2d   x   %2d      =   %2d\n", a, c, a*c);
    }
}

