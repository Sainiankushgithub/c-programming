#include<bits/stdc++.h>
using namespace std;
struct employee
{
    char *name;
    int age;
    int salary;
}e1,e2;
int manager()//--------/*USING A STRUCTURE TAG*/
{
    struct employee manager;
    manager.age=27;
    if(manager.age>30)
    {
        manager.salary=65000;
    }
    else
    {
        manager.salary=45000;
    }
    return manager.salary;
}
int main()
{
    printf("Enter the salary of employee 1\n");
    scanf("%d",&e1.salary);
    printf("Enter the salary of employee 2\n");
    scanf("%d",&e2.salary);
    printf("Employee 1 salary : %d\n",e1.salary);
    printf("Employee 2 salary : %d\n",e2.salary);
manager();
printf("Manager salary : %d",manager());
return 0;
}