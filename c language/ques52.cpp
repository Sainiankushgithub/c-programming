/*CONVERT BINARY NUMBER INTO DECIMAL NUMBER SYSTEM*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[32]={0};
    int size;
    cout<<"Enter the size how many binary number you want to put\n";
    cin>>size;
    int j=32-size;
    cout<<"Enter the binary numbers\n";
    for(int i=j;i<32;i++)
    {
        cin>>arr[i];
    }
    cout<<"Your binary representation\n";
    for(int i=0;i<32;i++)
    {
        cout<<arr[i]<<" ";
    }
    int count=0;
    
return 0;
}