// BY CODE BEAUTY OOPS 5 ABOUT ENCAPSULATION
#include<bits/stdc++.h>
using namespace std;
class YouTubechannel
{
    private:
    string youtubechannel;
    string ownername;
    int subscribercount;
    int uploaded;
    list<string>youtubevideos;
    public:
    void display();
    YouTubechannel(string ytchannel,string owner,int up)
    {
        youtubechannel=ytchannel;
        ownername=owner;
        uploaded=2;
        subscribercount=0;
    }
    void subscriber()
    {
        subscribercount++;
    }
    void unsubscriber()
    {
        if(subscribercount>0)  // If we don't use this condition there it will show a bug there as -1 subscriber which is not possible
        subscribercount--;
    }
    void publishedvideos(string name)
    {
        youtubevideos.push_back(name);
    }
};
void YouTubechannel :: display()
{
    cout<<"YouTube channel name : "<<youtubechannel<<endl;
    cout<<"Youtube owner name   : "<<ownername<<endl;
    cout<<"Subscriber           : "<<subscribercount<<endl;
    cout<<"Uploaded             : "<<uploaded<<endl;
    cout<<"Videos name which you have uploaded are : \n";
    for(string videos: youtubevideos)
    {
        cout<<videos<<endl;
    }
}
int main()
{
    string channel,owner;
    int up;
    cout<<"Enter the youtube channel name\n";
    getline(cin,channel);
    cout<<"Enter the owner name\n";
    getline(cin,owner);
    cout<<"Enter the number of videos you have uploaded\n";
    cin>>up;
    cin.ignore();
    YouTubechannel yt(channel,owner,up);
    cout<<"Enter the names of the uploaded videos\n";
    for(int i=0;i<up;i++)
    {
        string name;
        getline(cin,name);
        yt.publishedvideos(name);
    }
    yt.subscriber();
    yt.subscriber();
    yt.subscriber();
    yt.unsubscriber();
    yt.display();
return 0;
}