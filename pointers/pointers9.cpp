// VOID POINTERS 
#include<bits/stdc++.h>
using namespace std;
void print(void *ptr,char type)
{
    switch(type)
    {
        case 'i':
        {
            cout<<*((int*)ptr)<<endl;
            break;
        }
        case 'f':
        {
            cout<<*((float*)ptr)<<endl;
            break;
        }
        case 'd':
        {
            cout<<*((double*)ptr)<<endl;
            break;
        }
        case 'c':
        {
            cout<<*((char*)ptr)<<endl;
            break;
        }
    }

}
int main()
{
    cout<<"Printing the void pointers :\n";
    int number=5;
    float fnumber=12.33;
    double dnumber=23.56789000;
    char letter='A';
    print(&number,'i');
    print(&fnumber,'f');
    print(&dnumber,'d');
    print(&letter,'c');
return 0;
}