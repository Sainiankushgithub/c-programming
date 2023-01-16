#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char str2[100];
    printf("Enter the first string\n");
    gets(str);
    printf("Enter the second string\n");
    gets(str2);
    int len=strlen(str);
    int len2=strlen(str2);
    int flag;
    for(int i=0;i<len;i++)
    {
    if(len!=len2)
    {
        flag=0;
        break;
    }
        for(int j=0;j<len;j++)
        {
            if(str[i]==str2[j])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    if(flag==1)
    {
        printf("Enter string1 and string two are anagram\n");
    }
    else
    {
        printf("Enter string1 and string are not anagram\n");
    }
    return 0;
}