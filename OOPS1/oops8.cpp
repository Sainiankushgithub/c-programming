// BY CODE BEAUTY OOPS 5 ABOUT VIRTUAL FUNCTION
#include<bits/stdc++.h>
using namespace std;
class Instrument
{
    public:
    virtual void makesound()
    {
        cout<<"Instrumnet is playing\n";
    }
};
class Accordion:public Instrument
{
    public:
    void makesound()
    {
        cout<<"Accordion is playing\n";
    }
};
int main()
{
    Instrument *it=new Accordion;
    it->makesound();
return 0;
}