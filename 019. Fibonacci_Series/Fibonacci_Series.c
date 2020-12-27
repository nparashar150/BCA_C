#include <stdio.h>
#define BLACK "\e[40m"
#define RESET "\e[0m"
int main ()
{
    printf(BLACK"Welcome to the Program.\n"RESET);
    printf(BLACK"Enter the Term till you want to print Fibonacci Sequence : "RESET);
    int a, num = 1, add, add2;
    int b =  0;
    int c = 1;
    scanf("%d", &a);
    for (add = 1; add <= a; ++add) {
        printf(BLACK" %d \n "RESET, b);
        add2 = b + c;
        b = c;
        c = add2;
    }
}
