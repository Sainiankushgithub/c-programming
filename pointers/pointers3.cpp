// ** PRE AND POST INCREMENT AND DECREMENT
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={4,7,2,8,9};
    int *p=&arr[0];
    cout<<"The value of the third index is "<<*(p+3)<<endl;
    cout<<"post increment the array "<<*(p++)<<endl;
    cout<<"The value of the next index is "<<*(++p)<<endl;
    cout<<"Post decrement the array "<<*(--p)<<endl;
    cout<<"The value of the next index is "<<*(p--)<<endl;
    cout<<"The value of the next index is "<<*(p);
    return 0;
}