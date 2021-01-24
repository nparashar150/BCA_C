#include <stdio.h>
int main ()
{
    int a,b;
    for (a = 97; a<=101; a++)
    {for(b = 97; b <= a; b++) {printf("%c ",b);}printf("\n");}
}
