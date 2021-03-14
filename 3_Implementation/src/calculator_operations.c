#include <calculator_operations.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
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

int modulus(int operand1)
{
    if(operand1<0)
    {
        operand1 = operand1*-1;
        return operand1;
    }
    else
        return operand1;
}

int factorial(int operand1)
{
    int fact, iteration;
    if (operand1 < 0)
        return 1;
    else 
    {
        for (iteration = 1; iteration <= operand1; ++iteration)
        {
            fact *= iteration;
        }
        return fact;
    }
}
