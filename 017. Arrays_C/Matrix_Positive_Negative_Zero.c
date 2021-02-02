#include <stdio.h>
int main ()
{
    int a[3][3]={{1,-2,3},{-2,3,0},{3,0,5}},z_e=0,i=0,j=0,aa=0,b=0,c=0;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if(z_e<a[i][j])
                aa++;
            else if(z_e==a[i][j])
                b++;
            else
                c++;
        }
    }
printf("%d is the number of +ve element in the array.\n",aa);
printf("%d is the number of -ve element in the array.\n",b);
printf("%d is the number of 0 element in the array.\n",c);
}
