#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    printf("Enter the value of a b and c\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf(" a is greator %d",a);
        }
        else 
        {
            printf("C is greator %d",c);
        }
    }
    else{
        if(b>c)
        {
            printf("b  is greator %d",b);
        }
        else{
            printf("c is greator %d",c);
        }
    }
return 0;
}