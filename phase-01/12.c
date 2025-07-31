#include <stdio.h>
int main () {
    int year;
    printf("Enter any year: ");
    scanf("%d",&year);
    if (year%4 == 0)
    printf("Leap Year");
    else if (year%400 == 0)
    printf("Leap year");
    else if (year % 100 !=0)
    printf("its not leap year");
}