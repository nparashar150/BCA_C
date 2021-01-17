#include <stdio.h>
int main ()
{
    int i=0;
    printf("Welcome to the Program.");
    printf("\nPrinting the Pattern for you.\n");
    for(i=1;i<=5;i++)
    {
    printf("%d\t",i*i-1);
    }
}

/* Here we define the var i for example the value of i is 3 square of 3 is 9 and -1 is 8.
Therefore, it prints the pattern till the value of i is satisfied in the loop */
