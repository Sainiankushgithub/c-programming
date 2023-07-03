// HASHTABLE 
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
bool hashtable[MAX+1][2];
void insert(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            hashtable[arr[i]][0]=1;
        }
        else
        {
            hashtable[abs(arr[i])][1]=1;
        }
    }
}
bool search(int key)
{
    if(key>=0)
    {
       if(hashtable[key][0]==1)
        return true;
        return false;
    }
    else
    {
        if(hashtable[abs(key)][1]==1)
        return true;
        return false;
    }
}
bool removekey(int key)
{
    if(search(key))
    {
    if(key>=0)
    {
        hashtable[key][0]=0;
    }
    else
    {
        hashtable[abs(key)][1]=0;
    }
    return true;
    }
    return false;
}
int main()
{
    int n;
    cout<<"Enter the size of an array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Inserting your array elements in haashtable\n";
    insert(arr,n);
    int key;
    cout<<"Enter the element to be search\n";
    cin>>key;
    if(search(key))
    {
        cout<<"Key found : "<<key<<endl;
    }
    else
    {
        cout<<"Key not found : "<<key<<endl;
    }
    int key1;
    cout<<"Enter the key which you want to remove\n";
    cin>>key1;
    if(removekey(key))
    {
        cout<<"Entered key remove sucessfully\n";
    }
    else
    {
        cout<<"The key you have entered cannot be remove because it is not present in the array\n";
    }
return 0;
}