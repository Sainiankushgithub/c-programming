// BY CODE BEAUTY OOPS 5 ABOUT PURE VIRTUAL FUNCTION
#include<bits/stdc++.h>
using namespace std;
class Instrument
{
    public:
    virtual void makesound()=0;
};
class Accordion:public Instrument{
    public:
    void makesound()
    {
        cout<<"Accordiion is playing\n";
    }
};
class piano:public Instrument{
    public:
    void makesound()
    {
        cout<<"Piano is playing\n";
    }
};
int main()
{
    Instrument *it1=new Accordion;
    // it1->makesound();
    Instrument *it2=new piano;
    // it2->makesound();
    Instrument *it[2]={it1,it2};
    for(int i=0;i<2;i++)
    {
        it[i]->makesound();
    }
return 0;
}