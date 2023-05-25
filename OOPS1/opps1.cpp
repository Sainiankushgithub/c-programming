// COMPLETE ONE SHOOT OOP BY COLLEGE WALLAH
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

    // COPY CONSTRUCTOR

    Rectangle(Rectangle &r)
    {
        length=r.length;
        width=r.width;
    }
    void display(int length,int width);

    // DESTRUCTOR

    ~Rectangle()
    {
        cout<<"Destructor is called\n";
    }
};
void Rectangle::display(int length,int width)
{
    cout<<"Length = "<<length<<endl<<"Width = "<<width<<endl;

}

// ENCAPSULATION 

class Manager
{
    private:
    int x;
    public:
    void setData(int n)
    {
        x=n;
    }
    void getData()
    {
        cout<<"x="<<x<<endl;
    }

};
class Parent1
{
    public:
    Parent1()
    {
        cout<<"Parent1 class "<<endl;
    }
};
class child1:public Parent1{
    public:
    child1(){
        cout<<"child1 class "<<endl;
    }
};

//  MULTILEVEL INHERITANCE 

class Parent2
{
    public:
    Parent2()
    {
        cout<<"Parent class 2\n";
    }
};
class child2:public Parent2
{
    public:
    child2()
    {
        cout<<"Child 2 class \n";
    }
};
class grandchild:public child2
{
    public:
    grandchild()
    {
        cout<<"Grandchild class \n";
    }
};
class Manager1
{
    public:
    Manager1()
    {
        cout<<"Manager 1 class\n";
    }
};
class Manager2 
{
    public:
    Manager2()
    {
        cout<<"Manager 2 class \n";
    }
};
class employee1:public Manager1, public Manager2
{
    public:
    employee1()
    {
        cout<<"Employee 1 class \n";
    }
};
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

    // DESTRUCTOR


   //  ENCAPSUALTION 

    cout<<"ENCAPSULATION\n";
    Manager m;
    m.setData(20);
    m.getData();

    // ABSTRACTION 

    // TYPES OF INHERITANCE 

    cout<<"SINGLE INHERITANCE \n";
    child1 c;

    // MUTLILEVEL INHERITANCE

    cout<<"MULTILEVEL INHERITANCE\n";
    grandchild gc;

    // MULTIPLE INHERITANCE 

    cout<<"MULTIPLE INHERITANCE\n";
    employee1 e1;
return 0;
}