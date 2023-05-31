// INSERT FUNCTION IN VECTOR
#include<bits/stdc++.h>
using namespace std;
void display(vector<int>v)
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
    cout<<"Enter the size of an aray\n";
    cin>>size;
    cout<<"Enter the number of an elements of an array\n";
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Displaying your value before insertion\n";
    display(v);

    // INSERT FUNCTION 
    // INSERT AN ELEMETN AT THE GIVEN INDEX
    cout<<"Dipslaying your value after insertion\n";
    v.insert(v.begin()+2,100);
    display(v);
    // INSERT THE MULTIPLE ELEMENT AT THE GIVEN INDEX
    v.insert(v.end()-1,2,50);
    display(v);
return 0;
}