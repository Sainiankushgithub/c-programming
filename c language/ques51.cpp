/*CONVERTOR OF UPPER CASE INTO LOWER CASE*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[30];
    printf("Enter the any string\n");
    gets(str);
    int length=strlen(str);
    printf("Length of string %d\n",length);
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        i++;
    }
    printf("Your name in running words\n");
    puts(str);
    printf("Reverse string\n");
    strrev(str);
    puts(str);
    printf("Copying the string\n");
    char str2[20];
    puts(strcpy(str2,str));
return 0;
}