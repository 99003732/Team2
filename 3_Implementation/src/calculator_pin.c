#include <calculator_pin.h>
 int correct_pin(int pin)
{
    int last_pin;
    FILE *fptr;
    fptr = fopen("PIN.txt", "r");
    last_pin=getw(fptr);
    if (last_pin==pin)
    return 1;
    else
    return 0;
}



