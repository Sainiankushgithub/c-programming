// EARSE AND CLEAR FUNCTION
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int size;
    cout<<"Enter the size of an array\n";
    cin>>size;
    cout<<"Enter the numbers of an elements of vector\n";
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Displaying your vector elements\n";
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    // CLEAR FUNCTION -> It is used to remove all the elements from the vector container
    v.clear();
    cout<<"After using the clear function\n";
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    if(v.empty())
    {
        cout<<"0\n";
    }
    vector<int>v1={12,23,34,45,56};
    // EARSE FUNCTION -> It is used to remove the element from the specific position
    vector<int>::iterator it;
    it=v1.begin()+1;
    cout<<"Removed element is "<<*it<<endl;
    v1.erase(it);
    cout<<"After erasing the specific position element\n";
    for(auto x:v1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
return 0;
}