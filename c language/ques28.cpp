#include<bits/stdc++.h>
using namespace std;
int main()
{
    double number;
    double sum=0;
    do
    {
        printf("Enter the number\n");
        scanf("%lf",&number);
        sum+=number;
    }
    while(number!=0.0);
    {
        printf("Sum of the number is %2.lf",sum);
    }
return 0;
}