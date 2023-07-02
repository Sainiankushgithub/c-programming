// OPERATOR OVERLOADING 
#include<bits/stdc++.h>
using namespace std;
struct YouTubechannel
{
    string Name;
    int subscribercount;
    YouTubechannel(string name,int subs)
    {
        Name=name;
        subscribercount=subs;
    }
};


/* void operator <<(ostream& COUT,YouTubechannel& ytchannel)
{
    COUT<<"Name : "<<ytchannel.Name<<endl;
    COUT<<"Subscriber : "<<ytchannel.subscribercount<<endl;
} */                                                                   // THIS CODE PRINT ONLY THE yt1 NOT YT2 
ostream& operator<<(ostream& COUT,YouTubechannel&ytchannel)
{
    COUT<<"Name : "<<ytchannel.Name<<endl;
    COUT<<"Subscribercount : "<<ytchannel.subscribercount<<endl;
    return COUT;
}

struct Mycollection
{
    list<YouTubechannel>Mychannel;
    void operator+=(YouTubechannel& channel)
    {
        this->Mychannel.push_back(channel);
    }
};
    ostream& operator<<(ostream& COUT,Mycollection& mycollection)
    {
        for(YouTubechannel ytchannel:mycollection.Mychannel)
        {
            COUT<<ytchannel<<endl;
        }
        return COUT;
    }
int main()
{
    YouTubechannel yt1=YouTubechannel("Code beauty",1200000);
    YouTubechannel yt2=YouTubechannel("code lover",1600000);
    // cout<<yt1<<yt2;
    
    Mycollection mycollection;
    mycollection+=yt1;
    mycollection+=yt2;
    cout<<mycollection;
return 0;
}