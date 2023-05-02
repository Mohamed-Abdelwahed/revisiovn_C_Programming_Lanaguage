#include <stdio.h>
int main(){

    int number1 , number2 , number3;
    printf("Enter Three numbers  : ");
    scanf("%i %i %i" , &number1  , &number2 , &number3);

    int largest = number1>number2 && number1>number3 ?number1 : number2>number3 ? number2 : number3;

    printf("The largest number is : %i" , largest);


    return 0;
}
