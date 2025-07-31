#include <stdio.h>
int main (){
    char ch;
    printf("Enter your letter: ");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z')
    printf("Capital letter");
     else if (ch>='a' && ch<='z')
     printf("Smell letter");
     else 
     printf("this is not a letter");

}