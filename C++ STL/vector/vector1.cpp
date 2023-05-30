// VECTORS 
#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&v)
{
    cout<<"Displaying your vectors elements are \n";
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
// SUM OF THE VECTORS ELEMENTS 
int sum(vector<int>&v)
{
    int sum=0;
    while(!v.empty())
    {
        sum+=v.back();
        v.pop_back();
    }
    return sum;
}
int main()
{
    vector<int>v;
    int size;
    cout<<"Enter the size of an array\n";
    cin>>size;
    cout<<"Enter the numebrs of an elements of an array\n";
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    // GIVE THE MAXIMUM SIZE OF AN ARRAY
    cout<<"Vector max size ="<<v.max_size()<<endl;
    // RESIZE THE ARRAY
    v.resize(size-1);
    display(v);
    // CHECK WHETHR YOUR VECTOR IS EMPTY OR NOT
    cout<<"Your vector is empty or not \n";
    if(v.empty())
    {
        cout<<"True\n";
    }
    else
    {
        cout<<"False\n";
    }
    cout<<"Sum of your vectors element is "<<sum(v);
return 0;
}