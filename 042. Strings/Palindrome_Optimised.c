#include <stdio.h>
void main ()
{
    int i,j;
    char a[10];
    printf("Enter the String : ");
    gets(a);
    for (i=0;a[i]!='\0';i++);
    for (j=0,i=i-1;i>
    j;i--,j++)
    {
        if(a[i]!=a[j]){
        printf("\nNot Palindrome.");
        exit(0);
    }}
    printf("\nString is Palindrome.");
}
