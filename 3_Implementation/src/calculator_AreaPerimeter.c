#include <calculator_AreaPerimeter.h>

double Area_Circle(double radius)
{
    double area_of_circle=0;
    if(radius>0)
    {
        area_of_circle=PI*(radius*radius);
        return area_of_circle;
    }
    else
    {
        return 0;
    }
}

double Area_Square(double side)
{
    double area_of_square=0;
    if(side>0)
    {
        area_of_square=side*side;
        return area_of_square;
    }
    else 
    {
        return 0;
    }
}

double Perimeter_Square(double side)
{
    double perimeter_of_square=0;
    if(side>0)
    {
        perimeter_of_square=side*4;
        return perimeter_of_square;
    }
    else
    {
        return 0;
    }

}

double Perimeter_Rectangle(double l,double w)
{
    double perimeter_of_rectangle=0;
    if(l>0 && w>0)
    {
        perimeter_of_rectangle=2*(l+w);
        return perimeter_of_rectangle;
    }
    else
    {
        return 0;
    }

}
