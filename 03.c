#include <stdio.h>
int main(int argc, char const *argv[])
{
    int number1 , number2 ; 
    printf("Enter number1 : ");
    scanf("%i" , &number1);
    printf("Eneter number2 : ");
    scanf("%i" , &number2);
    printf("\nsum of %i and %i is %i" ,number1 , number2 , number1+number2 );
    return 0;
}
