// EMPLACE 
#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&vec1)
{
    for(auto it=vec1.begin();it!=vec1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>vec1;
    int size;
    cout<<"Enter the size of an array\n";
    cin>>size;
    cout<<"Enter the numbers of an elements of an array\n";
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        vec1.push_back(x);
    }
    cout<<"Displaying your vector elements \n";
    display(vec1);
    cout<<"Enter the index where you want to insert\n";
    int index;
    cin>>index;
    int ele;
    cout<<"Enter the element you want to insert\n";
    cin>>ele;
    vec1.emplace(vec1.begin()+index,ele);
    cout<<"Displaying your vector after inserting the value at given index\n";
    display(vec1);
return 0;
}