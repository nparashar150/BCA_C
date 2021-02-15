#include <stdio.h>
void main ()
{
    char a[10],b[10];
    int i,j;
    printf("Enter the String : ");
    gets(a);
    printf("Enter Another String : ");
    gets(b);
    for (i=0;b[i]!='\0';i++){
        if (a[i]!=b[i]){
            printf("Strings are Different.");
            exit(0);
        }
    }
    printf("Strings Matched.");
}
