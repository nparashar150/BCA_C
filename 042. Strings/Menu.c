#include <stdio.h>
#include <stdlib.h>
void main ()
{
    int a1;
    printf("Welcome to Menu Driven Program.\n1. Accept a String in Password Form.\n2. Count the number of Characters.\n3. Copy the String.\n4. Reverse the String.\n5. Check for Palindrome.\n6. Concatenate two Strings.\n7. Compare two Strings.\n8. Exit.\n");
    again:
    printf("\n*. Enter your Input : ");
    scanf("%d",&a1);
    switch (a1)
    {
        default :
            {
                printf("Enter a Valid Choice.\n");
                goto again;
            }
    case(1) :
        {
            int a,uppercase=0,specialchar=0,passlegnth=0;
            char pass[100];
            redo:
            printf("Enter password with the following requirements.\n1. Password legnth should be atleast 7 digits.\n2. Password should contain atleast one : \n\t\v Special Character \n\t\v Numerical Digit \n\t\v Capitalised Character.\n3. Enter Passoword : ");
            for (a=0;a<=99;a++)
            {
                pass[a]=getch();
                if (pass[a]==13) {break;} // The code will break when Enter Key is Pressed.
                printf("* ");
            }
            for (a=0;pass[a]!='\0';a++)
            {
                if((pass[a]>66) && (pass[a]<91)) {uppercase++;} // Checking if Capital Char is inputted or not via ASCII
                if(((pass[a]>33) && (pass[a]<48)) || ((pass[a]>59) && (pass[a]<65)) || ((pass[a]>92) && (pass[a]<97)) || ((pass[a]>124) && (pass[a]<127))) {specialchar++;} // Checking if Special Char is inputted via ASCII
            }
            passlegnth = a-1;
            if (passlegnth<7) {printf("\n*. Password must contain atleast 7 characters."); goto redo;}
            else if (uppercase==0) {printf("\n*. Password must contain atleast one Uppercase."); goto redo;}
            else if  (specialchar==0) {printf("\n*. Password must contain atleast one Special Char."); goto redo;}
            printf("\n*.You have met the minimum requirements for Password.\n*.Congratulations.\n");
            goto again;
        }
    case(2) :
        {
            int i=0;
            char a[100];
            printf("Enter the String : ");
            scanf("%s",&a);
            while (a[i]!='\0')
            {i++;}
            printf("Legnth of the String : %d\n",i);
            goto again;
        }
    case(3) :
        {
            char a[100],b[100];
            int i,j;
            printf("Enter the String : ");
            scanf("%s",&a);
            while (a[i] != '\0'){i++;}
            for (j=0;j<=i;j++)
            {b[j]=a[j];}
            printf("Copy of the String : ");
            puts(b);
            printf("\n");
            goto again;
        }
    case(4) :
        {
            char a[100],b[100];
            int i,j,flag=0;
            printf("Enter any String : ");
            scanf("%s",&a);
            for (i=0;a[i] != '\0'; i++);
            for (j=0,i=i-1;i>=0;i--,j++)
            {b[j]=a[i];}
            b[j]='\0';
            printf("Original String is : %s\n",a);
            printf("Reverse String is : %s\n",b);
            goto again;
        }
    case(5) :
        {
            char a[100],b[100];
            int i,j,flag=0;
            printf("Enter any String : ");
            scanf("%s",&a);
            for (i=0;a[i] != '\0'; i++);
            for (j=0,i=i-1;i>=0;i--,j++)
            {
                b[j]=a[i];
            }
            b[j]='\0';
            for (i=0;a[i] != '\0';i++)
            {
                if(a[i]!=b[i])
                    {printf("String is not Palindrome.\n");
                    goto again;}
            }
            printf("String is Palindrome.\n");
            goto again;
        }
    case(6) :
        {
            char a[100],b[50];
            int i,j;
            printf("Enter First String: ");
            scanf("%s",a);
            printf("\nEnter Second String: ");
            scanf("%s",b);
            for(i=0;a[i]!='\0';i++);
            a[i++]=' ';
            for(j=0;b[j]!='\0';j++,i++)
                a[i]=b[j];
            a[i]='\0';
            printf("Concatenated String is %s\n",a);;
            goto again;
        }
    case(7) :
        {
            char a[10],b[10];
            int i;
            printf("Enter the String : ");
            scanf("%s",&a);
            printf("Enter Another String : ");
            scanf("%s",&b);
            for (i=0;b[i]!='\0';i++){
                if (a[i]!=b[i]){
                    printf("Strings are Different.\n");
                    goto again;
                }
            }
            printf("Strings Matched.\n");
            goto again;
        }
    case(8) :
        {
            exit(0);
        }
    }
}
