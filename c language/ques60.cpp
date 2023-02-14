#include<bits/stdc++.h>
using namespace std;
// IN SIMPLE ORDER 
/*void fun(int n)
{
    if(n==0)
    {
        return;
    }
    fun(n-1);
    cout<<n<<endl;
}*/
// IN REVERSE ORDER
void fun(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;
    fun(n-1);
}
int main()
{
    int n;
    cout<<"Enter the nth numnber to get its natural series\n";
    cin>>n;
    cout<<"Here's your series"<<endl;
    fun(n);
return 0;
}