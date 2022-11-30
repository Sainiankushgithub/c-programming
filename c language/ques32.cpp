#include<stdio.h>
int main ()
 {  
     int n,sum=0,temp,r;
     printf("\nEnter the number:");
     scanf("%d",&n);
     temp=n;
     while(n>0)
     {
         r=n%10;
         sum=sum+(r*r*r);
         n=n/10;
     }
     if (temp==sum)
     printf("number is armstrong");
     else 
     printf("number is not armstrong");
     return 0;
 }