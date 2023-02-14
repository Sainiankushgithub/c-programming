#include<stdio.h>
int sum(int n1,int n2)
{
    return n1+n2;
}
int main()
{
    int n1,n2;
    printf("Enter two number\n");
    scanf("%d%d",&n1,&n2);
    sum(n1,n2);
    printf("Sum = %d",sum(n1,n2));
    return -1;
}