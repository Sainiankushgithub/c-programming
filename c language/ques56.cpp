#include<stdio.h>
void bubblesort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void output(int arr[],int n)
{
    printf("Displaying the arrays elements in ascending order\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
int main()
{
    int arr[100];
    int n;
    printf("Enter the size of an array\n ");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    output(arr,n);
    return 0;
}
