#include <stdio.h>
int main ()
{
    int base, power=1, i,exp;
    printf("Enter the Base : ");
    scanf("%d", &base);
    printf("\nEnter the Power : ");
    scanf("%d", &exp);
    for(i = 1; i <= exp; i++) {power = power * base;}printf("\n%d", power);
}
// here we input base and exp power
// then we assign i = 1 and loop it till it  is = exp i.e. power req
// then we multiply base by power which is 1 so that in further loops it multiplies by base*base till required
// then we print power
