#include <stdio.h>
void prime_print(int n);
void main ()
{
    int n;
    printf("Enter the count of Prime Number to be printed : ");
    scanf("%d",&n);
    prime_print(n);
}
void prime_print(int n)
{
   int i = 3, count, c;
   if ( n >= 1 )
   {printf("First %d prime numbers are :\n",n);printf("2\n");}

   for ( count = 2 ; count <= n ;  )
   {
      for ( c = 2 ; c <= i - 1 ; c++ )
      {if ( i%c == 0 )break;}
      if ( c == i )
      {
         printf("%d\n",i);
         count++;
      }
      i++;
   }
}
