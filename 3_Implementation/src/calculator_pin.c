#include <calculator_pin.h>
 correct_pin(int pin)
{
    int last_pin;
    last_pin=get_pin();
    if (last_pin==pin)
    return 1;
  else
  return 0;

}
int get_pin()
{int saved_pin,new_pin;
 FILE *fptr;
   fptr = fopen("PIN.txt", "r");
  
  // display numbers
  if((saved_pin = getw(fptr)) != EOF )     
  {//saved_pin=getw(fptr);
  fclose(fptr);
  return saved_pin;}
  else
  update_pin();
    // close connection
 
  
}
void update_pin()
{int new_pin;
printf("Enter New PIN : ");
scanf("%d",&new_pin);
 FILE *fptr;
     // creating a FILE variable
  
 
   
  // open the file in write mode
  fptr = fopen("PIN.txt", "w");
  
    
  // enter integer numbers
  
  putw(new_pin, fptr);
        
  
  // close connection
  fclose(fptr);
  correct_pin(new_pin);
}
