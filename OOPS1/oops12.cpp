// BY CODE BEAUTY OOPS 5 ABOUT FRIEND FUNCTION
#include<bits/stdc++.h>
using namespace std;
class YouTubechannel
{
    private:
    string youtubechannel;
    string ownername;
    int subscriber;
    public:
    void setdata(string name,string owner,int subs)
    {
        youtubechannel=name;
        ownername=owner;
        subscriber=subs;
    }
    // friend void display(YouTubechannel);
    friend class Homework;
};
/* void display(YouTubechannel yt)
{
    cout<<"Youtubechannel name : "<<yt.youtubechannel<<endl;
    cout<<"Owner name          : "<<yt.ownername<<endl;
    cout<<"Subascriber         : "<<yt.subscriber<<endl;
} */
class Homework
{
    public:
    void display(YouTubechannel yt)
    {
    cout<<"Youtubechannel name : "<<yt.youtubechannel<<endl;
    cout<<"Owner name          : "<<yt.ownername<<endl;
    cout<<"Subscriber         : "<<yt.subscriber<<endl;
    }
};
int main()
{
    YouTubechannel yt;
    yt.setdata("Code lover","Ankush saini",120000);
    Homework h;
    h.display(yt);
return 0;
}