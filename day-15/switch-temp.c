#include <stdio.h>
int main()
{
    int choice;
    float temp, convertemp;

    printf("Tempareture conversion menu = \n");
    printf("1.Celsius to Fahrenheit \n");
    printf("2.Fahrenheit to Celsius \n");
    printf("Enter Your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {

    case 1:
    {
        printf("Enter Celsius tempareture: ");
        scanf("%f", &temp);
        convertemp = (1.8 * temp) + 32;
        printf("The fahrenheit tempareture: %f\n", convertemp);
        break;
    }

    case 2:
    {
        printf("Enter Fahrenheit tempareture: ");
        scanf("%f", &temp);
        convertemp = (temp-32)/1.8;
        printf("The Celsius tempareture: %f\n", convertemp);
    }
    }

    return 0;
}