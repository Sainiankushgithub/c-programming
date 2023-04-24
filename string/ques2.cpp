/*WAP to copy one string into other with/without using a library function for copy operation*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter the string\n");
    gets(str1);
    // Coping the one string into other using string library function
    strcpy(str2,str1);
    printf("Displaying the coping string using library function: %s \n",str2);
    // Coping the string without using the string library
    int length=strlen(str1);
    printf("Displaying the coping string without using library function : ");
    for(int i=0;i<length;i++)
    {
        str2[i]=str1[i];
        printf("%c",str2[i]);
    }
return 0;
}