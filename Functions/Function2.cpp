#include<bits/stdc++.h>
using namespace std;
// CALL BY REFERENCE USING POINTERS
// void swappointer(int *a, int *b)
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// CALL BY REFERENCE BY C++ REFERNCE VARIABLE
void swappointer(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x,y;
    cout<<"Enter teh first value \n";
    cin>>x;
    cout<<"Enter the second value\n";
    cin>>y;
    cout<<"Value before swappig \n";
    cout<<"The value of x is "<<x<<endl;
    cout<<"The value of y is "<<y<<endl;
    // THIS IS FOR CALL BY REFERNCE USING POINTERS
    // swappointer(&x,&y);

    // THIS IS FOR CALL BY REFERNCE USING C++ REFERNCE VARIABLE
    swappointer(x,y);
    cout<<"Value after swapping\n";
    cout<<"The value of x is "<<x<<endl;
    cout<<"The value of y is "<<y<<endl;
    return 0;
}