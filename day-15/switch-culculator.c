#include <stdio.h>
int main()
{
    double num1, num2;
    char op;
    printf("Choice Oparetor (+,-,*,/) : ");
    scanf("%c", &op);
    printf("Enter numbers: ");
    scanf("%lf %lf", &num1, &num2);
    switch (op)
    {
        {
        case '+':
            printf("%lf + %lf = %lf",num1,num2,num1+num2);
            break;

        }
        {
        case '-':
            printf("%lf - %lf = %lf",num1,num2,num1-num2);
            break;

        }
        {
        case '*':
            printf("%lf * %lf = %lf\n",num1,num2,num1*num2);
            break;

        }
        {
        case '/':
            printf("%lf / %lf = %lf",num1,num2,num1/num2);
            break;

        }
        default:
        printf("Not a valied Oparetor \n");
    }



    return 0;
}