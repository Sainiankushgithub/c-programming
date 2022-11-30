#include<bits/stdc++.h>
using namespace std;
int main()
{
    int option;
    printf("HII here i m your simple calculator\n\tWhat doo you want to find given below\n");
    do
    {
        printf("Press 1 for addition \n");
        printf("Press 2 for subtraction \n");
        printf("Press 3 for multiplication \n");
        printf("Press 4 for divide \n");
        printf("Press 5 for clear screen \n");
        printf("Enter the choice\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
            {
                double a,b;
                printf("Enter the first number\n");
                scanf("%lf",&a);
                printf("Enter the second number\n");
                scanf("%lf",&b);
                double add=a+b;
                printf("Addition of the two number %.2lf\n",add);
                break;
            }
            case 2:
            {
                double a,b;
                printf("Enter the first number\n");
                scanf("%lf",&a);
                printf("Enter the second number\n");
                scanf("%lf",&b);
                double sub=a-b;
                printf("Subtraction of the two number %.2lf\n",sub);
                break;
            }
            case 3:
            {
                double a,b;
                printf("Enter the first number\n");
                scanf("%lf",&a);
                printf("Enter the second number\n");
                scanf("%lf",&b);
                double mult=a*b;
                printf("Multiplication of the two number %.2lf\n",mult);
                break;
            }
            case 4:
            {
                double a,b;
                printf("Enter the first number\n");
                scanf("%lf",&a);
                printf("Enter the second number\n");
                scanf("%lf",&b);
                double div=a/b;
                printf("Division of the two number %.2lf\n",div);
                break;
            }
            case 5:
            {
                system("cls");
                break;
            }
            default:
            {
                printf("Entered a Invalid number\n");
                break;
            }
        }
    } while (option!=5);
    
return 0;
}