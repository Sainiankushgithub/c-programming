// POINTERS AND VARIABLES
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    cout<<"Address of n : "<<&n<<endl;
    cout<<"N = "<<n<<endl;
    int *ptr=&n;
    cout<<"Address of ptr : "<<ptr<<endl;
    cout<<"ptr = "<<*ptr<<endl;
    *ptr=10;
    cout<<"ptr = "<<*ptr<<endl;
    cout<<"N = "<<n<<endl;
return 0;
}