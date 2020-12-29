#include<stdio.h>
int main()
{
    int b;
    float c,d,e,f;
    printf("Enter Rate : ");
    scanf("%f",&c);
    printf("\nEnter Quantity : ");
    scanf("%d",&b);
    d = c * b;
    printf("Total Price without discount is Rs :%.2f\n",d);

    if(d>1000)
    {
        e = d * 10/100;
        f = d - e;
        printf("Total with discount is Rs : %.2f\n",f);
    }
     else
     {
         e = 0;
         printf("\nThere will be no Discount as the quantity purchased is less than Rs. 1000\n");
     }
     return 0;
}
