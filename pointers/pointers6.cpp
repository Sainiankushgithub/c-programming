// ** assigning the value of array using pointers
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    *arr=10;
    *(arr+1)=20;
    cout<<"The value of the first index is "<<*arr<<endl;
    cout<<"The value of the first index is "<<*(arr+1)<<endl;
    return 0;
}