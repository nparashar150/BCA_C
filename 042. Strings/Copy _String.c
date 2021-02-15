#include <stdio.h>
void main ()
{
    char a[100],b[100];
    int i,j;
    printf("Enter the String : ");
    gets(a);
    while (a[i] != '\0'){i++;}
    for (j=0;j<=i;j++)
    {b[j]=a[j];}
    printf("Copy of the String : ");
    puts(b);
}
