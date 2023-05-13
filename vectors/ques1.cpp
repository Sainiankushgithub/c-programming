// VECTORS
#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int>vec1;
    int size,element;
    cout<<"Enter the size of vector\n";
    cin>>size;
    cout<<"Enter number of elements of a vector\n";
    for(int i=0;i<size;i++)
    {
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
return 0;
}