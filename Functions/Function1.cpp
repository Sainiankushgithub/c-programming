// ** FUNCTIONS
#include<bits/stdc++.h>
using namespace std;
// int sum(int a, int b)
// {
//     int c=a+b;
//     return c;
// }

// FUNCTION PROTOTYPE
int sum(int a, int b);
void g();
int main()
{
int num1,num2;
g();
cout<<"Enter the first number\n";
cin>>num1;
cout<<"Enter the second number\n";
cin>>num2;
cout<<"The sum of the two number is "<<sum(num1,num2);
    return 0;
}
int sum(int a, int b)
{
    int c=a+b;
    return c;
}
void g()
{
    cout<<"\nHELLO GOOD MORNING\n";
}