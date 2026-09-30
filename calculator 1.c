#include <stdio.h>
#include <stdlib.h>

int main()
{//dataType variables
    double num1,num2;
    char operator;
    double result;
    printf("enter first number:");
    scanf ("%lf",&num1);
    printf("enter an operator(+,-,*,/):");
    scanf(" %c",&operator);
    printf("enter second number:");
    scanf("%lf",&num2);
    if(operator=='+')
        result=num1+num2;
    else if(operator=='-')
        result=num1-num2;
    else if(operator=='*')
        result=num1*num2;
    else if(operator=='/')
        result=num1/num2;
    else
        printf("invalid operator");
    printf("Answer=%lf",result);
    return 0;
}
