#include <stdio.h>
int main () {
    int num;
    printf("Enter any number: ");
    scanf("%d\n",&num);
    if (num>0)
    printf("Possitive");
    else if (num<0)
    printf("Negative");
    else 
    printf ("Zero");

}