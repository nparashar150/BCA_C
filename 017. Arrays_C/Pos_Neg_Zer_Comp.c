#include <stdio.h>
void main ()
{
    int a,b,p,n,z;
    printf("Enter the Elements You want to Input : ");
    scanf("%d",&a);
    int c[a];
    printf("Enter the Elements by giving Spaces : ");
    for (b=0;b<a;b++)
    {
        scanf("%d",&c[b]);
    }
    for (b=0;b<a;b++)
    {
        if (c[b]<0)
        {
            n++;
        }
        else if (c[b]==0)
        {
            z++;
        }
        else if (c[b]>0)
        {
            p++;
        }
    }
    printf("There are %d Positive Elements in Array.\n",p);printf("There are %d Negative Elements in Array.\n",n);printf("There are %d Zero Elements in Array.",z);
}
