// ** DISPLAYING THE 2D ARRAY USING POINTERS
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter the number of rows\n";
    cin>>row;
    cout<<"Enter the number of column\n";
    cin>>col;
    int arr[row][col];
    int *p;
    cout<<"Enter the number of elements for 2d array\n";
    for(p=&arr[0][0];p<&arr[row-1][col];p++)
    {
        cin>>*p;
    }
    cout<<"Displaying the 2d array\n";
    for(p=&arr[0][0];p<&arr[row-1][col];p++)
    {
       cout<<*p<<" ";
    }
    return 0;
}