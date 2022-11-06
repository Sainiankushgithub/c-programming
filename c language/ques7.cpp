#include<bits/stdc++.h>
using namespace std;
unsigned long int factorial(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int n;
    printf("Enter the number whose factorial you want to find\n");
    scanf("%d",&n);
    factorial(n);
    printf("The factorial of the number is %ld",factorial(n));
return 0;
}