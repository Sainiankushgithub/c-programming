// ERASE FUNCTIONO AND CLEAR FUNCTION IN VECTOR OF PAIR
#include<bits/stdc++.h>
using namespace std;
void display(vector<pair<int,string>>&vp)
{
    cout<<"[ ";
    for(int i=0;i<vp.size();i++)
    {
        cout<<"{ ";
        cout<<vp[i].first<<". "<<vp[i].second<<" }";
        if(i<vp.size()-1)
        {
            cout<<" , ";
        }
    }
    cout<<" ]";
    cout<<endl;
}
void display1(vector<pair<int,string>>&vp)
{
    cout<<"[ ";
    for(int i=0;i<vp.size();i++)
    {
        if(vp[i].first%2!=0)
        {
            cout<<"{ ";
            cout<<vp[i].first<<". "<<vp[i].second<<" }";
        if(i<vp.size()-1)
        {
            cout<<" , ";
        }
        }
    }
    cout<<" ]";
    cout<<endl;
}
int main()
{
    vector< pair<int,string>>vp={{1,"APPLE"},{2,"ORANGE"},{3,"MANGO"},{4,"LICHI"}};
    cout<<"Displaying your vector pair\n";
    display(vp);
    vector<pair<int,string>>v;
    int n;
    cout<<"Enter the number of element you want to enter\n";
    cin>>n;
    cout<<"Enter the number and name of your elements of a vector According to above example\n";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        cin.ignore();
        string s;
        getline(cin,s);
        v.push_back(make_pair(x,s));
    }
    cout<<"Displaying your pair\n";
    display(v);
    cout<<"Erasing your last pair\n";
    v.erase(v.end());
    display(v);
    cout<<"Displaying only the 0dd pair\n";
    display1(v);
return 0;
}