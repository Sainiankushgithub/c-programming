#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",num);
    switch(num%2==0)
    {
        case 0:
        {
            printf("Entered number is even\n");
            break;
        }
        default:
        {
            printf("Entered number is odd\n");
            break;
        }
    }
return 0;
}