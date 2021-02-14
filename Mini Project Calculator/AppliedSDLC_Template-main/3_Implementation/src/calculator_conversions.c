#include <calculator_conversions.h>

double conversion(int option_1, double metre_input)
{

        if (option_1 == 1) 
        {
            return 39.3701 * metre_input;
        }
        else if (option_1 ==2)
        {
            return 3.28084 * metre_input;
        }
        else return 0;
}