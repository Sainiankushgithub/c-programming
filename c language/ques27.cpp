// SUM OF DIGIT USING FOR LOOP
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d",&n);
    int sum=0;
    for(;n>0;n/=10)
    {
        int r=n%10;
        sum=sum+r;
    }
    printf("Sum of digit : %d",sum);
return 0;
}