#include<stdio.h>
int main()
{   
     int sum=0;
     int a;
    printf("Enter the 10 numbers\n");
    for(int i=1;i<=10;i++)
    {
        scanf("%d",&a);
        sum=sum+a;
    } 
    printf("Sum of the 10 number is %d\n",sum);
    float average=(float)sum/10;
    printf("Average of the number=%.2f\n",average);
}