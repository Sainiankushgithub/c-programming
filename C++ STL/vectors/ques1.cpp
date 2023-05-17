// VECTORS PART ONE 
#include<bits/stdc++.h>
using namespace std;
// DISPLAYING A VECTOR

void display(vector<int>&v)
{
    /*for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }*/

    for(auto i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

}
int main()
{
    vector<int>vec1;
    int condition;
    cout<<"press 0 for quit\n";
    cout<<"press 1 for push\n";
    cout<<"Press 2 for display\n";
    cout<<"Press 3 for pop\n";
    cout<<"Press 4 for clear screen\n";
    do
    {
        cout<<"Enter the choice\n";
        cin>>condition;
        switch(condition)
        {
            case 0:
            {
                break;
            }
            case 1:
            {
                int size,element;
              cout<<"Enter the size of vector\n";
              cin>>size;
              cout<<"Enter number of elements of a vector\n";
              for(int i=0;i<size;i++)
              {
                 cin>>element;
                 vec1.push_back(element);
              }
              break;
             }
             case 2:
             {
                cout<<"Displaying your vector\n";
                display(vec1);
                break;
             }
             case 3:
             {
                if(vec1.size()==0)
                {
                    cout<<"Element cannot be pop because your vector is empty !!!!!!\n";
                    break;
                }
                else
                {
                vec1.pop_back();
                cout<<"After pop back the last element\n";
                display(vec1);
                break;
             }
             }
             case 4:
             {
                system("cls");
                break;
             }
             default:
             {
                cout<<"Invalid entry\n";
                break;
             }
        }
    } while (condition>0);
    
return 0;
}