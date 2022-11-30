#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int count=0;
    printf("Enter the numeber to check whether number is prime or not\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("Enter number is prime \n");
    }
    else
    {    
        printf("Enter number is not prime\n");
    }
return 0;
}