#include "unity.h"
#include <calculator_operations.h>

/* Modify these two lines according to the project */
#include <calculator_conversions.h>
#include <calculator_AreaPerimeter.h>
#include <calculator_pin.h>
#define PROJECT_NAME "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_add_testcase2(void);
void test_subtract(void);
void test_multiply(void); 
void test_divide(void);
void test_correct_pin(void);
void test_convertions(void);
void test_AreaPerimeter(void);
void test_modulus(void);
void test_factorial(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_add_testcase2);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_modulus);
  RUN_TEST(test_factorial);
  //RUN_TEST(test_correct_pin);
  RUN_TEST(test_convertions);
  RUN_TEST(test_AreaPerimeter);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  TEST_ASSERT_EQUAL(-10, add(10, -20));
  TEST_ASSERT_EQUAL(-100, add(10, -110));
}

void test_add_testcase2(void) {
 
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(1500, add(750, 7500));
  
  //TEST_ASSERT_EQUAL(100, add(250, 750));
}
void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
  TEST_ASSERT_EQUAL(3, subtract(6, 3));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(1, subtract(1000, 900));
  //TEST_ASSERT_EQUAL(10, subtract(1000, 90));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  TEST_ASSERT_EQUAL(10, multiply(1, 10));
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(2, multiply(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));
  TEST_ASSERT_EQUAL(3, divide(6, 2));
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(3, divide(2, 2));
}

void test_modulus(void) {
  TEST_ASSERT_EQUAL(1, modulus(-1));
  TEST_ASSERT_EQUAL(1, modulus(1));
 // TEST_ASSERT_EQUAL(, add(10, -20));
  //TEST_ASSERT_EQUAL(-100, add(10, -110));
}


void test_factorial(void) {
  TEST_ASSERT_EQUAL(2, factorial(2));
 // TEST_ASSERT_EQUAL(, add(10, -20));
  //TEST_ASSERT_EQUAL(-100, add(10, -110));
}
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(3, divide(2, 2));


//void test_factorial(void) {
  //TEST_ASSERT_EQUAL(2, factorial(2));
  //TEST_ASSERT_EQUAL(0, modulus(-1));
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(3, divide(2, 2));
//void test_correct_pin(void) {
  //TEST_ASSERT_EQUAL(0, correct_pin(1234));
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(1234, correct_pin(7878));
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(1, correct_pin(798678));
//}
void test_convertions(void) 
{
  TEST_ASSERT_EQUAL(472.441200, conversion(1,12));
  TEST_ASSERT_EQUAL(39.37008,conversion(2,12));
  TEST_ASSERT_EQUAL(180.4462,conversion(2,55));
  TEST_ASSERT_NOT_EQUAL(46867,conversion(1,56));
  TEST_ASSERT_NOT_EQUAL(0,conversion(1,1));
  TEST_ASSERT_NOT_EQUAL(486,conversion(1,486));
  TEST_ASSERT_NOT_EQUAL(0.5556,conversion(2,8888.2));

  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(111, conversion(1,2222));
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(4568, conversion(2,33144));
}

void test_AreaPerimeter(void)
{
   //for choose operation
  TEST_ASSERT_EQUAL(3.142000, Area_Circle(1));
  TEST_ASSERT_EQUAL(0, Area_Circle(-1));
  
 // TEST_ASSERT_EQUAL(152399025, Perimeter_Square(12345));
 // TEST_ASSERT_EQUAL(6.6564, Perimeter_Square(2.58));
  TEST_ASSERT_EQUAL(0, Perimeter_Square(0));
  
  TEST_ASSERT_EQUAL(0, Area_Square(-1));
  TEST_ASSERT_EQUAL(0, Area_Square(0));
  TEST_ASSERT_EQUAL(4, Area_Square(2));
 
  
  //TEST_ASSERT_EQUAL(0, Perimeter_Rectangle(0,0));
  //TEST_ASSERT_EQUAL(12, Perimeter_Rectangle(2,4));
  //TEST_ASSERT_EQUAL(0, Perimeter_Rectangle(-1,0));
 // TEST_ASSERT_EQUAL(0, Perimeter_Rectangle(-1,-2));
  
    /*Dummy Test fail*/
  //TEST_ASSERT_EQUAL("r", Area_Circle(1));
  //TEST_ASSERT_EQUAL("u", Perimeter_Rectangle(2,468));
    
   //for choose shape under area function
  //TEST_ASSERT_EQUAL(1, Area_Circle(1));
  //TEST_ASSERT_EQUAL(2, Perimeter_Square(2));
   
     /*Dummy Test fail*/
  //TEST_ASSERT_EQUAL("r", Area_Circle(1));
  //TEST_ASSERT_EQUAL("u", Perimeter_Square(2));
    
   //for choose shape under perimeter function
  //TEST_ASSERT_EQUAL(1, Area_Square(1));
  //TEST_ASSERT_EQUAL(2, Perimeter_Rectangle(2,879));

}

