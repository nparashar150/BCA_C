#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
        {
        char c=97;
        for(int k=4;k>i;k--)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
        if(c=='a')
        {
        printf("%c",c-32);
        }
        else
        printf("%c",c);
        c++;
        }
        printf("\n");}
}
/*    for (i=5;i>=1;i--)
    {
        for(j=1;j<i;j++)
            printf(" ");
        for(k=i;k<=5;k++)
            printf("%d",k);
        printf("\n");
    }*/
