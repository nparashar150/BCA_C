#include <stdio.h>
#define BLACK "\e[40m"
#define RESET "\e[0m"
int main()
{
    printf(BLACK"Welcome to the Program.\n");
    printf(BLACK"Check wheather the Number is Odd or Even.\n");
    printf(BLACK"Enter the Number : ");
    int a ;
    scanf("%d", &a);
    if (a%2 == 0) {
        printf(BLACK"The Number : %d is Even."RESET, a);
    }
    else {
        printf(BLACK"The Number : %d is Odd."RESET, a);
    }

}
