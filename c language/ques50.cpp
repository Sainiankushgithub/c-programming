/*CALCULATING THE LENGTH OF THE STRING*/
#include<bits/stdc++.h>
using namespace std;
/*int stringlength(char str[])
{
    int count=0;
    int i=0;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}*/
int main()
{
    char str[30];
    printf("Enter your string \n");
    gets(str);
    /*stringlength(str);
    int len=stringlength(str);
    printf("Length of string : %d",len);*/
    int i=0;
    int count=0;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    printf("Length of the string is %d",count);
return 0;
}