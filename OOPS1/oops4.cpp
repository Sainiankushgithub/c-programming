// BY CODE BEAUTY OOPS 4 ABOUT CONSTRUCTOR
#include<bits/stdc++.h>
using namespace std;
class YouTubechannel
{
    public:
    string youtubechannel;
    string ownername;
    int subscriber;
    int uploaded;
    list<string>youtubevideos;

    // CONSTRUCTOR ->IT INVOKE AUTOMATICALLY WHEN THE OBJECT OF CLASS IS CREATED AND HAS NO RETURN TYPE

    YouTubechannel(string ytchannel,string owner,int subs)
    {
        youtubechannel=ytchannel;
        ownername=owner;
        subscriber=subs;
        uploaded=2;
    }
    void display();
};
void YouTubechannel :: display()
{
    cout<<"YouTube channel name : "<<youtubechannel<<endl;
    cout<<"Youtube owner name   : "<<ownername<<endl;
    cout<<"Subscriber           : "<<subscriber<<endl;
    cout<<"Uploaded             : "<<uploaded<<endl;
    cout<<"Videos name which you have uploaded are : \n";
    for(string videos: youtubevideos)
    {
        cout<<videos<<endl;
    }
}
int main()
{
    string ytchannel,owner;
    int subs;
    cout<<"Enter the Youtube channel name \n";
    getline(cin,ytchannel);
    cout<<"Enter the youtube owner name\n";
    getline(cin,owner);
    cout<<"Enter the numbers of subscriber\n";
    cin>>subs;
    cin.ignore();
    YouTubechannel yt(ytchannel,owner,subs);
    cout<<"Enter the your videos name which you uploaded\n";
    for(int i=0;i<yt.uploaded;i++)
    {
        string name;
        getline(cin,name);
        yt.youtubevideos.push_back(name);
    }
    yt.display();
    // FOR MULTIPLE OBJECTS WE CAN DO THIS WAY TOO
    YouTubechannel yt2("CODE LOVER","ANKUSH SAINI",1200000);
    yt2.youtubevideos.push_back("OOPS 1 SHOT");
    yt2.youtubevideos.push_back("STL IN C++ 1 SHOT");
    yt2.youtubevideos.push_back("DATA STRUCTURE AND ALGORITHM PLAYLIST");
    yt2.display();
return 0;
}