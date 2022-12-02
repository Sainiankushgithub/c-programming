/*LINEAR SEARCH */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    int arr[100];
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    printf("Enter the numbers of an elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int element;
    printf("Enter the element to be searched\n");
    scanf("%d",&element);
    int position=0;
    int count=1;
    for(int i=0;i<size;i++)
    {
        count++;
        if(arr[i]==element)
        {
        printf("Element present at the position of arr[%d]\n",position);
        break;
        }
        else{
           position++;
        }
    }
    if(count>size)
    {
        printf("Element not found\n");
    }
return 0;
}