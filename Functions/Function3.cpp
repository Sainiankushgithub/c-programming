// ** ADDING ROWS AND DIAPLYING IN THIRD ARRAY
#include<bits/stdc++.h>
using namespace std;
void array3(int size, int arr1[],int arr2[])
{
    int arr3[size];
    cout<<"Displaying the third array\n";
    for(int i=0;i<size;i++)
    {
        arr3[i]=arr1[i]+arr2[i];
        cout<<arr3[i]<<endl;
    }
}
int main()
{
    int size;
    int arr1[size], arr2[size];
    cout<<"Enter the size of an aray\n";
    cin>>size;
    cout<<"Enter the number of elements for first array\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the number of element for second array\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr2[i];
    }
    array3(size,arr1,arr2);
    return 0;
}