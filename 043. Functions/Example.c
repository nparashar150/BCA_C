#include <stdio.h>
void main ()
{
    int a,b;
    printf("Enter two Numbers : ");
    scanf("%d %d",&a,&b);
    printf("Add : %d\n",add(a,b));
    printf("Mult: %d\n",mult(a,b));
    printf("Final : %d\n",add(add(a,b),mult(a,b)));
}
int add(int a, int b)
{
    return (a+b);
}
int mult(int a, int b)
{
    return (a*b);
}
