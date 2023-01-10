// DISPLAYING THE 2D ARRAYS ROW IN REVERSE ORDER
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,column;
    cout<<"Enter the number of row\n";
    cin>>row;
    cout<<"Enter the number of column\n";
    cin>>column;
    int arr[row][column];
    cout<<"Enter the 2D array elements\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>arr[i][j];
        }
        cout<<"Enter the number of elements for next row\n";
    }
    cout<<"Displaying the every row of 2d array in reverse order\n";
    for(int i=0;i<row;i++)
    {
        for(int j=column-1;j>=0;j--)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
        return 0;
}