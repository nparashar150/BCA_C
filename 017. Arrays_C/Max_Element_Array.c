#include <stdio.h>
void main ()
{
    int a,b,max;
    printf("Enter the Number of Elements you want to Input in the Array : ");
    scanf("%d",&a);
    int c[a];
    printf("Enter the Elements by giving spaces : ");
    for (b=0;b<a;b++)
    {
        scanf("%d",&c[b]);
    }
    max = c[0];
    for (b=0;b<a;b++)
    {
        if (max<c[b])
        {
            max = c[b];
        }
    }
    printf("The Greatest Element in Array is %d",max);
}
