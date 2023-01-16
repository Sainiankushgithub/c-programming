// REVERSE STRING WITHOUT USING THE STRING LIBRARY FUNCTIONS
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    char str2[100];
    printf("Enter the string\n");
    gets(str);
    int len=strlen(str);
    printf("Length of the string is %d\n",len);
    printf("Your entered string before reverse\n");
    puts(str);
    for(int i=0;i<=len;i++)
    {
        str2[i]=str[i];
    }

   /* printf("Displaying the str2\n");
    for(int i=0;i<len;i++)
    {
        printf("%c",str2[i]);
    }
    printf("\n");*/
    puts(str2);
    for(int i=0;i<=len/2;i++)
    {
        char temp=str[i];
        str[i]=str[len-i];
        str[len-i]=temp;
    }
    printf("your entered string in reverse order\n");
    for(int i=0;i<=len;i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    for(int i=0;i<=len;i++)
    {
        if(str2[i]!=str2[len-i])
        {
            printf("String is not palindrome\n");
            return 0;
        }
    }
    printf("String is palindrome\n");
return 0;
}