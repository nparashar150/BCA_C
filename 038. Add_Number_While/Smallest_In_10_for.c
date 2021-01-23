#include<stdio.h>
int main()
{
        int i,n,min;
        printf("Enter number:\t");
        scanf("%d",&n);
        min=n;
        for(i=1; i<=9; i++)
        {scanf("%d",&n);
            if(n<min)
            {min=n;}}
        printf("The Smallest number is %d.",min);
}
