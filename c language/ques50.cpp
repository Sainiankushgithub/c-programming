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
    /***************************************************************/
    /*SOME FUNCTION IN STRING*/
    int  var1='M';
    int  var2='m';
    if(isupper(var1))
    {
        printf("Var1 =|%c| is upper case\n",var1);
    }
    else
    {
        {
        printf("Var1 =|%c| is not upper case\n",var1);
    }
    }
    if(isupper(var2))
    {
        printf("Var1 =|%c| is upper case\n",var2);
    }
    else
    {
        {
        printf("Var1 =|%c| is not upper case\n",var2);
    }
    }
return 0;
}