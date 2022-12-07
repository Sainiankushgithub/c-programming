#include<bits/stdc++.h>
using namespace std;
struct employee
{
    char name[20];
    int age;
    int salary;
};
/*struct employee e1,e2;
void print()
{                                  THIS DATA IS NOT ACCESSIBLE WITH INSIDE LOCAL VARIABLE
    printf("%s",e1.name);
    printf("%d",e1.age);
}*/
int main()
{
    struct employee e1={"Ankush saini",18,150000};
    puts(e1.name);
    printf("%d\n",e1.age);
    printf("%d\n",e1.salary);
    struct employee e2={"Sahil saini",18,100000};
    puts(e2.name);
    printf("%d\n",e2.age);
    printf("%d\n",e2.salary);
    // print();
    struct employee e3;
    printf("Enter third employee name : \n");
    gets(e3.name);
    printf("Enter the age : \n");
    scanf("%d",&e3.age);
    printf("Enter the anuall salary :\n");
    scanf("%d",&e3.salary);
    printf("Displaying the details\n");
    printf("Name : ");
    puts(e3.name);
    printf("Age  : %d\n",e3.age);
    printf("Salary : %d",e3.salary);
return 0;
}