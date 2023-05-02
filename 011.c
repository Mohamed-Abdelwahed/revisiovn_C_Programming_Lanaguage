#include <stdio.h>
int main(){

  char character;
  printf("Enter character : ");
  scanf("%c" , &character );
  if(character == 'a' || character == 'e' || character == 'o' || character == 'u' || character =='i' ||character == 'A' || character == 'E' || character == 'O' || character == 'U' || character =='I'){
    printf("charcter %c is vowel : " , character);
  }
  else
  {
    printf("charcter %c is Consonant . " , character);

  }





    return 0;
}