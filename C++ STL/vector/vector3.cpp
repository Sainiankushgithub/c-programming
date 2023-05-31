// INSERT FUNCTION IN VECTOR
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1;
    vector<int>v2;
    int size1;
    cout<<"Enter the size of vector1\n";
    cin>>size1;
    cout<<"Enter the number of an elements of a vector1\n";
    for(int i=0;i<size1;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    int size2;
    cout<<"Enter the size of vector2\n";
    cin>>size2;
    cout<<"Enter the number of an elements of a vector2\n";
    for(int i=0;i<size2;i++)
    {
        int x;
        cin>>x;
        v2.push_back(x);
    }
    cout<<"Displaying your vector1 elements \n";
    for(auto i:v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Displaying your vector2 elements \n";
    for(auto i:v2)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // INSERT THE RANGE OF ELEMENTS ATT GIVEN INDEX

    v1.insert(v1.begin()+1,v2.begin()+1,v2.begin()+3);
    cout<<"Displaying your elements after insertion\n";
    for(auto i:v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
return 0;
}