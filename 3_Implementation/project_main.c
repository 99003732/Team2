#include <calculator_operations.h>
#include <calculator_conversions.h>
#include <calculator_pin.h>
#include <calculator_AreaPerimeter.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
int calculator_operand1 = 0;
int calculator_operand2 = 0;
int no_of_op = 0;
int option_1;
double metre_input;
int choice_operation=0;
int choice_shape=0;
float area_of_circle;
double Acircle=0;
double Asquare=0;
double Psquare=0;
double Prectangle=0;
double radius=0;
double side=0;
double length=0;
double width=0;

/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE, FACTORIAL, MODULUS, CONVERT,AREAPERIMETER, EXIT };

/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);

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

void areaperimeter(void)
{
do
{
    printf("\nChoose the operation");
    printf("\n1->Area \n2->Perimeter\n3->Exit");
    scanf("%d",&choice_operation);

        if(choice_operation==1)
        {
            printf("Choose the shape");
            printf("\n1 -> Circle\n2 -> Square");
            scanf("%d",&choice_shape);

            while(choice_shape<3)
            {
                if(choice_shape==1)
                {
                    printf("\nEnter the radius of circle in cm");
                    scanf("%lf",&radius);
                    if(radius>0)
                    {
                        Acircle=Area_Circle(radius);
                        printf("\nArea of circle = %lf",Acircle);
                        break;
                    }
                    else
                    {
                        printf("\nRadius cannot be negative or zero");
                        break;
                    }

                }
                else if(choice_shape==2)
                {
                    printf("\nEnter the side of square in cm");
                    scanf("%lf",&side);
                    if(side>0)
                    {
                        Asquare=Area_Square(side);
                        printf("\nArea of square = %lf",Asquare);
                        break;
                    }
                    else
                    {
                         printf("\nSide cannot be negative or zero");
                         break;
                    }

                }
            }
            

        }

        else if(choice_operation==2)
        {
            printf("Choose the shape");
            printf("\n1 -> Square\n2 -> Rectangle");
            scanf("%d",&choice_shape);
            while(choice_shape<3)
            {

                if(choice_shape==1)
                {
                    printf("\nEnter the side of circle in cm");
                    scanf("%lf",&side);
                    if(side>0)
                    {
                        Psquare=Perimeter_Square(side);
                        printf("\nPerimeter of square = %lf",Psquare);
                        break;
                    }
                    else
                    {
                        printf("\nSide cannot be negative or zero");
                        break;
                    }

                }
                else if(choice_shape==2)
                {
                    printf("\nEnter the length of rectangle in cm");
                    scanf("%lf",&length);
                    if(length>0)
                    {
                        printf("\nEnter the width of rectangle in cm");
                        scanf("%lf",&width);
                        if(width>0)
                        {
                            Prectangle=Perimeter_Rectangle(length,width);
                            printf("\nPerimeter of rectangle = %lf",Prectangle);
                            break;
                        }
                        else
                        {
                            printf("\nWidth cannot be negative or zero");
                            break;
                        }

                      }
                      else
                        {
                            printf("\n length cannot be negative or zero");
                            break;
                        }

                }
            }
            

        }
    }while(choice_operation!=3);
}


/* Start of the application */
int main(int argc, char *argv[])
{int last_pin;//Input for previous pin
  int entered_pin;//Input for user entered pin
  last_pin=get_pin();//checking with the pin saved on file pin.txt
printf("Enter PIN: ");
scanf("%d",&entered_pin);
if(correct_pin(entered_pin)==1)
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}
else
    {
        printf("Wrong PIN \n");
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Factorial\n6. Modulus\n7. Convert\n8. AreaPerimeter \n9 .Exit");
    printf("\n\tEnter your choice\n");
     //__fpurge(stdin);
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }
    else if(ADD == calculator_operation)
    {
        printf("\n\tEnter your Numbers with space between them\n");
        //__fpurge(stdin);
        scanf("%lf %lf", &calculator_operand1, &calculator_operand2);
    }
    else if(SUBTRACT == calculator_operation)
    {
        printf("\n\tEnter your Numbers with space between them\n");
        //__fpurge(stdin);
        scanf("%lf %lf", &calculator_operand1, &calculator_operand2);
    }
    else if(MULTIPLY == calculator_operation)
    {
        printf("\n\tEnter your Numbers with space between them\n");
        //__fpurge(stdin);
        scanf("%lf %lf", &calculator_operand1, &calculator_operand2);
    }
    else if(DIVIDE == calculator_operation)
    {
        printf("\n\tEnter your Numbers with space between them\n");
        //__fpurge(stdin);
        scanf("%lf %lf", &calculator_operand1, &calculator_operand2);
    }
    else if(FACTORIAL == calculator_operation)
    {
        printf("\n\tEnter your Number: \n");
        //__fpurge(stdin);
        scanf("%lf", &calculator_operand1);
    }
    else if(MODULUS == calculator_operation)
    {
        printf("\n\tEnter your Number: \n");
        //__fpurge(stdin);
        scanf("%lf", &calculator_operand1);
    }
    else if(CONVERT == calculator_operation)
    {
        printf("\n\tPress 1 for Metre to Inch | Press 2 for Metre to Foot : \n");
        scanf("%d",&option_1);
        if (option_1 == 1)
        {
            printf("You are inside Metre to Inch Conversion \n");
            printf("Enter the number you want to convert: \n");
            scanf("%lf",&metre_input);
        }
        else if (option_1 == 2)
        {
            printf("You are inside Metre to Foot Conversion \n");
            printf("Enter the number you want to convert: \n");
            scanf("%lf",&metre_input);
        }
        else printf("Please press only 1 or 2");

    }

    else if(AREAPERIMETER == calculator_operation)
    {
        printf("\nYou have selected Area and Perimeter option");
        areaperimeter();
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        //__fpurge(stdin);
        getchar();
        return;
        
    }
    switch(calculator_operation)
    {
        case ADD:
            printf("\n\t%lf + %lf = %lf\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            add(calculator_operand1, calculator_operand2));
            
            // __fpurge(stdin);
            getchar();
            break;
        case SUBTRACT:
            printf("\n\t%lf - %lf = %lf\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            subtract(calculator_operand1, calculator_operand2));
            
            // __fpurge(stdin);
            getchar();
            break;
        case MULTIPLY:
            printf("\n\t%lf * %lf = %lf\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            multiply(calculator_operand1, calculator_operand2));
            
            //__fpurge(stdin);
            getchar();
            break;
        case DIVIDE:
            printf("\n\t%lf / %lf = %lf\nEnter to continue", 
            calculator_operand1,
            calculator_operand2,
            divide(calculator_operand1, calculator_operand2));

            //__fpurge(stdin);
            getchar();
            break;
        case FACTORIAL:
            printf("\n\tThe factorial of %lf is %lf\nEnter to continue", 
            calculator_operand1,
            factorial(calculator_operand1));

            //__fpurge(stdin);
            getchar();
            break;
        case MODULUS:
            printf("\n\tThe factorial of %lf is %lf\nEnter to continue", 
            calculator_operand1,
            factorial(calculator_operand1));

            //__fpurge(stdin);
            getchar();
            break;
        case CONVERT:
            printf("\n\tThe conversion of %lf is %lf\nEnter to continue",metre_input, conversion(option_1, metre_input));
            getchar();
            break; 

        case AREAPERIMETER:
            areaperimeter();
        
        case EXIT:
            exit(0);
            break;
            printf("\n\t---It should never come here---\n");
           

    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}