#include<stdio.h>
void main()
{
    int flag=0,x=0,a,b,i,m;
    char pass[100],save[100];
    printf("Enter New Password : ");
    scanf("%s", pass);
    for (m = 0; pass[m] != '\0'; ++m);
    printf("Length of Password is %d", m);
    printf("\nEnter Password : ");
    while(x<=m)
    {
        save[x]=getch();
        printf("*");
        ++x;
    }
    for(i=0;i<5;i++)
         {
          if(save[i]!=pass[i])
            {
              break;
            }
         }
          if(i==5)
          flag=1;
          else
          flag=0;
if(flag==1)
    printf("\n password matches");
else
    printf("\n password incorrect");
}

