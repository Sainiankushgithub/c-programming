// ** SUM OF ARRAY USING POINTERS
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50};
    int *p;
    int sum=0;
    for(p=&arr[0];p<=&arr[4];p++)
    {
        sum=sum+*p;
    }
    cout<<"The sum of the array is : "<<sum<<endl;
    return 0;
}