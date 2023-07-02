 // BY CODE BEAUTY OOPS 5 ABOUT CONSTRUCTOR
 #include<bits/stdc++.h>
 using namespace std;
 class User
 {
    public:
    string FirstName;
    string LastName;
    int age;
    string Email;
    // AUTOMATTICALY DEFAULT CONSTRUCTOR CONSTRUCT WHICH GIVES SOME DEFAULT ASSIGNED VALUES
    // e.g User(){}
     
    //  CREATING THE DEFAULT CONSTRUCTOR
    User()
    {
        FirstName="a";
        LastName="s";
        age=0;
        Email="Not set";
    }

    // PARAMERTIRISED CONSTRUCTOR

    User(string fname,string lname,int a)
    {
        FirstName=fname;
        LastName=lname;
        age=a;
        Email=fname+"."+lname+"@gmail.com";
    }
    void dipslay();
 };
    void User :: display()
    {
        
    }
 {

 }
 int main()
 {
    User user1("Ankush ","Saini",19);
    cout<<"Displaying the paramertrised constructor\n";
    user1.display();
 return 0;
 }