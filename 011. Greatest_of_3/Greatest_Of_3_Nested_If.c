#include <stdio.h>
#define BOLDGREY"\e[1;30m"
#define RESET "\x31b[0m"
int main()
{
    printf(BOLDGREY"\t\t\t  Welcome to the Program.\n\n"RESET);
    int a, b, c;
    printf(BOLDGREY"\t\t\tEnter the First Number    :  "RESET);
    scanf("%d", &a);
    printf(BOLDGREY"\n\t\t\tEnter the Second Number   :  "RESET);
    scanf("%d", &b);
    printf(BOLDGREY"\n\t\t\tEnter the Third Number    :  "RESET);
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf(BOLDGREY"\n\t\t\t %d is Greatest Number."RESET, a);
        }
        else
        {
            printf(BOLDGREY"\n\t\t\t %d is Greatest Number."RESET, c);
        }
    }
    else if (b > c)
        {
            printf(BOLDGREY"\n\t\t\t %d is Greatest Number."RESET, b);
        }
    else
        {
            printf(BOLDGREY"\n\t\t\t %d is Greatest Number."RESET, c);
        }
    return 0;
}
