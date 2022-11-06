// Associativity of operator
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int b=4;
    int c=8;
    int d=2;
    int e=4;
    int f=2;
    a=b+c/d+e*f;
    // Result without parenthese 
    printf("The value of a is =%d\n",a);
    a=(b+c)/d+e*f;
    // Result with parenthese 
    printf("The value of a is =%d\n",a);
    a=b+c/((d+e)*f);
    // Another result wiht parenthese
    printf("The value of a is =%d\n",a);
return 0;
}