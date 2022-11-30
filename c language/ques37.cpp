/* CHECK FOR PRIME NUMBER WITH NAIVE METHOD*/
#include<bits/stdc++.h>
using namespace std;
bool primenum(int n)
{
    if(n==1)
    {
        return false;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
   int n;
   printf("Enter the number to check whether it's prime or not\n");
   scanf("%d",&n);
   primenum(n);
   printf("Your entered number is prime or not ?\n\t%d",(primenum(n)));
return 0;
}