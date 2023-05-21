// COMPLETE ONE SHOOT OOP
#include<bits/stdc++.h>
using namespace std;

// CLASS AND OBJECTS

class fruit
{
    public:
    string name;
    string color;
    void display(string name,string color);
};
void fruit::display(string name,string color)
{
    cout<<name<<"-"<<color<<endl;
}

//  CONSTRUCTOR
     /*  DEFAULT CONTRUCTOR 
         PARAMETERISED CONSTRUCTOR
         COPY CONSTRUCTOR
     */

class Rectangle
{
    public:
    int length;
    int width;
     
    // DEFAULT CONSTRUCTOR

    Rectangle()
    {
        length=10;
        width=20;
    }

    // PARAMETERISED CONSTRUCTOR

    Rectangle(int l,int b)
    {
        length=l;
        width=b;
    }
    void display(int length,int width);
};
void Rectangle::display(int length,int width)
{
    cout<<"Length = "<<length<<endl<<"Width = "<<width<<endl;

}
int main()
{
    // CLASS AND OBJECT 
    // WITHOUT USING THE POINTERS

    cout<<"CLASS AND OBJECTS\n";
    fruit apple;
    apple.name="APPLE";
    apple.color="RED";
    apple.display(apple.name,apple.color);

    // USING POINTERS

    fruit*mango=new fruit();
    mango->name="MANGO";
    mango->color="YELLOW";
    mango->display(mango->name,mango->color);

    // CONSTRUCTOR 
    
    cout<<"\nCONSTRUCTOR"<<endl;
    cout<<"Default constructor\n";
    Rectangle r1;                               // DEFAULT CONSTRUCTOR
    r1.display(r1.length,r1.width);
    cout<<"Parameterised constructor\n";
    Rectangle r2;                              // PARAMETERISED CONSTRUCTOR
    r2.length=50;
    r2.width=25;
    r2.display(r2.length,r2.width);
    cout<<"Copy constructor\n";
    Rectangle r3=r2;                          // COPY CONSTRUCTOR
    r3.display(r3.length,r3.width);
return 0;
}