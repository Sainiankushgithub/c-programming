// DELETION OPERATION ON ARRAY -----DSA
#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int deletion(int arr[],int size,int location)
{
    for(int i=location-1;i<size;i++)
    {
        arr[i]=arr[i+1];
    }
    return 1;
}
int main()
{
    int size,location;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the number of an elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Displaying the Array elements\n");
    display(arr,size);
    printf("Enter the locaton from where you want to delete an element\n");
    scanf("%d",&location);
    deletion(arr,size,location);
    printf("Displaying the after deletion\n");
    size=size-1;
    display(arr,size);
return 0;
}