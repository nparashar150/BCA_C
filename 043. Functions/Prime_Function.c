#include <stdio.h>
void prime(int a);
void main ()
{
    int a;
    printf("Enter the Number : ");
    scanf("%d",&a);
    prime(a);
    return (0);
}
void prime(int a)
{
    int b,c,flag=0;
    b=a/2;
    for (c=2;c<=b;c++)
    if (a%c==0){flag++;}
    if (flag==0) {printf("Number is Prime.");}
    else {printf("Number is not Prime.");}
}
