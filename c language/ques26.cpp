// WAP to enter the integer and convert the entered integer into word
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    printf("Enter the number to check whether entered number is palidrome or not\n");
    scanf("%d",&n);
    int reverse=0;
    int temp=n;
    while(n!=0)
    {
        int r=n%10;
        reverse=reverse*10+r;
        n=n/10;
    }
    printf("Your entered number in figure=%d\n",temp);
    printf("Your number in words\n");
    while(reverse!=0)
    {
        int r=reverse%10;
        switch(r)
        {
            case 0:
            {
                printf("Zero ");
                break;
            }
            case 1:
            {
                printf("One ");
                break;
            }
            case 2:
            {
                printf("Two ");
                break;
            }
            case 3:
            {
                printf("Three ");
                break;
            }
            case 4:
            {
                printf("Four ");
                break;
            }
            case 5:
            {
                printf("Five ");
                break;
            }
            case 6:
            {
                printf("Six ");
                break;
            }
            case 7:
            {
                printf("Seven ");
                break;
            }
            case 8:
            {
                printf("Eight ");
                break;
            }
            case 9:
            {
                printf("Nine ");
                break;
            }
            }
          reverse=reverse/10;
    }
return 0;
}