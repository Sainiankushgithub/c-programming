// MULTIPLICATION TABLE THROUGH 2D ARRAY 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    int column=10;
    printf("Enter the number that how many table do you want to find\n");
    scanf("%d",&row);
    int product[row][column];
    printf("Multi-Multiplication table\n");
    printf("\n");
    for(int i=1;i<=column;i++)
    {
        printf("  %d",i);
    }
    printf("\n___________________________\n");
    for(int i=1;i<=row;i++)
    {
        printf("%d|",i);
        for(int j=1;j<=column;j++)
        {
            product[i][j]=i*j;
            printf("  %d",product[i][j]);
        }
        printf("\n");
    }
return 0;
}