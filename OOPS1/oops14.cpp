// BY CODE BEAUTY OOPS 5 ABOUT DESTRUCTOR
#include<bits/stdc++.h>
using namespace std;
class Book
{
    public:
    string name;
    int price;
    int *Rates;
    int ratecounter;
    Book(string n,int p)
    {
        name=n;
        price=p;
        ratecounter=2;
        Rates=new int[ratecounter];
        Rates[0]=4;
        Rates[1]=5;
    }
    ~Book()
    {
        delete [] Rates;
        Rates=nullptr;
    }
    void display()
    {
        cout<<"Name of the book is :"<<name<<endl;
        cout<<"price of the book is :"<<price<<" rupees"<<endl;
        for(int i=0;i<ratecounter;i++)
        {
            cout<<*Rates+i<<endl;
        }
    }
};
int main()
{
    Book bk("Let us code",900);
    bk.display();
return 0;
}