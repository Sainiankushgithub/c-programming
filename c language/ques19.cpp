#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2;
    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the second number\n");
    scanf("%d",&num2);
    printf("What do you want to find \n");
    printf("For addition press + \n");
    printf("For subtraction press - \n");
    printf("For multiplication press * \n");
    printf("For division press / \n");
    char choice;
    printf("Enter the choice \n");
    scanf("%s",&choice);
    switch(choice)
    {
        case '+':{
        int sum=num1+num2;
            printf("Sum of the two number is %d\n",sum);
            break;
        }
        case '-':
        
            printf(" Subtractionof the two number is %d\n",num1-num2);
            break;
        
        case '*':
        
            printf("Sum of the two number is %d\n",num1*num2);
            break;
        
        case '/':
        
            printf("Multiplication of the two number is %d\n",num1/num2);
            break;
        
        default:
            printf("Invalid entry\n");
    }
return 0;
}