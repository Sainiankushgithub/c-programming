#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    printf("Enter any year to check whether enter year is leap or not\n");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("Enter year %d is a leap year",year);
    }
    else{
        printf("Enter year %d is not a leap year",year);
    }
return 0;
}