// AT FUNCTION AND SWAP FUNCTION IN VECTOR
#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;
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
    auto start=high_resolution_clock::now();
    vector<int>v;
    int size;
    cout<<"Enter the size of an array\n";
    cin>>size;
    cout<<"Enter then vector elements\n";
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Displaying your vector elements\n";
    display(v);
    cout<<"Enter the number which index you want to know?\n";
    int index;
    cin>>index;
    cout<<"Elemnet at your entered index is \n";
    cout<<v.at(index)<<endl;
    vector<int>v1;
    v1={12,23,34,45,56};
    cout<<"Displaying your vector 2 elements\n";
    display(v1);
    v.swap(v1);
    cout<<"Displaying your vectors elements after swaping\n";
    cout<<"Vector one elements are\n";
    display(v);
    cout<<"Vector two elements are\n";
    display(v1);
    auto stop=high_resolution_clock::now();
    auto duration=duration_cast<microseconds>(stop-start);
    cout<<"Time taken by your code is : ";
    cout<<duration.count()<<endl;
return 0;
}