#include<stdio.h>
int main()
{
        int i,n,max;
        printf("Enter number:\t");
        scanf("%d",&n);
        max=n;
        for(i=1; i<=9; i++)
        {scanf("%d",&n);
            if(n>max)
            {max=n;}}
        printf("The Greatest Number is %d.",max);
}
