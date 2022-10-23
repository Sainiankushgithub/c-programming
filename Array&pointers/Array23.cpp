// WAP TO DO THE SEARCING THE IN THE ARRAY
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ele;
    int size;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the number of an elements\n");
    for(int i=1;i<=size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searcehed from above entered number\n");
    scanf("%d",&ele);
    for(int i=1;i<=size;i++)
    {
        if(arr[i]==ele)
        {
            printf("Entered element is at the location %d i.e arr[%d]=element=%d",i,i,ele);
            break;
        }
        else{
            printf("Entered element is not at array location arr[%d]!=element=%d",i,ele);
            printf("\n");
        }
    }
return 0;
}