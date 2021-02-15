/** 
 @file calculator_AreaPerimeter.h
* Calculator application with Area and perimeter operations
*
*/

#ifndef __CALCULATOR_AREAPERIMETER_H__
#define __CALCULATOR_AREAPERIMETER_H__

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<math.h>
#define PI 3.142

double Area_Circle(double radius);
double Area_Square(double side);
double Perimeter_Square(double side);
double Perimeter_Rectangle(double l,double w);
void areaperimeter(void);

#endif  /* #define __CALCULATOR_AREAPERIMETER_H__ */


