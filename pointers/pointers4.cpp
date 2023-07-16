// ** OPERATION IN POINTERS
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6};
    int *p=&arr[3];
    int *q=&arr[5];
    cout<<(p<=q)<<endl;
    cout<<(p>=q)<<endl;
    q=&arr[3];
    cout<<(p==q)<<endl;
    return 0;
}