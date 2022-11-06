#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10 , b=20, c=30, d=75;
    a+=b;
    b-=a;
    c*=2;
    c-=b;
    d%=a;
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);
    printf("The value of c is %d\n",c);
    printf("The value of d is %d\n",d);
return 0;
}