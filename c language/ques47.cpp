// LINEAR SEARCH IN ANOTHER WAY
#include<bits/stdc++.h>
using namespace std;
int linearsearch(int arr[],int size, int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[]={12,23,34,45,56,67,78,89};
    int size=sizeof(arr)/sizeof(int);
    printf("Array size=%d\n",size);
    int element;
    printf("Enter the element to be search\n");
    scanf("%d",&element);
    linearsearch(arr,size,element);
    int search=linearsearch(arr,size,element);
    printf("%d",search);
return 0;
}