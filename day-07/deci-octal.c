#include <stdio.h>
int main () {

    /*
    decimal to octal conversion
    */


    int number;
    printf("Enter a decimal number:");
    scanf("%d",&number);
    printf("The octal number is : %o", number);


    /*
    Octal to decimal conversion
    
    */

    int octal;
    printf("Enter a octal Number: ");
    scanf("%o",&octal);
    printf("The decimal number is : %d",octal);
    return 0;
}