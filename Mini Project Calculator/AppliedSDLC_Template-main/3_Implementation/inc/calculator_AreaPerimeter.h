/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __CALCULATOR_AREAPERIMETER_H__
#define __CALCULATOR_AREAPERIMETER_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
double Area_Circle(double radius);

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
double Area_Square(double side);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
double Perimeter_Square(double side);
double Perimeter_Rectangle(double l,double w);
/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/

#endif  /* #define __CALCULATOR_AREAPERIMETER_H__ */