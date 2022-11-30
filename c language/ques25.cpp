#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    printf("Enter the number to check whether entered number is palidrome or not\n");
    scanf("%d",&n);
    int sum=0;
    int temp=n;
    while(n!=0)
    {
        int r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    printf("Reverse of the number is %d\n",sum);
    if(sum==temp)
    {
        printf("Entered number %d is palidrome \n",temp);
    }
    else
    printf("Entered number %d is not a palidrome \n",temp);
return 0;
}