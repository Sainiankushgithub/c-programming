// INSERTIOIN OPERATION ON ARRAY ----- DSA
#include<bits/stdc++.h>
using namespace std;
void display(int arr[] ,int size)
{
    printf("Displaying the traversal elements\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void display1(int arr[] ,int size)
{
    printf("Displaying the  elements after insertion\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int insertion(int arr[], int size, int element, int location)
{
    for(int i=size-1;i>=location;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[location]=element;
    return 1;
}
int main()
{
    int size,element,location;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the number of an elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    display(arr,size);
    printf("Enter the the element to be insert\n");
    scanf("%d",&element);
    printf("Enter the index where you want to insert the element\n");
    scanf("%d",&location);
    insertion(arr,size,element,location);
    size=size+1;
    display1(arr,size);
return 0;
}