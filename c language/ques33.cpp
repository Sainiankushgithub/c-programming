#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int sum=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    while(num>0)
    {
        int r=num%10;
         sum+=r;
        num=num/10;
    }
    printf("\nsum of the digit is %d",sum);
return 0;
}