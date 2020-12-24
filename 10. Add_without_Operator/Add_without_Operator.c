#include <stdio.h>
#define YELLOW "\x31b[33m"
#define RESET "\x31b[0m"
int main ()
{
    printf(YELLOW"Welcome to the Program.\n"RESET);
    printf(YELLOW"Addition of two numbers without Operator \"+\"\n"RESET);
    float a , b , c;
    printf(YELLOW"Enter the First Number :"RESET);
    scanf("%f", &a);
    printf(YELLOW"Enter the Second Number :"RESET);
    scanf("%f", &b);
    c = a - -(b);
    printf(YELLOW"Adding both of them we get : %.2f"RESET, c);

}
