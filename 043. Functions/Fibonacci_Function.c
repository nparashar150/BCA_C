#include <stdio.h>
void fibo(int);
void main ()
{
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    fibo(a);
    return (0);
}
void fibo(int a)
{
    int num = 1, add, add2;
    int b = 0;
    int c = 1;
    for (add = 1; add <= a; ++add) {
        printf(" %d \n ", b);
        add2 = b + c;
        b = c;
        c = add2;
    }
    printf("%3d",b);
}
