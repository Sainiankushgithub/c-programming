// MEASURE EXECUTION TIME OF A FUNCTION IN VECTOR
#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;
void display(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>v;
    int size;
    cout<<"Enter the size of an array\n";
    cin>>size;
    cout<<"Enter the number of elements of a vector\n";
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    auto start=high_resolution_clock::now();
    cout<<"Displaying the vector element before resize\n";
    display(v);
    cout<<"Vector before resize="<<v.size()<<endl;
    v.resize(3);
    cout<<"Vector after resize="<<v.size()<<endl;
    cout<<"Displaying the elements after resize\n";
    display(v);
    auto stop=high_resolution_clock::now();
    auto duration=duration_cast<microseconds>(stop-start);
    cout<<"Time taken by the function : "<<duration.count()<<endl;
return 0;
}