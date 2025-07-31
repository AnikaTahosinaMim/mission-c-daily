#include <stdio.h>
int main()
{
    float c, f;
    printf("Enter a cintigrade temperature: ");
    scanf("%f\n", &c);
    f = (1.8 * c) + 32;
    printf("The fahren temp:  %.3f\n", f);
}