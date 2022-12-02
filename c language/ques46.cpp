/*BINARY SEARCH*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    int size;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    printf("Enter the number of an elements in sorted order only\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int low,mid,high;
    low=0;
    high=size;
    mid=(low+high)/2;
    int element;
    printf("Enter the element to be search\n");
    scanf("%d",&element);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==element)
        {
            printf("Element at position arr[%d]\n",mid);
            break;
        }
        if(arr[mid]>element)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(arr[mid]!=element)
    {
        printf("Element not found\n");
    }
return 0;
}