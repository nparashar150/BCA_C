#include <stdio.h>
int main ()
{
    int a[100][100],b,sum=0,i,j;
    printf("Enter the Square Matrix You want to Add Elements of : ");
    scanf("%d",&b);
    for (i=1;i<=b;i++)
    {
        for (j=1;j<=b;j++)
        {scanf("%d", &a[i][j]); sum += a[i][j];}
    }
    printf("%d is the Sum of elements.\n", sum);
    for (i=1;i<=b;i++)
    {
        for (j=1;j<=b;j++)
        {printf(" %d ", a[i][j]);}
        printf("\n");
    }
}
