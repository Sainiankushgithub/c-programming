// ASSIGNING VECTOR 
#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&v)
{
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>v;
    int size;
    cout<<"Enter the size of an array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the numbers of an elements of an array\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying the vector without assigning the array values to the vector\n";
    display(v);
    v.assign(arr,arr+size);
    cout<<"Displaying the vector with assigning the array values to the vector\n";
    display(v);
    cout<<"Vector two elements are \n";
    vector<int>v1;
    v1.assign(7,200);
    display(v1);
return 0;
}