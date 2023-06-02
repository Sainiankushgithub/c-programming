// ERASE AND CLEAR FUNCTION
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int size;
    cout<<"Enter the size of a vector\n";
    cin>>size;
    cout<<"Enter the elements of a vector\n";
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Displaying your vector\n";
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    vector<int>::iterator it1,it2;
    it1=v.begin();
    it2=v.end();
    it2--;
    it2--;
    v.erase(it1,it2);
    cout<<"Displaying your vector after erase\n";
    for(auto x:v)
    {
        cout<<x<<' ';
    }
    cout<<endl;
return 0;
}