#include<bits/stdc++.h>
using namespace std;
int gcd(int n1,int n2)
{
    int min_num=min(n1,n2);
    int i;
    printf("\nMinimum number is %d",min_num);
    for(i=min_num;i>=1;i--)
    {
        if(n1%min_num==0&&n2%min_num==0)
        {
            break;
        }
        else{
            min_num--;
        }
    }
    return min_num;
}
int main()
{
   int num1;
   int num2;
   printf("Enter the first and second number\n");
   scanf("%d%d",&num1,&num2); 
   printf("\nGCD of two number is %d ",gcd(num1,num2));
return 0;
}