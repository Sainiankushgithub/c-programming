// BY CODE BEAUTY OOPS 5 ABOUT PURE ABSTRACTION
#include<bits/stdc++.h>
using namespace std;
class Smartphone
{
    public:
   virtual void selfie()=0;
   virtual void makecall()=0;
};
class Android :public Smartphone{
    public:
    void selfie()
    {
        cout<<"Android selfie\n";
    }
    void makecall()
    {
        cout<<"Android is calling \n";
    }
};
class IPhone:public Smartphone{
    public:
    void selfie()
    {
        cout<<"IPhone selfie\n";
    }
    void makecall()
    {
        cout<<"IPhone is calling \n";
    }
};
int main()
{
    Smartphone *st=new IPhone;
    st->makecall();
    st->selfie();
return 0;
}