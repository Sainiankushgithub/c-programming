/*C-question----> Enter the detail of the three students and print it*/
#include<bits/stdc++.h>
using namespace std;
struct student
{
    char name[100];
    int  age;
    int roll_no;
    char temp;
}s1,s2,s3;
void output()
{
    printf("Displaying the detials of first student1\n");
    puts(s1.name);
    printf("%d\n",s1.age);
    printf("%d\n",s1.roll_no);
    printf("Displaying the detials of second student1\n");
    puts(s2.name);
    printf("%d\n",s2.age);
    printf("%d\n",s2.roll_no);
    printf("Displaying the detials of third student1\n");
    puts(s3.name);
    printf("%d\n",s3.age);
    printf("%d\n",s3.roll_no);
}
int main()
{
    s1={"Ankush saini",18,2206409};
    s2={"sahil saini",18,2230326};
    s3={"Ayush sharma ",18,2206408};

// IF you WANT TO TAKE INPUT FROM THE USER

    /*printf("Enter the name of first student\n");
    gets(s1.name);
    printf("Enter the age\n");
    scanf("%d",&s1.age);
    printf("Enter the roll no.\n");
    scanf("%d",&s1.roll_no);
    scanf("%c",&s1.temp);
    printf("Enter the name of second student\n");
    gets(s2.name);
    printf("Enter the age\n");
    scanf("%d",&s2.age);
    printf("Enter the roll no.\n");
    scanf("%d",&s2.roll_no);
    scanf("%c",&s2.temp);
    printf("Enter the name of third student\n");
    gets(s3.name);
    printf("Enter the age\n");
    scanf("%d",&s3.age);
    printf("Enter the roll no.\n");
    scanf("%d",&s3.roll_no);*/
    output();
return 0;
}