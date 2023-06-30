 // BY CODE BEAUTY OOPS 5 ABOUT POLYMORPHISM
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
    int contentquality;
    public:
    YouTubechannel(string name,string owner,int up)
    {
        youtubechannel=name;
        ownername=owner;
        uploaded=up;
        subscribercount=0;
        contentquality=0;
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
    void checkanalytic()
    {
        if(contentquality<5)
        {
            cout<<ownername<<" has Bad quality content\n";
        }
        else
        {
            cout<<ownername<<" has Great content\n";
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
 class CookingYouTubechannel:public YouTubechannel{
    public:
    CookingYouTubechannel(string name,string owner,int up):YouTubechannel(name,owner,up)
    {

    }
    void practice()
    {
        cout<<ownername<<"Practicing cooking , learning new varities , expermenting the spicies\n";
        contentquality++;
    }
 };
 class SingingYouTubechannel:public YouTubechannel
 {
    public:
    SingingYouTubechannel(string name,string owner,int up):YouTubechannel(name,owner,up)
    {

    }
    void practice()
    {
        cout<<ownername<<"Practicing singing , learning new songs , making videos on his/her songs\n";
        contentquality++;
    }
 };
 int main()
 {
    CookingYouTubechannel cookingytchannel("Amy's kitchen","Amy ",2);
    SingingYouTubechannel singingytchannel("John sings","John",2);
    cookingytchannel.practice();
    singingytchannel.practice();
    singingytchannel.practice();
    singingytchannel.practice();
    singingytchannel.practice();
    singingytchannel.practice();
    YouTubechannel *yt1=&cookingytchannel;
    YouTubechannel *yt2=&singingytchannel;
    yt1->checkanalytic();
    yt2->checkanalytic();
 return 0;
 }