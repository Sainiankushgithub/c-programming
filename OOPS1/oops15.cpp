// BY CODE BEAUTY OOPS 5 ABOUT DESTRUCTOR
#include<bits/stdc++.h>
using namespace std;
class Book 
{
    public:
    string Title;
    string Author;
    int *Rates;
    int ratecounter;
    Book(string title,string author)
    {
        Title=title;
        Author=author;
        ratecounter=2;
        Rates=new int[ratecounter];
        Rates[0]=4;
        Rates[1]=5;
    }
    Book(const Book& original)
    {
        Title=original.Title;
        Author=original.Author;
        ratecounter=original.ratecounter;
        Rates=new int[ratecounter];
        for(int i=0;i<ratecounter;i++)
        {
            Rates[i]=original.Rates[i];
        }
    }
    ~Book()
    {
        delete [] Rates;
        Rates=nullptr;
    }
};
void display(Book book)
{
    cout<<"Title  : "<<book.Title<<endl;
    cout<<"Author : "<<book.Author<<endl;
    float sum=0;
    for(int i=0;i<book.ratecounter;i++)
    {
        sum+=book.Rates[i];
    }
    cout<<"Average : "<<sum/book.ratecounter<<endl;
}
int main()
{
    Book book1("Millionaire in festlane ","M J Demarco");
    Book book2("c++ lambda stroy","Bartek f");

    // COPY CONSTRUCTOR

    Book book3(book1);

    
    display(book1);
    display(book2);
    display(book3);
return 0;
}