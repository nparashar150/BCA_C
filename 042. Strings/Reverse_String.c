#include <stdio.h>
void main ()
{
    char a[10],b[10];
    int i,j,flag=0;
    printf("Enter any String : ");
    gets(a);
    for (i=0;a[i] != '\0'; i++);
    for (j=0,i=i-1;i>=0;i--,j++)
    {b[j]=a[i];}
    b[j]='\0';
    printf("Original String is : %s\n",a);
    printf("Reverse String is : %s",b);
}
