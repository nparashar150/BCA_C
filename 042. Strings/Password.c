#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,temp,upper,spl,plength,ch;
    char p[50],a[20],b[20],c[40];

    restart:   //if wrong password validation entered we return to this point
    upper=0;
    spl=0;
    printf("Enter A String First (Password) :\n");

    for(i=0;i<=49;i++)
    {
        p[i]=getch();

        if(p[i]==13)   //13 is ascii for enter key
            break;

        printf("*");
    }


     for(i=0;p[i]!='\0';i++)
     {
         if(p[i]>=65 && p[i]<=90)//Upper Cases Ascii
            upper++;

         if((p[i]>=32 && p[i]<=47) || (p[i]>=58 && p[i]<=64) || (p[i]>=91 && p[i]<=96) || (p[i]>=123 && p[i]<=126)) //Ascii of all special characters
            spl++;
     }
     plength=i-1;

     if((plength<7) || (upper==0) || (spl==0))
        goto restart;

     printf("\nValid String Entered....\nWhat would you like to perform ?\n");
}
