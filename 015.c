#include <stdio.h>
int main(){
    int number ;
    printf("Eneter nnumber to check : ");
    scanf("%i" , &number);

    if(number > 0){
        printf("number %i is positive number . " , number);
    }else if (number < 0)
    {
        printf("number %i is negative number." , number);
    }else{
        printf("number is %i \'zero\'" , number);
    }
    

    return 0;

}