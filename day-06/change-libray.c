#include <stdio.h>
int main(){
    // char lower,uper;
    // printf("print a lower value: ");
    // scanf("%c", &lower);
    // uper = toupper(lower);
    // printf("the upper value is : %c\n", uper);


    // uppercase to lowercase

    char upper,lower;
    printf("Enter a uppercase Ltter: ");
    scanf("%c",&upper);
    lower = tolower(upper);
    printf("Lowercase latter is : %c\n",lower);
}