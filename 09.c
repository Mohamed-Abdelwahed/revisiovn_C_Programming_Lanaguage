#include <stdio.h>
int main(){


int first_number , secound_number;
printf("Enter Two numbers");
scanf("%i %i" , &first_number , &secound_number);
printf("\nTwo numbers after swap : first number is %i and second number is %i\n" , first_number , secound_number);
int flag;
flag = first_number;
first_number = secound_number;
secound_number =flag;
printf("\nTwo numbers after swap : first number is %i and second number is %i\n" , first_number , secound_number);




    return 0 ;
}
