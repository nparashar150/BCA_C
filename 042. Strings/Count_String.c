#include <stdio.h>
void main ()
{
    int i;
    char a[100];
    printf("Enter the String : ");
    gets(a);
    while (a[i]!='\0')
    {i++;}
    printf("Legnth of the String : %d",i);
}
