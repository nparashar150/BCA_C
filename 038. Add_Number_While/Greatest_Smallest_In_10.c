#include <stdio.h>
int main()
{
    int a[100], b, m, n;
    printf("Welcome to the Program.");
    printf("\nEnter the ten Numbers : ");
    printf("\nEnter the Number of Digits : ");
    scanf("%d", &n);
    printf("Enter the Digits by giving space : ");
    for(m = 0; m < n; ++m){scanf("%d", &a[m]);}
    b = a[0];
    for(m = 0; m < n; ++m)
    {if( a[m] > b){b = a[m];}}
    printf("Greatest is : %d", b);
    for(m = 0; m < n; ++m)
    {if( a[m] < b){b = a[m];}}
    printf("\nSmallest is : %d", b);
}

