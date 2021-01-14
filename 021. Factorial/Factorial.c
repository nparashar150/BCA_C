#include <stdio.h>
#define BOLD "\e[1;30m"
#define RESET "\e[1;0m"
int main()
{
    printf(BOLD"Welcome to the Program.\n"RESET);
    printf(BOLD"Enter the Number you want factorial of : "RESET);
    int a;
    unsigned long long b = 1;
    scanf("%d", &a);
    for (int c = 1; c <= a; ++c)
    {
        b*= c;
    }
    printf(BOLD"\nFactorial of %d is : %llu"RESET,a ,b);
    return 0;
}
