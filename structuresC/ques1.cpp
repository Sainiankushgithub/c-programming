#include<bits/stdc++.h>
using namespace std;
struct student
{
    char name[50];
    int age;
    int roll_no;
    char section[20];
}ankush,sahil,lavish;
 /*GLOBALLY DEFINED VARIABLE WHICH CAN PUBLICLY ACCESS*/
 void print();
int main()
{
    ankush.age=18;
    sahil.age=17;
    lavish.age=16;
    ankush.roll_no=2206409;
    sahil.roll_no=2206408;
    lavish.roll_no=2204307;
    ankush.age=18;
    sahil.age=17;
    lavish.age=16;
    printf("Enter the sahil full name\n");
    gets(sahil.name);
    printf("%s\n",sahil.name);
    printf("Ankush :          %s",strcpy(ankush.name,"Brilliant personality with great idea's"));
    printf("\nAnkush age :    %d\n",ankush.age);
    printf("Ankush roll no. : %d\n",ankush.roll_no);
    print();
return 0;
}
void print()
{
    printf("Lavish age : %d\n",lavish.age);
    printf("Lavish roll no. : %d\n",lavish.roll_no);
 }