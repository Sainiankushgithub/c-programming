// BY CODE BEAUTY OOPS 5 ABOUT INHERITANCE
#include<bits/stdc++.h>
using namespace std;
class YouTubechannel
{
    private:
    string youtubechannel;
    int subscribercount;
    int uploaded;
    list<string>youtubevideos;
    protected:
    string ownername;
    public:
    YouTubechannel(string channel,string owner,int up)
    {
        youtubechannel=channel;
        ownername=owner;
        subscribercount=0;
        uploaded=up;
    }
    void publishedvideos(string name)
    {
        youtubevideos.push_back(name);
    }
    void subscriber()
    {
        subscribercount++;
    }
    void unsubscriber()
    {
        if(subscribercount>0)
        {
            subscribercount--;
        }
    }
    void display();
};
void YouTubechannel::display()
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
class CookingYouTubechannel :public YouTubechannel
{
    public:
    CookingYouTubechannel(string channel,string owner,int uploaded):YouTubechannel(channel,owner,uploaded)
    {

    }
    void practice()
    {
        cout<<ownername<<" ->Practicing cooking , learning new varities , experimenting with spicies\n";
    }
};
int main()
{

   /* string channel,owner;
    int up;
    cout<<"Enter the channel name : \n";
    getline(cin,channel);
    cout<<"Enter the owner name :\n";
    getline(cin,owner);
    cout<<"Enter the number of videos which you have uploaded\n";
    cin>>up;
    cin.ignore();
    YouTubechannel yt(channel,owner,up);
    cout<<"Enter the name of videos which you have uploaded\n";
    for(int i=0;i<up;i++)
    {
        string name;
        getline(cin,name);
        yt.publishedvideos(name);
    }
    yt.unsubscriber();
    yt.unsubscriber();
    yt.subscriber();
    yt.display(); */

    CookingYouTubechannel cookingytchannel("Amy kitchen","Amy",2);
    cookingytchannel.subscriber();
    cookingytchannel.subscriber();
    cookingytchannel.subscriber();
    cookingytchannel.subscriber();
    cookingytchannel.subscriber();
    cookingytchannel.unsubscriber();
    cookingytchannel.publishedvideos("Apple pie");
    cookingytchannel.publishedvideos("chocolate cake");
    cookingytchannel.publishedvideos("banana shake");
    cookingytchannel.display();
    cookingytchannel.practice();
    CookingYouTubechannel cookingytchannel2("John kitchen","John",2);
    cookingytchannel2.practice();
return 0;
}