#include <stdio.h>
#define RED "\x31b[31m"
#define RESET "\x31b[0m"
int main ()
{
    printf(RED"Welcome to the Program.\n"RESET);
    printf(RED"Enter the Number to Print table of : "RESET);
    int a, b;
    scanf("%d", &a);
    printf(RED"\nEnter the Multiple till you want the table to be Printed : "RESET);
    scanf("%d", &b);
    int d;
    for ( int c = 0; c <= b; ++c)
    {
        d = c * a;
        printf(RED"%d   x   %d      =   %d\n"RESET, a, c, d);
    }

}
