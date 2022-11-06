// LCM AND HCF OF TWO NUMBERS 
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    // while(a!=b)
    // {
    //     if(a>b)
    //     {
    //         a=a-b;
    //     }
    //     else{
    //         b=b-a;
    //     }
    // }
    if(b==0)
    {
        return a;
    }
    else{
      return   gcd(b,a%b);
    }
}
int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    int a,b;
    printf("Enter the two numbers\n");
    scanf("%d%d",&a,&b);
    gcd(a,b);
    lcm(a,b);
    printf("HCF of the two number is %d\n",gcd(a,b));
    printf("LCM of the two number is %d\n",lcm(a,b));
return 0;
}