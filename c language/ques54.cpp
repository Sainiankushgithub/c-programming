/*TRANSPOSE OF THE MATRIX*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    printf("Enter the number of rows\n");
    scanf("%d",&m);
    printf("Enter the number of columns\n");
    scanf("%d",&n);
    int arr[m][n];
    int count=0;
    printf("Enter the number of elements for first row\n");
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
    printf("Your given matrix is \n");
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the matrix is \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
return 0;
}