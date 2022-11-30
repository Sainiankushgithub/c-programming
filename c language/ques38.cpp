#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the numbers of an elements \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Displaying the entered elements\n");
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    printf("\nSum of your elements is %d",sum);
    double average;
    average=(double)sum/size;
    printf("\nAverage of your number is %.2lf",average);
return 0;
}