#include <stdio.h>
int main(){

double number1 , number2;
printf("Enter number1 : ");
scanf("%lf" , &number1);
printf("Enter number2 : ");
scanf("%lf" , &number2);
printf("multibly %lf and %lf is %lf" , number1 , number2 , (number1/number2));

    return 0 ;
}