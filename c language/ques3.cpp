#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=21;
    int c=a;
    printf("line 1- =operator example, value of c=%d\n",c);
    c+=a;
    printf("line 2- +=operator example, value of c=%d\n",c);
    c-=a;
    printf("line 3- -=operator example, value of c=%d\n",c);
    c*=a;
    printf("line 4- *=operator example, value of c=%d\n",c);
    c/=a;
    printf("line 5- /=operator example, value of c=%d\n",c);
    c=200;
    c%=a;
    printf("line 6- %=operator example, value of c=%d\n",c);
return 0;
}