#include <stdio.h>
void fact(int);
void main ()
{
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    fact(a);
    return (0);
}
void fact(int a)
{
    int b=1,c;
    for (int c = 1; c <= a; ++c)
    {
        b*=c;
    }
    printf("%d is the Factorial.",b);
}


