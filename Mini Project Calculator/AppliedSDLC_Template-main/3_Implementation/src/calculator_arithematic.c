#include <stdio.h>
void Addition(int,int);
void Substraction(int,int);
void Multiplication(int,int);
void Division(int,int);
int main()
{
int num1, num2;
int choice;
char again='Y';
while(again=='Y'){
printf("\nPress 1 for Addition ");
printf("\nPress 2 for Subtraction ");
printf("\nPress 3 for Multiplication ");
printf("\nPress 4 for Division ");
printf("\nEnter ur choice : ");
scanf("%d" ,&choice);
switch(choice)
{
case 1:{
printf("enter two numbers");
scanf("%d%d",&num1,&num2);
Addition(num1,num2);}
break;
case 2:{
printf("enter two numbers");
scanf("%d %d",&num1,&num2);
Substraction(num1,num2);}
break;
case 3:{
printf("enter two numbers");
scanf("%d %d",&num1,&num2);
Multiplication(num1,num2);}
break;
case 4:{
printf("enter two numbers");
scanf("%d %d",&num1,&num2);
Division(num1,num2);}
break;
default:
printf("\nInvalid Choice ");
}
printf("\nDo you want to calculate again Y/N\n");
scanf("%c,&again");
again=toupper(again);
}
return 0;
}
void Addition(int num1,int num2)
{
      int sum=num1+num2;
      printf("Sum=%d",sum);
}
void Substraction(int num1,int num2)
{
      int diff=num1-num2;
      printf("Difference=%d",diff);
}
void Multiplication(int num1,int num2)
{
      int product=num1*num2;
      printf("Product=%d",product);

}
void Division(int num1,int num2)
{
    if(num2!=0){
    float quotient=num1/num2;
    int reminder=num1%num2;
    printf("\nQuotient=%f Reminder=%d",quotient,reminder);
    }
    else
    printf("\nEnter Valid Input");
}