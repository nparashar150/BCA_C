#include <stdio.h>
#define BLUE "\x31b[34m"
#define RESET "\x31b[0m"
int main()
{
    printf(BLUE"Welcome to the Program.\n"RESET);
    printf(BLUE"Program to Display & Calculate sum of First 10 Natural Numbers.\n"RESET);
    int a = 0;
    for ( a = 0; a <= 10; ++a)
    {
        printf(BLUE"\nNumbers are : %d"RESET, a);
    }
    int sum , b;
    for (b = 1; b < 11; b++)
    {
    sum = sum + b;
    }

    printf(BLUE"\n\nThe Sum of First 10 Numbers is : %d "RESET, sum);
    return 0;
}
