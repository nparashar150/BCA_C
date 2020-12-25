#include <stdio.h>
#define YELLOW "\x31b[33m"
#define CYAN "\x31b[36m"
#define RED "\x31b[31m"
#define RESET "\x31b[0m"
int main()
{
    printf(YELLOW"Welcome to the Program.\n"RESET);
    printf(YELLOW"This is a Leap Year Calculator.\n"RESET);
    printf(YELLOW"Enter the Year : "RESET);
    int a;
    scanf("%d", &a);
    if ( a % 4 == 0 || a % 400 == 0 )
    {
        printf(CYAN"\nThe given Year is a Leap Year."RESET);
    }
    else if ( a % 100 == 0 )
    {
        printf(RED"\nThe given Year is not a Leap Year."RESET);
    }
    else
    {

        printf(RED"\nThe given Year is not a Leap Year."RESET);
    }
    return 0;
}
