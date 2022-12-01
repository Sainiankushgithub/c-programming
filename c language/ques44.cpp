#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    printf("Enter the decinmal integers\n");
    scanf("%d",&n);
    int m=n;
    int arr[20];
    for(int i=0;n>0;i++)
    {
        int r=n%2;
        arr[i];
        n=n/2;
    }
    printf("\nBinary equivalent of  %d ",m);
    for(int i=i-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
return 0;
}