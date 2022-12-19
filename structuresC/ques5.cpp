#include<bits/stdc++.h>
using namespace std;
struct student
{
    char name[100];
    int age;
    int roll_no;
    char temp;
};
struct student s[100];
void output(int n);
int main()
{
    int n;
    printf("Enter the number for how many details of the student you want to store\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%c",&s[i].temp);
        printf("Enter the name of student :  %d \n",i+1);
        gets(s[i].name);
        printf("Enter the age of the student \n");
        scanf("%d",&s[i].age);
        printf("Enter the roll number of the student\n");
        scanf("%d",&s[i].roll_no);
    }
    output(n);
return 0;
}
void output(int n)
{
    printf("\n******************************************************************************************\n");
    for(int i=0;i<n;i++)
    {
        printf("Displaying the details of the student : %d\n",i+1);
        printf("Name : ");
        puts(s[i].name);
        printf("Age : %d\n",s[i].age);
        printf("Roll no. : %d\n",s[i].roll_no);   
    }
}