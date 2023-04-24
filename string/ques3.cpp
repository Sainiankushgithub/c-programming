// CHECK THE PARENTHESIS 
#include<bits/stdc++.h>
using namespace std;
void display(string s)
{
    cout<<s<<endl;
}
bool parenthesis(char s[])
{
    int length=strlen(s);
    cout<<"Length of your string is : "<<length<<endl;
    if(length==1)
        {
            return false;
        }
        if(length%2!=0)
        {
            return false;
        }                                                       // ERROR NOT CORRECT 
    for(int i=0;i<=(length-1)/2;i++)
    {
        cout<<"s[i]="<<s[i]<<endl<<"s[length-i-1]="<<s[length-i-1]<<endl;
        cout<<i<<endl;
        if(s[i]!=s[length-i-1])
        {
            cout<<"fall\n";
            return false;
        }
    }
    return true;
}
int main()
{
    char s[100];
    cout<<"Enter your string\n";                     // CODE TO CHECK THE PARAENTHESIS 
    cin>>s;
    cout<<"Displaying your string\n";
    display(s);
    if(parenthesis(s))
    {
        cout<<"True\n";
    }
    else
    {
        cout<<"False\n";
    }
return 0;
}