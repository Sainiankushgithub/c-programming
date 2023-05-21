// COMPLETE ONE SHOOT OOP
#include<bits/stdc++.h>
using namespace std;
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
    
int main()
{
    // CLASS AND OBJECT 
    // WITHOUT USING THE POINTERS

    fruit apple;
    apple.name="APPLE";
    apple.color="RED";
    apple.display(apple.name,apple.color);

    // USING POINTERS

    fruit*mango=new fruit();
    mango->name="MANGO";
    mango->color="YELLOW";
    mango->display(mango->name,mango->color);
return 0;
}