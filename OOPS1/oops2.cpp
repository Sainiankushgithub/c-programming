#include<bits/stdc++.h>
using namespace std;
class Fruit
{
    private:
    string name;
    string color;
    int quantity;
    public:
    void setdata(string n,string c,int q)
    {
        name=n;
        color=c;
        quantity=q;
    }
    void display(){
        cout<<"Name="<<name<<endl;
        cout<<"Color="<<color<<endl;
        cout<<"Quantity="<<quantity<<endl;
    }
};
int main()
{
    Fruit f;
    string s,c;
    int q;
    int n;
    cout<<"Enter your favourite number \n";
    cin>>n;
    cin.ignore();
    cout<<"Enter the name of the fruit\n";
    getline(cin,s);
    cout<<"Enter the color of your entered fruit\n";
    getline(cin,c);
    cout<<"Enter the quantity of the fruit\n";
    cin>>q;
    cin.ignore();
    f.setdata(s,c,q);
    f.display();

    //  USING POINTERS

    Fruit*fa=new Fruit();
    string s1,c1;
    int q1;
    cout<<"Enter the other fruit name\n";
    getline(cin,s1);
    cout<<"Enter the color of your other fruit\n";
    getline(cin,c1);
    cout<<"Enter the quantity of the fruit\n";
    cin>>q1;
    fa->setdata(s1,c1,q1);
    fa->display();
return 0;
}