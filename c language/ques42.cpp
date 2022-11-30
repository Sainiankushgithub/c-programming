/*FINDING THE PRIME FACTOR*/
#include<bits/stdc++.h>
using namespace std;
void printdivisor(int n)
{
    printf("Divisible of %d are \n",n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printdivisor(n);
return 0;
}