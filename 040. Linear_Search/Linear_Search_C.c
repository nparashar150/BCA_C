#include <stdio.h>
void main ()
{
    int a,b,c,flag=0;
    printf("Enter the Number of Elements You want to add in the Array : ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the Elements by giving Spaces : ");
    for (b=0;b<a;b++)
    {
        scanf("%d",&arr[b]);
    }
    printf("Enter the Element to be Searched in the Array : ");
    scanf("%d",&c);
    for(b=0;b<a;b++)
    {
        if(c==arr[b])
        {
            flag++;
        }
    }
    if (flag != 0)
    {
        printf("Element is in the Array.");
    }
    else if (flag == 0)
    {
        printf("Element is not in the Array.");
    }
}
