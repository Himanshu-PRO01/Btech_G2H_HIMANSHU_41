#include<stdio.h>
int main()
{
    int num1,num2,result;
    char operator;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    printf("Enter the operator");
    scanf("%d",&operator);
    switch(operator)
    {
        case'+':
        result=num1+num2;
        printf("Addition is:?%d",result);
        break;
       case'-':
        result=num1-num2;
        printf("Substraction is:?%d",result);
        break;
        case'*':
        result=num1*num2;
        printf("Multiplication is:?%d",result);
        break;
        case'/':
        result=num1/num2;
        printf("division is:?%d",result);
        break;
        default:
        printf("oops! worng choice");



    }
    return 0;
}