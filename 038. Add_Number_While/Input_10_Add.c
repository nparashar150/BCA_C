#include <stdio.h>
int main ()
{
    int a=1,b,c=0;
    printf("Welcome to the Program.");
    while (a<=10)
    {
        a++;
        printf("\nEnter the Number : ");
        scanf("%d", &b);
        c += b;
    }
    printf("\nSum of the Ten Numbers is : %d", c);
}
