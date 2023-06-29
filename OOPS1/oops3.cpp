// BY CODE BEAUTY OOPS 3 ABOUT CLASSES AND OBJECTS
#include<bits/stdc++.h>
using namespace std;
class YouTubechannel{
    public:
    string ytchannelname;
    string ownername;
    int subscriber;
    int uploaded;
    list<string>youtubevideos;
    void display();
};
void YouTubechannel :: display()
{
    cout<<"You tube cahnnel name : "<<ytchannelname<<endl;
    cout<<"You tube owner name   : "<<ownername<<endl;
    cout<<"Subscribers you have  : "<<subscriber<<endl;
    cout<<"Total uploaded video  : "<<uploaded<<endl;
    cout<<"Total number of uploaded videos are : \n";
    for(string videos:youtubevideos)
    {
        cout<<videos<<endl;
    }
}
int main()
{
    YouTubechannel yt;
    cout<<"Enter the youTube channel name\n";
    getline(cin,yt.ytchannelname);
    cout<<"Enter the owner name\n";
    getline(cin,yt.ownername);
    cout<<"Enter the number of subscriber you have\n";
    cin>>yt.subscriber;
    cout<<"Enter the number of videos that you have uploaded\n";
    cin>>yt.uploaded;
    cin.ignore();
    cout<<"Enter that videos name which you have uploaded \n";
    for(int i=0;i<yt.uploaded;i++)
    {
        string channel;
        getline(cin,channel);
        yt.youtubevideos.push_back(channel);
    }
    yt.display();
return 0;
}