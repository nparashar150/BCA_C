#include <stdio.h>
void main ()
{
    int a,b,d,e;
    printf("Enter the number of Elements You want to Input : ");
    scanf("%d",&a);
    int c[a];
    for (b=0;b<a;b++)
    {
        scanf("%d",&c[b]);
    }
    printf("The Sorted Array is : ");
    for (b=0;b<a;b++)
    {
        for (d=b+1;d<a;d++)
        {
            if(c[b]>c[d])
            {
                e=c[b];
                c[b]=c[d];
                c[d]=e;
            }
        }
    }
    for (b=0;b<a;b++)
    {
            printf("%d ",c[b]);
    }
}
