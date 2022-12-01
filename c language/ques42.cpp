/*FINDING THE PRIME FACTOR*/
#include<bits/stdc++.h>
using namespace std;
/*void printdivisor(int n)
{
    printf("Divisible of %d are \n",n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
        }
    }
}*/
/**********************************************************************/
             /*EFFICIENT METHOD FOR THE DIVISOR OF ANY NUMBER*/
/*void divisor(int n)
{
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
            if(i!=n/i)
        {
            printf("%d\n",n/i);
        }
        }
    }
}*/
/**********************************************************************/
                /*MORE EFFICIENT METHOD*/
                void divisor(int n)
                {
                    int i;
                    for( i=1;i*i<n;i++)
                    {
                        if(n%i==0)
                        {
                            printf("%d\n",i);
                        }
                    }
                    for(;i>=1;i--)
                    {
                        if(n%i==0)
                        {
                            printf("%d\n",n/i);
                        }
                    }
                }
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    /*printdivisor(n);*/
    /*divisor(n);*/
    divisor(n);
return 0;
}