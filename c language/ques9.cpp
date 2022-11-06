// HCF OF TWO NUMBER
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    int min_num=min(a,b);
    for(int i=min_num;i>=1;i--)
    {
        if(a%min_num==0 && b%min_num==0)
        {
            break;
        }
        else
        {
            min_num--;
        }
    }
    printf("The hcf of the two number is %d",min_num);
return 0;
}