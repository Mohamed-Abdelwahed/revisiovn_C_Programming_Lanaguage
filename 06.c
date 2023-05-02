#include <stdio.h>
int main(){

  int number1 , number2;
  printf("Enter two number : ");
  scanf("%i %i" , &number1 , &number2);
  printf(
    "the quotient is : %i\nthe reaminder is : %i" , number1/number2 , number1%number2
  );
    return 0;
}