#include<stdio.h>
void display(int arr[])
{
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]+20);
    }
}
int main()
{
    int arr[10];
    printf("Enter the numbers of an elements\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Displaying your array\n");
    display(arr);
    return 0;
}