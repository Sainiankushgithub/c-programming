#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    int n;
    printf("Enter the number to find sum of its digit\n");
    scanf("%d",&n);
    // sum of digits using for loop
    for(;n>0;n/=10)
    {
        int r=n%10;
        sum+=r;
    }
    printf("The sum of the digit is %d",sum);
return 0;
}