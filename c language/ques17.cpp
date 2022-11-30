#include<bits/stdc++.h>
using namespace std;
int main()
{
    int total_marks;
    int tm;
    printf("Enter your marks\n");
    scanf("%d",&total_marks);
    tm=total_marks/100;
    switch(tm)
    {
        case 9:
        {
            printf("You secured O grade\n");
            break;
        }
        case 8:
        {
            printf("You secured E grade\n");
            break;
        }
        case 7:
        {
            printf("You secured A grade\n");
            break;
        }
        case 6:
        {
            printf("You secured B grade\n");
            break;
        }
        case 5:
        {
            printf("You secured C grade\n");
            break;
        }
        case 4:
        {
            printf("You are fail\n");
            break;
        }
        default:
        {
            printf("Fail");
        }
    }
return 0;
}