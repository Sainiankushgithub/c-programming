// ** INITIALISING THE ARRAY ELEMENTS USING POINTERS
#include<bits/stdc++.h>
using namespace std;
#define n 5
int main()
{
    int arr[n];
    int *p;
    cout<<"Enter the number of an elements\n";
    for(p=arr;p<=arr+n-1;p++)
    {
        cin>>*p;
    }
     for(p=arr;p<=arr+n-1;p++)
    {
        cout<<*p<<" ";
    }
    return 0;
}