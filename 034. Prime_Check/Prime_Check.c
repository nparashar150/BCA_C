#include <stdio.h>
int main (void)
{
    int a,m=0;
    printf("Welcome to the Program.\n");
    scanf("%d", &a);
    for( m = (6 * a) + 1 ;)
    {
        m = (6 * a) + 1;
    }
    if ( m == a) {printf("Prime Number");}
    else {printf("Composite Number");}
}
