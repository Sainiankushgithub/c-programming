#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    printf("Enter the decinmal integers\n");
    scanf("%d",&n);
    int m=n;
    int arr[20];
    for( i=0;n>0;i++)
    {
        int r=n%2;
        arr[i]=r;
        n=n/2;
    }
    printf("\nBinary equivalent of  %d \n",m);
    for(i--;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
return 0;
}