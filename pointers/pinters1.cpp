// BASIC OF POINTERS
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=20;
    int *p=&a;
     cout<<"The value of a is "<<a<<endl; // 20
    cout<<"The value pointer is "<<*p<<endl; // 20
    cout<<"The address of a is "<<&a<<endl;  // random address 
    cout<<"The address of p is "<<p<<endl; // random address
    int arr[6]={12,76,85,46,39,23};
   cout<<"The value "<<*(arr+1)<<endl;  // 76
   cout<<"The address of "<<&arr[2]<<endl;  //rando address of 85
   int size;
   cout<<"Enter the size of an array\n";
   cin>>size;
   cout<<"Enter the number of an elements\n";
   for(int i=0;i<size;i++)
   {
    cin>>arr[i];
   }
   cout<<"The values and address of an array are\n";
   for(int i=0;i<size;i++)
   {
    cout<<*(arr+i)<<endl;
    cout<<&arr[i]<<endl;
    cout<<endl;
   }
    return 0;
}