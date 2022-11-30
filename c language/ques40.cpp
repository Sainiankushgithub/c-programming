#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the number of an elemets\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Displaying the even numbers\n");
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}