// ** FINDING THE GREATER  AND SMALLER NUMBER USING FUNCTION
#include<bits/stdc++.h>
using namespace std;
int greatnum(int arr[],int size)
{
    int max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int size;
    cout<<"Enter the size of an array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the number of elements\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int great=greatnum(arr,size);
    cout<<"The greatest number is "<<great<<endl;
    return 0;
}