#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the numbers of an elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int large=arr[0];
    for(int i=1;i<size;i++)
    {
        if(large<arr[i])
        {
            large=arr[i];
        }
    }
    printf("The largest number is %d\n",large);
return 0;
}