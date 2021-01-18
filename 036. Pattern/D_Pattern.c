#include<stdio.h>
int main()
{
    for(int i=5;i>0;i--)
        {
        char c=97;
         for(int k=5;k>i;k--)
        {
            printf(" ");
        }
        for(int j=i;j>0;j--)
        { if(c=='a')
        {
        printf("%c",c-32);
        }
        else
        printf("%c",c);
        c++;
        }
        printf("\n");}
}
