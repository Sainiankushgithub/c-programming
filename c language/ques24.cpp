#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    printf("Enter the number where upto you want ot print the fibbinacci series\n");
    scanf("%d",&n);
    int a,b;
    a=0;
    b=1;
    int next_term;
    printf("Displaying the fibbonacci series\n");
    printf("%d ",a);
    printf("%d ",b);
    for(int i=2;i<n;i++)
    {
        
        next_term=a+b;
        printf("%d ",next_term);
        a=b;
        b=next_term;
    }
return 0;
}