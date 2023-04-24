/*WAP to find the length of a string with/without using library function for getting length of the
string*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    printf("Enter the string to find its length\n");
    gets(str);
    int length=strlen(str);
    printf("Length of the string is : %d\n",length);
    // Another way to write string 
    int count=0;
    int i=0;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    printf("Length of the string is : %d\n",count);
return 0;
}