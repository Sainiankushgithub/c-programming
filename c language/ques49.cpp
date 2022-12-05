/*WAP TO CONVERT DECIMAL INTO THE BINARY NUMBER*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10];
    int n;
    printf("Enter the number to see its binary conversion\n");
    scanf("%d",&n);
    int i=0;
    int r;
    while(n>0)
    {
        r=n%2;
        n=n/2;
        arr[i]=r;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d ",arr[j]);
    }
return 0;
}