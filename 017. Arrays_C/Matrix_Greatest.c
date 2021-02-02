#include <stdio.h>
int main ()
{
    int a[3][3]={{1,2,3},{2,3,4},{3,4,5}},max=0,i=0,j=0;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if(max<a[i][j])
                max=a[i][j];
        }
    }
printf("%d is the Greatest element in the array.",max);
}
