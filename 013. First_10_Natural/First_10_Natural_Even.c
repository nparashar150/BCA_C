#include <stdio.h>
int main()
{
    printf("Welcome to the Program.\n");
    printf("Program to Display & Calculate sum of First 10 Natural Numbers.\n");
    int a;
    for (a = 1; a <= 20; ++a)
    {
        if ( a % 2 == 0){printf("\nEven Numbers are : %d",a);}
    }
    return 0;
}
