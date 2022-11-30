#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int sum=0;
    printf("Enter any number to find the sum of the digit\n");
    scanf("%d",&n);
    while(n>0)
    {
        int r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("Sum of the digit is %d",sum);
return 0;
}