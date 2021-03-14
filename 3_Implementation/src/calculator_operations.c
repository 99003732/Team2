#include <calculator_operations.h>

double add(double operand1, double operand2)
{
    return operand1 + operand2;
}
double subtract(double operand1, double operand2)
{
    return operand1 - operand2;
}

double multiply(double operand1, double operand2)
{
    return operand1 * operand2;
}

double divide(double operand1, double operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

double modulus(double operand1)
{
    if(operand1<0)
    {
        operand1 = operand1*-1;
        return operand1;
    }
    else
        return operand1;
}

double factorial(double operand1)
{
    int iteration;
    int fact =1;
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
