#include <calculator_operations.h>

int add(int n)
{
    int summ=0,number=0,k=0;
    printf("please enter operands one by one");
    while(k<n){
        scanf("%d",&number);
        summ=summ+number;
        k=k+1;
    }
    return summ;
}
int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}