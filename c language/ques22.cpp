#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0;
    int b=1;
    int next_term;
    printf("Displaying the fibbonacci series\n");
    printf("%d",a);
    printf("%d",b);
    for(int i=2;i<=10;i++)
    {
        next_term=a+b;
        printf("%d\n",next_term);
        a=b;
        b=next_term;
    }
return 0;
}