/*Multiplication of two matrix*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    int count=0;
    int count1=0;
    printf("Enter the numbers of row\n");
    scanf("%d",&m);
    printf("Enter the number of column\n");
    scanf("%d",&n);
    int arr[m][n];
    int brr[m][n];
    int crr[m][n];
    printf("Enter the elements for first row of the first matrix\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        count++;
        if(count<m)
        {
            printf("Enter the elements for next row\n");
        }
    }
    printf("Enter the number of element for second matrix\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&brr[i][j]);
        }
        count1++;
        if(count1<m)
        {
            printf("Enter the elements for next row\n");
        }
    }
    printf("Multiplication of the two matrix is \n");
    int sum;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum=0;
            for(int k=0;k<m;k++)
            {
                sum+=arr[i][k]*brr[k][j];
                crr[i][j]=sum;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }
return 0;
}