#include <stdio.h>
int main()
{
    int mark1,mark2,mark3,mark4,mark5,total;
    float percentage;
    printf("Enter the Marks of Five Sub : ");
    scanf("%d%d%d%d%d", &mark1, &mark2, &mark3, &mark4, &mark5);
    total=mark1+mark2+mark3+mark4+mark5;
    percentage=total/5;
    printf("%.2f", percentage);
    if ( percentage >= 70 ) {printf("\nFirst");}
    else if ( percentage >= 50 ) {printf("\nSecond");}
    else if ( percentage >= 40 ) {printf("\nThird");}
    else {printf("\nFail");}
    return 0;
}
