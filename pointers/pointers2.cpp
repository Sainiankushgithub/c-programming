// ** MIDELEMENT USING POINTERS
#include<bits/stdc++.h>
using namespace std;
int *findmid(int arr[],int size)
{
    return &arr[size/2];
}
int main()
{
    int size;
    int arr[size];
    cout<<"Enter the size of an aray\n";
    cin>>size;
    cout<<"Enter the number of elements\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int *mid=findmid(arr,size);
    cout<<"The mid element is "<<*mid<<endl;
    return 0;
}