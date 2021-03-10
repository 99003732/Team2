#include <calculator_AreaPerimeter.h>



double Area_Circle(double radius)
{
    double area_of_circle=0;
    {
        area_of_circle=PI*pow(radius,2);
        printf("\narea of circle calculated");
        return area_of_circle;
    }
        printf("\nEnter valid input!");

}

double Area_Square(double side)
{
    double area_of_square=0;
    {
        area_of_square=side*side;
        printf("\narea of square calculated");
        return area_of_square;
    }
       

}

double Perimeter_Square(double side)
{
    double perimeter_of_square=0;
  
    {
        perimeter_of_square=side*4;
        printf("\nperimeter of square calculated");
        return perimeter_of_square;
    }
       

}

double Perimeter_Rectangle(double l,double w)
{
    double perimeter_of_rectangle=0;
    
    {
        perimeter_of_rectangle=2*(l+w);
        printf("\nPerimeter of rectangle calculated");
        return perimeter_of_rectangle;
    }
       

}

void areaperimeter(void)
{
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


