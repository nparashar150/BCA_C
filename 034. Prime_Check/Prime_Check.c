#include<stdio.h>
int main(){
int n,i,m=0,flag=0;
printf("Enter the number to check prime:");
scanf("%d",&n); // Here we take n as input for example 9
m=n/2;      // Now all of factors of 9 are less than 9/2 i.e 3 and 3
for(i=2;i<=m;i++) // now ++ the value of i till it is == m
{
if(n%i==0) // if modulas of i and n is == 0 then it is not prime because there should be no factor of number n between 2 and the number
{ printf("Number is not prime"); exit(0); }
}
if(flag==0) { printf("Number is prime"); }
// if modulas of i and n is != 0 then it is a prime number as it has no factors between number and 2
return 0;
}
