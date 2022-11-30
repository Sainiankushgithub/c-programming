#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    LOOP:do
    {
        if(a==15)
        {
            // It will skip this iteration
            a=a+1;
            goto LOOP;
        }
        printf("The value of a %d\n",a);
        a++;
    }while(a<20);
return 0;
}