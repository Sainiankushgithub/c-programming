/*COMPUTING POWER*/
#include<bits/stdc++.h>
using namespace std;
int power(int n,int x)
{
    int res=1;
    for(int i=0;i<x;i++)
    {
        res=res*n;
    }
    return res;
}
int main()
{
    int n,x;
    printf("Enter the number whose power you want to find\n");
    scanf("%d",&n);
    printf("Enter the power of above given number\n");
    scanf("%d",&x);
    power(n,x);
    printf("Power = %d",power(n,x));
return 0;
}